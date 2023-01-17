// Generated by gencpp from file sineva_nav/CheckGoalStatusSrvRequest.msg
// DO NOT EDIT!


#ifndef SINEVA_NAV_MESSAGE_CHECKGOALSTATUSSRVREQUEST_H
#define SINEVA_NAV_MESSAGE_CHECKGOALSTATUSSRVREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sineva_nav
{
template <class ContainerAllocator>
struct CheckGoalStatusSrvRequest_
{
  typedef CheckGoalStatusSrvRequest_<ContainerAllocator> Type;

  CheckGoalStatusSrvRequest_()
    : x(0.0)
    , y(0.0)
    , yaw(0.0)  {
    }
  CheckGoalStatusSrvRequest_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , yaw(0.0)  {
  (void)_alloc;
    }



   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _yaw_type;
  _yaw_type yaw;





  typedef boost::shared_ptr< ::sineva_nav::CheckGoalStatusSrvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sineva_nav::CheckGoalStatusSrvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct CheckGoalStatusSrvRequest_

typedef ::sineva_nav::CheckGoalStatusSrvRequest_<std::allocator<void> > CheckGoalStatusSrvRequest;

typedef boost::shared_ptr< ::sineva_nav::CheckGoalStatusSrvRequest > CheckGoalStatusSrvRequestPtr;
typedef boost::shared_ptr< ::sineva_nav::CheckGoalStatusSrvRequest const> CheckGoalStatusSrvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sineva_nav::CheckGoalStatusSrvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sineva_nav::CheckGoalStatusSrvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sineva_nav::CheckGoalStatusSrvRequest_<ContainerAllocator1> & lhs, const ::sineva_nav::CheckGoalStatusSrvRequest_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.yaw == rhs.yaw;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sineva_nav::CheckGoalStatusSrvRequest_<ContainerAllocator1> & lhs, const ::sineva_nav::CheckGoalStatusSrvRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sineva_nav

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::CheckGoalStatusSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::CheckGoalStatusSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::CheckGoalStatusSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::CheckGoalStatusSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::CheckGoalStatusSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::CheckGoalStatusSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sineva_nav::CheckGoalStatusSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "47802147045815b06859cca542c21d31";
  }

  static const char* value(const ::sineva_nav::CheckGoalStatusSrvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x47802147045815b0ULL;
  static const uint64_t static_value2 = 0x6859cca542c21d31ULL;
};

template<class ContainerAllocator>
struct DataType< ::sineva_nav::CheckGoalStatusSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sineva_nav/CheckGoalStatusSrvRequest";
  }

  static const char* value(const ::sineva_nav::CheckGoalStatusSrvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sineva_nav::CheckGoalStatusSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# goal pose\n"
"float32 x\n"
"float32 y\n"
"float32 yaw\n"
;
  }

  static const char* value(const ::sineva_nav::CheckGoalStatusSrvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sineva_nav::CheckGoalStatusSrvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.yaw);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CheckGoalStatusSrvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sineva_nav::CheckGoalStatusSrvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sineva_nav::CheckGoalStatusSrvRequest_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SINEVA_NAV_MESSAGE_CHECKGOALSTATUSSRVREQUEST_H
