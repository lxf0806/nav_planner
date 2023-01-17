// Generated by gencpp from file sineva_nav/SetInitialPoseSrvResponse.msg
// DO NOT EDIT!


#ifndef SINEVA_NAV_MESSAGE_SETINITIALPOSESRVRESPONSE_H
#define SINEVA_NAV_MESSAGE_SETINITIALPOSESRVRESPONSE_H


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
struct SetInitialPoseSrvResponse_
{
  typedef SetInitialPoseSrvResponse_<ContainerAllocator> Type;

  SetInitialPoseSrvResponse_()
    : result(0)  {
    }
  SetInitialPoseSrvResponse_(const ContainerAllocator& _alloc)
    : result(0)  {
  (void)_alloc;
    }



   typedef int32_t _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::sineva_nav::SetInitialPoseSrvResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sineva_nav::SetInitialPoseSrvResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetInitialPoseSrvResponse_

typedef ::sineva_nav::SetInitialPoseSrvResponse_<std::allocator<void> > SetInitialPoseSrvResponse;

typedef boost::shared_ptr< ::sineva_nav::SetInitialPoseSrvResponse > SetInitialPoseSrvResponsePtr;
typedef boost::shared_ptr< ::sineva_nav::SetInitialPoseSrvResponse const> SetInitialPoseSrvResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sineva_nav::SetInitialPoseSrvResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sineva_nav::SetInitialPoseSrvResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sineva_nav::SetInitialPoseSrvResponse_<ContainerAllocator1> & lhs, const ::sineva_nav::SetInitialPoseSrvResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sineva_nav::SetInitialPoseSrvResponse_<ContainerAllocator1> & lhs, const ::sineva_nav::SetInitialPoseSrvResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sineva_nav

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::SetInitialPoseSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::SetInitialPoseSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::SetInitialPoseSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::SetInitialPoseSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::SetInitialPoseSrvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::SetInitialPoseSrvResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sineva_nav::SetInitialPoseSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "034a8e20d6a306665e3a5b340fab3f09";
  }

  static const char* value(const ::sineva_nav::SetInitialPoseSrvResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x034a8e20d6a30666ULL;
  static const uint64_t static_value2 = 0x5e3a5b340fab3f09ULL;
};

template<class ContainerAllocator>
struct DataType< ::sineva_nav::SetInitialPoseSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sineva_nav/SetInitialPoseSrvResponse";
  }

  static const char* value(const ::sineva_nav::SetInitialPoseSrvResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sineva_nav::SetInitialPoseSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# response message\n"
"int32 result\n"
"\n"
;
  }

  static const char* value(const ::sineva_nav::SetInitialPoseSrvResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sineva_nav::SetInitialPoseSrvResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetInitialPoseSrvResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sineva_nav::SetInitialPoseSrvResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sineva_nav::SetInitialPoseSrvResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SINEVA_NAV_MESSAGE_SETINITIALPOSESRVRESPONSE_H
