/**
 * @file PathFinder.cpp
 * @author Marcello Cirillo
 *
 *  Created on: Apr 11, 2011
 *      Author: marcello
 */

#include "mpac_global_planner/PathFinder.h"

#include <visualization_msgs/Marker.h>
#include <mpac_rviz/mpac_rviz.h>
#include <spdlog/spdlog.h>
#include <boost/heap/binomial_heap.hpp>

struct CompareNodes {
  /// Sorting 2D nodes by increasing C value - the total estimated cost
  bool operator()(const Node2D* lhs, const Node2D* rhs) const {
    return lhs->getC() > rhs->getC();
  }
};

PathFinder::PathFinder(double x, double y) {
	unsigned short int xCells = (unsigned short int) (x / WP::WORLD_SPACE_GRANULARITY + WP::CALCULATION_APPROXIMATION_ERROR);
	unsigned short int yCells = (unsigned short int) (y / WP::WORLD_SPACE_GRANULARITY + WP::CALCULATION_APPROXIMATION_ERROR);
	// create a new empty map
	worldMap_ = new WorldOccupancyMap(xCells, yCells, WP::WORLD_SPACE_GRANULARITY);
	xSize_ = x;
	ySize_ = y;
	dataGatheringForVehicleHT_ = false;
	timeBound_ = 0;
	myWorld_ = 0;
	missions_.clear();
}

PathFinder::PathFinder(std::string filename) {
	worldMap_ = new WorldOccupancyMap(std::string().append(WP::MAPS_DIR).append(filename).append(".map"));
	xSize_ = worldMap_->getXSize();
	ySize_ = worldMap_->getYSize();
	dataGatheringForVehicleHT_ = false;
	timeBound_ = 0;
	myWorld_ = 0;
	missions_.clear();
}

PathFinder::PathFinder(WorldOccupancyMap* map) {
	worldMap_ = map;
	xSize_ = worldMap_->getXSize();
	ySize_ = worldMap_->getYSize();
	dataGatheringForVehicleHT_ = false;
	timeBound_ = 0;
	myWorld_ = 0;
	missions_.clear();
}

PathFinder::~PathFinder() {
	// if (worldMap_) {
	// 	delete worldMap_;
	// }
	if (myWorld_) {
		delete myWorld_;
	}
}

void PathFinder::selectSubMap(double xfrom, double yfrom, double xto, double yto) {
	if (worldMap_) {
		worldMap_->selectSubMap(xfrom, yfrom, xto, yto);
		xSize_ = worldMap_->getXSize();
		ySize_ = worldMap_->getYSize();
	} else {
		if (WP::LOG_LEVEL >= 1) {
			writeLogLine(std::string("WARNING: WorldMap not found!"), "PathFinder", WP::LOG_FILE);
		}
	}
}

void PathFinder::addMission(VehicleMission* m) {
	missions_.clear();
	missions_.push_back(m);
}

void PathFinder::enableDataGatheringForVehicleHT() {
	dataGatheringForVehicleHT_ = true;
}

void PathFinder::setTimeBound(int seconds) {
	timeBound_ = seconds;
}

