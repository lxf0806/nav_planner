// Generated by gencpp from file sineva_nav/SetGoalSrvRequest.msg
// DO NOT EDIT!


#ifndef SINEVA_NAV_MESSAGE_SETGOALSRVREQUEST_H
#define SINEVA_NAV_MESSAGE_SETGOALSRVREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace sineva_nav
{
template <class ContainerAllocator>
struct SetGoalSrvRequest_
{
  typedef SetGoalSrvRequest_<ContainerAllocator> Type;

  SetGoalSrvRequest_()
    : goal_id()
    , goal()
    , timeout(0)
    , maxDistance(0.0)  {
    }
  SetGoalSrvRequest_(const ContainerAllocator& _alloc)
    : goal_id(_alloc)
    , goal(_alloc)
    , timeout(0)
    , maxDistance(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _goal_type;
  _goal_type goal;

   typedef int32_t _timeout_type;
  _timeout_type timeout;

   typedef float _maxDistance_type;
  _maxDistance_type maxDistance;





  typedef boost::shared_ptr< ::sineva_nav::SetGoalSrvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sineva_nav::SetGoalSrvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetGoalSrvRequest_

typedef ::sineva_nav::SetGoalSrvRequest_<std::allocator<void> > SetGoalSrvRequest;

typedef boost::shared_ptr< ::sineva_nav::SetGoalSrvRequest > SetGoalSrvRequestPtr;
typedef boost::shared_ptr< ::sineva_nav::SetGoalSrvRequest const> SetGoalSrvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sineva_nav::SetGoalSrvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sineva_nav::SetGoalSrvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sineva_nav

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sineva_nav': ['/home/nuc/code/SinevaCodeAMR/src/framework/src/sineva_nav/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::SetGoalSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::SetGoalSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::SetGoalSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::SetGoalSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::SetGoalSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::SetGoalSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sineva_nav::SetGoalSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1f2da8321dfb43c89287a8a8aef5bc54";
  }

  static const char* value(const ::sineva_nav::SetGoalSrvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1f2da8321dfb43c8ULL;
  static const uint64_t static_value2 = 0x9287a8a8aef5bc54ULL;
};

template<class ContainerAllocator>
struct DataType< ::sineva_nav::SetGoalSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sineva_nav/SetGoalSrvRequest";
  }

  static const char* value(const ::sineva_nav::SetGoalSrvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sineva_nav::SetGoalSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
string goal_id\n\
geometry_msgs/Pose goal\n\
int32 timeout\n\
float32 maxDistance\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::sineva_nav::SetGoalSrvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sineva_nav::SetGoalSrvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.goal_id);
      stream.next(m.goal);
      stream.next(m.timeout);
      stream.next(m.maxDistance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetGoalSrvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sineva_nav::SetGoalSrvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sineva_nav::SetGoalSrvRequest_<ContainerAllocator>& v)
  {
    s << indent << "goal_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
    s << indent << "timeout: ";
    Printer<int32_t>::stream(s, indent + "  ", v.timeout);
    s << indent << "maxDistance: ";
    Printer<float>::stream(s, indent + "  ", v.maxDistance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SINEVA_NAV_MESSAGE_SETGOALSRVREQUEST_H
