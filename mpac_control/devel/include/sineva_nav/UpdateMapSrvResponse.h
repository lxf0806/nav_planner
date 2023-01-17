// Generated by gencpp from file sineva_nav/UpdateMapSrvResponse.msg
// DO NOT EDIT!


#ifndef SINEVA_NAV_MESSAGE_UPDATEMAPSRVRESPONSE_H
#define SINEVA_NAV_MESSAGE_UPDATEMAPSRVRESPONSE_H


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
struct UpdateMapSrvResponse_
{
  typedef UpdateMapSrvResponse_<ContainerAllocator> Type;

  UpdateMapSrvResponse_()
    : result(0)  {
    }
  UpdateMapSrvResponse_(const ContainerAllocator& _alloc)
    : result(0)  {
  (void)_alloc;
    }



   typedef int8_t _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::sineva_nav::UpdateMapSrvResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sineva_nav::UpdateMapSrvResponse_<ContainerAllocator> const> ConstPtr;

}; // struct UpdateMapSrvResponse_

typedef ::sineva_nav::UpdateMapSrvResponse_<std::allocator<void> > UpdateMapSrvResponse;

typedef boost::shared_ptr< ::sineva_nav::UpdateMapSrvResponse > UpdateMapSrvResponsePtr;
typedef boost::shared_ptr< ::sineva_nav::UpdateMapSrvResponse const> UpdateMapSrvResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sineva_nav::UpdateMapSrvResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sineva_nav::UpdateMapSrvResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sineva_nav::UpdateMapSrvResponse_<ContainerAllocator1> & lhs, const ::sineva_nav::UpdateMapSrvResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sineva_nav::UpdateMapSrvResponse_<ContainerAllocator1> & lhs, const ::sineva_nav::UpdateMapSrvResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sineva_nav

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::UpdateMapSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::UpdateMapSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::UpdateMapSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::UpdateMapSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::UpdateMapSrvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::UpdateMapSrvResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sineva_nav::UpdateMapSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4414c67819626a1b8e0f043a9a0d6c9a";
  }

  static const char* value(const ::sineva_nav::UpdateMapSrvResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4414c67819626a1bULL;
  static const uint64_t static_value2 = 0x8e0f043a9a0d6c9aULL;
};

template<class ContainerAllocator>
struct DataType< ::sineva_nav::UpdateMapSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sineva_nav/UpdateMapSrvResponse";
  }

  static const char* value(const ::sineva_nav::UpdateMapSrvResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sineva_nav::UpdateMapSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 result\n"
;
  }

  static const char* value(const ::sineva_nav::UpdateMapSrvResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sineva_nav::UpdateMapSrvResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct UpdateMapSrvResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sineva_nav::UpdateMapSrvResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sineva_nav::UpdateMapSrvResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int8_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SINEVA_NAV_MESSAGE_UPDATEMAPSRVRESPONSE_H