std::vector<std::vector<Configuration*>> PathFinder::solve(bool visualization) {

	std::vector<std::vector<Configuration*> > result;
	result.clear();

	// do we have missions?
	if (missions_.size() == 0) {
		writeLogLine(std::string("No missions to accomplish"), "PathFinder", WP::LOG_FILE);
		return result;
	}

	// check if all VehicleModels have the same world granularity
	for (std::vector<VehicleMission*>::iterator it =  missions_.begin(); it != missions_.end(); it ++) {
		if (fabs((*it)->getVehicleModel()->getModelGranularity() - WP::WORLD_SPACE_GRANULARITY) > WP::CALCULATION_APPROXIMATION_ERROR) {
      writeLogLine(std::string("FATAL ERROR: mismatching model resolutions (check also that the primitive file was loaded)"), "PathFinder", WP::LOG_FILE);
			return result;
		}
	}

	// first, check if PathFinder has been properly invoked
	if (dataGatheringForVehicleHT_ && timeBound_ > 0) {
		if (WP::LOG_LEVEL >= 1) {
			writeLogLine(std::string("FATAL ERROR: data gathering not possible with time restrictions"),
					"PathFinder", WP::LOG_FILE);
		}
		return result;
	}

	if (WP::LOG_LEVEL >= 1) {
		std::string line = std::string("Solving -- ");
		line.append(boost::posix_time::to_iso_string(boost::posix_time::second_clock::local_time()));
		writeLogLine(line, "PathFinder", WP::LOG_FILE);
	}

	// create the world
	ros::Time map_Start = ros::Time::now();

	myWorld_ = new World(worldMap_, missions_);
	myWorld_->calculateGridDistancesFromGoals();
	ros::Time map_end = ros::Time::now();
	if (WP::LOG_LEVEL >= 1) {
		if(worldMap_->containsObstacles()) {
			writeLogLine(std::string("Creating World from Map"), "PathFinder", WP::LOG_FILE);
			ROS_INFO("map use time:%f",(map_end-map_Start).toSec());
		} else {
			writeLogLine(std::string("Creating simple World"), "PathFinder", WP::LOG_FILE);
		}
	}


	// create the initial node
	std::vector<Configuration*> initialConfs;
	initialConfs.clear();
	for (std::vector<VehicleMission*>::iterator it = missions_.begin(); it != missions_.end(); it++) {
		// clone the start configurations
		Configuration* conf = (*it)->getStartConfiguration()->clone();
		initialConfs.push_back(conf);
	}

	// create the first node and pass it to the PathPlanner (clone it, because it
	// shouldn't be destroyed when the planner is done)
	PathNode* startNode = new PathNode(initialConfs, myWorld_, 0);

	// reset the clock
	boost::posix_time::ptime startTime(boost::posix_time::microsec_clock::local_time());

	// solve the problem: check if to use A* or ARA*
	std::vector<Node*> solution;
	if (timeBound_ > 0) {
		SPDLOG_INFO("Using ARA* planner {} seconds!",timeBound_);
		ARAStarPathPlanner* planner = new ARAStarPathPlanner(startNode, myWorld_, startTime, timeBound_);
		solution = planner->solve();
		delete planner;
	} else {
		SPDLOG_INFO("Using A* algorithm!",timeBound_);
		AStarPathPlanner* planner = new AStarPathPlanner(startNode, myWorld_);
		if (dataGatheringForVehicleHT_) {
			planner->enableHTDataCollection();
		}
		solution = planner->solve();
		delete planner;
	}

	// stop the clock
	boost::posix_time::ptime endTime(boost::posix_time::microsec_clock::local_time());
	boost::posix_time::time_duration duration(endTime - startTime);
	SPDLOG_INFO("Execution time: {} milliseconds",(unsigned long int) duration.total_milliseconds());

	if (WP::LOG_LEVEL >= 2) {
		PathNode* pn;
		for (std::vector<Node*>::iterator it = solution.begin(); it != solution.end(); it++) {
			pn = dynamic_cast<PathNode*>(*it);
			pn->print();
		}
	}

	// prepare the result to return, extracting the Configurations. Cleanup
	PathNode* pn;
	unsigned short int numberOfVehicles = missions_.size();
	result.resize(numberOfVehicles);
	for (std::vector<Node*>::iterator it = solution.begin(); it != solution.end(); it++) {
		pn = dynamic_cast<PathNode*>(*it);
		for (unsigned short int i = 0; i < numberOfVehicles; i ++) {
			Configuration* c = (pn->getConfigurations())[i];
			result[i].push_back(c->clone());
		}
		delete pn;
	}

	// remove duplicate Configurations from the results
	std::vector<Configuration*> tmp;
	for (unsigned short int i = 0; i < numberOfVehicles; i ++) {
		tmp.clear();
		while (result[i].size() > 0) {
			if (result[i].size() > 1 && result[i][0]->equalConfigurations(result[i][1])) {
				Configuration* config = result[i][0];
				delete config;
				result[i].erase(result[i].begin());
			} else {
				tmp.push_back(result[i][0]->clone());
				Configuration* config = result[i][0];
				delete config;
				result[i].erase(result[i].begin());
			}
		}
		result[i].clear();
		result[i] = tmp;
	}

	return result;
}

