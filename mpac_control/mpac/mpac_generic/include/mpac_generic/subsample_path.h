#pragma once

#include <mpac_generic/types.h>
#include <mpac_generic/path_utils.h>

namespace mpac_generic {

  class SubsamplePath {
  public:
  SubsamplePath(const mpac_generic::PathInterface &p, double minDist, double maxDist, double maxRotation) : orig_path(p) {
      this->extractPath(minDist, maxDist, maxRotation);
    }
    const mpac_generic::Path& getOrigPath() const { return orig_path; }
    const mpac_generic::Path& getPath() const { return path; }
    const std::vector<size_t>& getSubsampledIdx() const { return subsampled_idx; }
  private:
    //! Computes a sumbsampled path.
    /*!
     * All subsampled path point are separeated by minDist at the required indexed start / end / change of direction points.
     *  All subsampled path points have a distance of less than maxDist and a rotation different of maxRotation.
     */
    void extractPath(double minDist, double maxDist, double maxRotation) {
      subsampled_idx.clear();
      path.clear();
      std::vector<size_t> req_idx = calculateRequiredPathPointsIdx(orig_path);
      bool active = false;
      size_t it = 0;
      for (size_t i = 0; i < orig_path.sizePath(); i++)
	{
	  if (i == req_idx[it])
	    {
	      // Must have this...
	      subsampled_idx.push_back(i);
	      path.addPathPoint(orig_path.getPose2d(i), orig_path.getSteeringAngle(i));
	      active = true;
	      it++;
	      continue;
	    }
	  
	  // Need this to avoid that we have too small constraints near required_idx.
	  if (active && mpac_generic::getDistBetween(orig_path.getPose2d(i), orig_path.getPose2d(it)) <= minDist)
	    {
	      subsampled_idx.push_back(i);
	      path.addPathPoint(orig_path.getPose2d(i), orig_path.getSteeringAngle(i));
	      active = false;
	      continue;
	    }
	  
	  // should this point be added?
	  if (mpac_generic::addStepPose2d(path.poses.back(), orig_path.getPose2d(i), maxDist, maxRotation))
	    {
	      subsampled_idx.push_back(i);
	      path.addPathPoint(orig_path.getPose2d(i), orig_path.getSteeringAngle(i));
	      continue;
	    }
	}
    }
    
    mpac_generic::Path orig_path;
    mpac_generic::Path path;
    std::vector<size_t> subsampled_idx;
  };
  
} // namespace
