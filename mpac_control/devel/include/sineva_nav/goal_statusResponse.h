// Generated by gencpp from file sineva_nav/goal_statusResponse.msg
// DO NOT EDIT!


#ifndef SINEVA_NAV_MESSAGE_GOAL_STATUSRESPONSE_H
#define SINEVA_NAV_MESSAGE_GOAL_STATUSRESPONSE_H


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
struct goal_statusResponse_
{
  typedef goal_statusResponse_<ContainerAllocator> Type;

  goal_statusResponse_()
    : result(false)  {
    }
  goal_statusResponse_(const ContainerAllocator& _alloc)
    : result(false)  {
  (void)_alloc;
    }



   typedef uint8_t _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::sineva_nav::goal_statusResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sineva_nav::goal_statusResponse_<ContainerAllocator> const> ConstPtr;

}; // struct goal_statusResponse_

typedef ::sineva_nav::goal_statusResponse_<std::allocator<void> > goal_statusResponse;

typedef boost::shared_ptr< ::sineva_nav::goal_statusResponse > goal_statusResponsePtr;
typedef boost::shared_ptr< ::sineva_nav::goal_statusResponse const> goal_statusResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sineva_nav::goal_statusResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sineva_nav::goal_statusResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sineva_nav::goal_statusResponse_<ContainerAllocator1> & lhs, const ::sineva_nav::goal_statusResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sineva_nav::goal_statusResponse_<ContainerAllocator1> & lhs, const ::sineva_nav::goal_statusResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sineva_nav

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::goal_statusResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::goal_statusResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::goal_statusResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::goal_statusResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::goal_statusResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::goal_statusResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sineva_nav::goal_statusResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eb13ac1f1354ccecb7941ee8fa2192e8";
  }

  static const char* value(const ::sineva_nav::goal_statusResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeb13ac1f1354ccecULL;
  static const uint64_t static_value2 = 0xb7941ee8fa2192e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::sineva_nav::goal_statusResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sineva_nav/goal_statusResponse";
  }

  static const char* value(const ::sineva_nav::goal_statusResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sineva_nav::goal_statusResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# true--occupied  false--free\n"
"bool result\n"
;
  }

  static const char* value(const ::sineva_nav::goal_statusResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sineva_nav::goal_statusResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct goal_statusResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sineva_nav::goal_statusResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sineva_nav::goal_statusResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SINEVA_NAV_MESSAGE_GOAL_STATUSRESPONSE_H