std::vector<mpac_generic::Pose2d> PathFinder::solve(){

	std::vector<mpac_generic::Pose2d> result;
	if (missions_.size() == 0) {
		SPDLOG_INFO("No missions to accomplish!");
		return result;
	}
    SPDLOG_INFO("has {} missions!",missions_.size());
	myWorld_ = new World(worldMap_, missions_);
	
	int width = worldMap_->getXCells();
	int height = worldMap_->getYCells();
	
	Node2D* nodes2D = new Node2D[width*height]();
	  // PREDECESSOR AND SUCCESSOR INDEX
	int iPred, iSucc;
	float newG;

	VehicleMission* mit = missions_.back();

	Node2D goal;
	goal.setX(mit->getGoalConfiguration()->getXCell());
	goal.setY(mit->getGoalConfiguration()->getYCell());

	Node2D start;
	start.setX(mit->getStartConfiguration()->getXCell());
	start.setY(mit->getStartConfiguration()->getYCell());

	for (size_t i = 0; i < width*height; i++)
	{
		nodes2D[i].reset();
	}
	boost::heap::binomial_heap<Node2D*,boost::heap::compare<CompareNodes>> openList;//Open list, ???????????????heap
        
	start.updateH(goal);
	start.open();
	openList.push(&start);
	iPred = start.setIdx(width);
	nodes2D[iPred] = start;

	// NODE POINTER
	Node2D* nPred;
	Node2D* nSucc;

	std::vector<Node2D*> searchList;
	while (!openList.empty())
	{
		searchList.clear();
		int count = 0;
		while (!openList.empty() && count<100)
		{
			count++;
			searchList.push_back(openList.top());
			openList.pop();
		}

		for (size_t i = 0; i < searchList.size(); i++)
		{
			nPred = searchList[i];
			iPred = nPred->setIdx(width);
			//?????????????????????????????????open set???????????????????????????
			if (nodes2D[iPred].isClosed())
			{
				continue;
			}
			else if(nodes2D[iPred].isOpen())//??????????????????
			{
				nodes2D[iPred].close();
				nodes2D[iPred].discover();

				if (*nPred == goal)
				{
					std::vector<Node2D> nodePath;
					Node2D* node = nPred;
					
					while (node->getPred()!=nullptr)
					{
						nodePath.push_back(*node);
						node = node->getPred();
					}

					int nodesSize = nodePath.size();
					for (size_t j = 0; j < nodesSize; j++)
					{
						mpac_generic::Pose2d pose;
						// SPDLOG_INFO("3-1");
						double x,y;
						worldMap_->map2world(nodePath[nodesSize-j-1].getX(),nodePath[nodesSize-j-1].getY(),x,y);
						pose.x() = x;
						pose.y() = y;
						// SPDLOG_INFO("3-2");
						result.push_back(pose);
					}
					for (size_t j = 0; j < result.size()-1; j++)
					{
						result[j].z() = atan2(result[j+1].y()-result[j].y(),result[j+1].x()-result[j].x());
					}
					result.back().z() = result[result.size()-2].z();

					delete [] nodes2D;
					return result;
				
				}else 
				{    //???????????????
					for (size_t j = 0; j < Node2D::dir; j++)
					{
						nSucc = nPred->createSuccessor(j);
						iSucc = nSucc->setIdx(width);
						//???????????????
						if (nSucc->isOnGrid(width,height) && (myWorld_->getCollisionDetector()->isPassable(nPred->getX(),nPred->getY(),nSucc->getX(),nSucc->getY())) && !nodes2D[iSucc].isClosed() )
						{
							nSucc->updateG();
							newG = nSucc->getG();
							if (!nodes2D[iSucc].isOpen() || newG < nodes2D[iSucc].getG())
							{
								nSucc->updateH(goal);
								nSucc->open();
								nodes2D[iSucc] = *nSucc;
								openList.push(&nodes2D[iSucc]);

								delete nSucc;
							}else
							{
								delete nSucc;
							}
							
						}else
						{
							delete nSucc;
						}
					}					
				}			
			}

		}		
	}

	delete [] nodes2D;
	return result;
}
std::vector<waypoint*> PathFinder::extractWaypoints(std::vector<Configuration*> path) {
	std::vector<waypoint*> waypoints;
	double distanceFromStart = 0;
	for (std::vector<Configuration*>::iterator it = path.begin(); it != path.end(); it++) {
		waypoint* w = new waypoint;
		w->x = (*it)->getXCoordinate();
		w->y = (*it)->getYCoordinate();
		w->steeringAngle = (*it)->getSteering();
		distanceFromStart += (*it)->getTrajectoryLength();
		w->distanceFromStartOfPath = distanceFromStart;
		waypoints.push_back(w);
	}
	return waypoints;
}

