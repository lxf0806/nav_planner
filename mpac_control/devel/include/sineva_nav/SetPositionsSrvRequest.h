// Generated by gencpp from file sineva_nav/SetPositionsSrvRequest.msg
// DO NOT EDIT!


#ifndef SINEVA_NAV_MESSAGE_SETPOSITIONSSRVREQUEST_H
#define SINEVA_NAV_MESSAGE_SETPOSITIONSSRVREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sineva_nav/position.h>

namespace sineva_nav
{
template <class ContainerAllocator>
struct SetPositionsSrvRequest_
{
  typedef SetPositionsSrvRequest_<ContainerAllocator> Type;

  SetPositionsSrvRequest_()
    : positions()  {
    }
  SetPositionsSrvRequest_(const ContainerAllocator& _alloc)
    : positions(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::sineva_nav::position_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::sineva_nav::position_<ContainerAllocator> >::other >  _positions_type;
  _positions_type positions;





  typedef boost::shared_ptr< ::sineva_nav::SetPositionsSrvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sineva_nav::SetPositionsSrvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetPositionsSrvRequest_

typedef ::sineva_nav::SetPositionsSrvRequest_<std::allocator<void> > SetPositionsSrvRequest;

typedef boost::shared_ptr< ::sineva_nav::SetPositionsSrvRequest > SetPositionsSrvRequestPtr;
typedef boost::shared_ptr< ::sineva_nav::SetPositionsSrvRequest const> SetPositionsSrvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sineva_nav::SetPositionsSrvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sineva_nav::SetPositionsSrvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sineva_nav::SetPositionsSrvRequest_<ContainerAllocator1> & lhs, const ::sineva_nav::SetPositionsSrvRequest_<ContainerAllocator2> & rhs)
{
  return lhs.positions == rhs.positions;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sineva_nav::SetPositionsSrvRequest_<ContainerAllocator1> & lhs, const ::sineva_nav::SetPositionsSrvRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sineva_nav

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::SetPositionsSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::SetPositionsSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::SetPositionsSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::SetPositionsSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::SetPositionsSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::SetPositionsSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sineva_nav::SetPositionsSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "df6b8f54f681c2dba5258a86248e3eee";
  }

  static const char* value(const ::sineva_nav::SetPositionsSrvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdf6b8f54f681c2dbULL;
  static const uint64_t static_value2 = 0xa5258a86248e3eeeULL;
};

template<class ContainerAllocator>
struct DataType< ::sineva_nav::SetPositionsSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sineva_nav/SetPositionsSrvRequest";
  }

  static const char* value(const ::sineva_nav::SetPositionsSrvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sineva_nav::SetPositionsSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# request message\n"
"sineva_nav/position[] positions\n"
"\n"
"================================================================================\n"
"MSG: sineva_nav/position\n"
"string id\n"
"float32 x\n"
"float32 y\n"
"float32 r\n"
;
  }

  static const char* value(const ::sineva_nav::SetPositionsSrvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sineva_nav::SetPositionsSrvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.positions);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetPositionsSrvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sineva_nav::SetPositionsSrvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sineva_nav::SetPositionsSrvRequest_<ContainerAllocator>& v)
  {
    s << indent << "positions[]" << std::endl;
    for (size_t i = 0; i < v.positions.size(); ++i)
    {
      s << indent << "  positions[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::sineva_nav::position_<ContainerAllocator> >::stream(s, indent + "    ", v.positions[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SINEVA_NAV_MESSAGE_SETPOSITIONSSRVREQUEST_H
