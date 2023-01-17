// Generated by gencpp from file sineva_nav/MapReqRequest.msg
// DO NOT EDIT!


#ifndef SINEVA_NAV_MESSAGE_MAPREQREQUEST_H
#define SINEVA_NAV_MESSAGE_MAPREQREQUEST_H


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
struct MapReqRequest_
{
  typedef MapReqRequest_<ContainerAllocator> Type;

  MapReqRequest_()
    : mapRequest()  {
    }
  MapReqRequest_(const ContainerAllocator& _alloc)
    : mapRequest(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _mapRequest_type;
  _mapRequest_type mapRequest;





  typedef boost::shared_ptr< ::sineva_nav::MapReqRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sineva_nav::MapReqRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MapReqRequest_

typedef ::sineva_nav::MapReqRequest_<std::allocator<void> > MapReqRequest;

typedef boost::shared_ptr< ::sineva_nav::MapReqRequest > MapReqRequestPtr;
typedef boost::shared_ptr< ::sineva_nav::MapReqRequest const> MapReqRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sineva_nav::MapReqRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sineva_nav::MapReqRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::sineva_nav::MapReqRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::MapReqRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::MapReqRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::MapReqRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::MapReqRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::MapReqRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sineva_nav::MapReqRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6158b9b0d6c0c82988875539b3e891d7";
  }

  static const char* value(const ::sineva_nav::MapReqRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6158b9b0d6c0c829ULL;
  static const uint64_t static_value2 = 0x88875539b3e891d7ULL;
};

template<class ContainerAllocator>
struct DataType< ::sineva_nav::MapReqRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sineva_nav/MapReqRequest";
  }

  static const char* value(const ::sineva_nav::MapReqRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sineva_nav::MapReqRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string mapRequest\n\
";
  }

  static const char* value(const ::sineva_nav::MapReqRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sineva_nav::MapReqRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mapRequest);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MapReqRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sineva_nav::MapReqRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sineva_nav::MapReqRequest_<ContainerAllocator>& v)
  {
    s << indent << "mapRequest: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.mapRequest);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SINEVA_NAV_MESSAGE_MAPREQREQUEST_H