void PathFinder::printPaths(std::vector<std::vector<Configuration*> > paths) {

	if (paths.front().empty()) {
		return;
	}

	// reset world visualization
	if (myWorld_->isVisualizationEnabled()) {
		myWorld_->resetVisualization();
	}
	if (WP::LOG_LEVEL >= 1 && paths.size() == 0) {
		SPDLOG_WARN("No solution found!");
	} else if (WP::LOG_LEVEL >= 3 && paths.size() != 0) {
		writeLogLine(std::string("Solution:"), "PathFinder", WP::LOG_FILE);
	}
	for (std::vector<std::vector<Configuration*> >::iterator it = paths.begin(); it != paths.end(); it++) {
		if (myWorld_->isVisualizationEnabled()) {
			myWorld_->visualizeConfigurations(*it);
		}
		if (WP::LOG_LEVEL >= 4) {
			std::vector<Configuration*> confs = (*it);
			for (std::vector<Configuration*>::iterator confit = confs.begin(); confit != confs.end(); confit++) {
				// print also the intermediate points
				std::vector<vehicleSimplePoint> traj = (*confit)->getTrajectory();
				for (std::vector<vehicleSimplePoint>::iterator spit = traj.begin(); spit != traj.end(); spit++) {
					char line[100];
					sprintf(line, "\t%.4f\t%.4f\t%.4f\t%.4f", (*spit).x, (*spit).y, (*spit).orient, (*spit).steering);
					writeLogLine(std::string(line), "PathFinder", WP::LOG_FILE);
				}
			}
		} else if (WP::LOG_LEVEL >= 3) {
			char line[100];
			sprintf(line, "VehicleID : %d", (*it).front()->getMission()->getVehicleID());
			writeLogLine(std::string(line), "PathFinder", WP::LOG_FILE);
			std::vector<Configuration*> confs = (*it);
			for (std::vector<Configuration*>::iterator confit = confs.begin(); confit != confs.end(); confit++) {
				char line[100];
				sprintf(line, "Configuration: \tx: %.3f\ty: %.3f\to: %.3f\ts: %.3f",
						(*confit)->getXCoordinate(), (*confit)->getYCoordinate(), (*confit)->getOrientation(), (*confit)->getSteering());
				writeLogLine(std::string(line), "PathFinder", WP::LOG_FILE);
			}
		}
	}
	if (myWorld_->isVisualizationEnabled()) {
#ifdef _WIN32
		Sleep(5);
#else
		sleep(5);
#endif
	}
}

bool PathFinder::targetPointIsOccupied(mpac_generic::Pose2d pose, double left_width, double right_width, double front_length, double back_length)
{
	return !myWorld_->getCollisionDetector()->isCollisionFree(pose,left_width,right_width,front_length,back_length);
}
