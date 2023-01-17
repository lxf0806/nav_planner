// Generated by gencpp from file sineva_nav/GetStateSrvRequest.msg
// DO NOT EDIT!


#ifndef SINEVA_NAV_MESSAGE_GETSTATESRVREQUEST_H
#define SINEVA_NAV_MESSAGE_GETSTATESRVREQUEST_H


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
struct GetStateSrvRequest_
{
  typedef GetStateSrvRequest_<ContainerAllocator> Type;

  GetStateSrvRequest_()
    : state_id()  {
    }
  GetStateSrvRequest_(const ContainerAllocator& _alloc)
    : state_id(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _state_id_type;
  _state_id_type state_id;





  typedef boost::shared_ptr< ::sineva_nav::GetStateSrvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sineva_nav::GetStateSrvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetStateSrvRequest_

typedef ::sineva_nav::GetStateSrvRequest_<std::allocator<void> > GetStateSrvRequest;

typedef boost::shared_ptr< ::sineva_nav::GetStateSrvRequest > GetStateSrvRequestPtr;
typedef boost::shared_ptr< ::sineva_nav::GetStateSrvRequest const> GetStateSrvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sineva_nav::GetStateSrvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sineva_nav::GetStateSrvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sineva_nav

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sineva_nav': ['/home/nuc/code/Sineva_Code-delivery/ssp/ros/src/sineva_nav/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::GetStateSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::GetStateSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::GetStateSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::GetStateSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::GetStateSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::GetStateSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sineva_nav::GetStateSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9cb8f8d3f4e2485d86cc83b3a2c1c80e";
  }

  static const char* value(const ::sineva_nav::GetStateSrvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9cb8f8d3f4e2485dULL;
  static const uint64_t static_value2 = 0x86cc83b3a2c1c80eULL;
};

template<class ContainerAllocator>
struct DataType< ::sineva_nav::GetStateSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sineva_nav/GetStateSrvRequest";
  }

  static const char* value(const ::sineva_nav::GetStateSrvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sineva_nav::GetStateSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
string state_id\n\
";
  }

  static const char* value(const ::sineva_nav::GetStateSrvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sineva_nav::GetStateSrvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.state_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetStateSrvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sineva_nav::GetStateSrvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sineva_nav::GetStateSrvRequest_<ContainerAllocator>& v)
  {
    s << indent << "state_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.state_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SINEVA_NAV_MESSAGE_GETSTATESRVREQUEST_H
