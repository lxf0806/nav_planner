// Generated by gencpp from file sineva_nav/manage_chargeResponse.msg
// DO NOT EDIT!


#ifndef SINEVA_NAV_MESSAGE_MANAGE_CHARGERESPONSE_H
#define SINEVA_NAV_MESSAGE_MANAGE_CHARGERESPONSE_H


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
struct manage_chargeResponse_
{
  typedef manage_chargeResponse_<ContainerAllocator> Type;

  manage_chargeResponse_()
    : result(0)  {
    }
  manage_chargeResponse_(const ContainerAllocator& _alloc)
    : result(0)  {
  (void)_alloc;
    }



   typedef int8_t _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::sineva_nav::manage_chargeResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sineva_nav::manage_chargeResponse_<ContainerAllocator> const> ConstPtr;

}; // struct manage_chargeResponse_

typedef ::sineva_nav::manage_chargeResponse_<std::allocator<void> > manage_chargeResponse;

typedef boost::shared_ptr< ::sineva_nav::manage_chargeResponse > manage_chargeResponsePtr;
typedef boost::shared_ptr< ::sineva_nav::manage_chargeResponse const> manage_chargeResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sineva_nav::manage_chargeResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sineva_nav::manage_chargeResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sineva_nav::manage_chargeResponse_<ContainerAllocator1> & lhs, const ::sineva_nav::manage_chargeResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sineva_nav::manage_chargeResponse_<ContainerAllocator1> & lhs, const ::sineva_nav::manage_chargeResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sineva_nav

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::manage_chargeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::manage_chargeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::manage_chargeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::manage_chargeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::manage_chargeResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::manage_chargeResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sineva_nav::manage_chargeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4414c67819626a1b8e0f043a9a0d6c9a";
  }

  static const char* value(const ::sineva_nav::manage_chargeResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4414c67819626a1bULL;
  static const uint64_t static_value2 = 0x8e0f043a9a0d6c9aULL;
};

template<class ContainerAllocator>
struct DataType< ::sineva_nav::manage_chargeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sineva_nav/manage_chargeResponse";
  }

  static const char* value(const ::sineva_nav::manage_chargeResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sineva_nav::manage_chargeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 result\n"
;
  }

  static const char* value(const ::sineva_nav::manage_chargeResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sineva_nav::manage_chargeResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct manage_chargeResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sineva_nav::manage_chargeResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sineva_nav::manage_chargeResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int8_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SINEVA_NAV_MESSAGE_MANAGE_CHARGERESPONSE_H
