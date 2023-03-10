// Generated by gencpp from file sineva_nav/MoveStatusRequest.msg
// DO NOT EDIT!


#ifndef SINEVA_NAV_MESSAGE_MOVESTATUSREQUEST_H
#define SINEVA_NAV_MESSAGE_MOVESTATUSREQUEST_H


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
struct MoveStatusRequest_
{
  typedef MoveStatusRequest_<ContainerAllocator> Type;

  MoveStatusRequest_()
    : moveStatus(0)
    , info()  {
    }
  MoveStatusRequest_(const ContainerAllocator& _alloc)
    : moveStatus(0)
    , info(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _moveStatus_type;
  _moveStatus_type moveStatus;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _info_type;
  _info_type info;





  typedef boost::shared_ptr< ::sineva_nav::MoveStatusRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sineva_nav::MoveStatusRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MoveStatusRequest_

typedef ::sineva_nav::MoveStatusRequest_<std::allocator<void> > MoveStatusRequest;

typedef boost::shared_ptr< ::sineva_nav::MoveStatusRequest > MoveStatusRequestPtr;
typedef boost::shared_ptr< ::sineva_nav::MoveStatusRequest const> MoveStatusRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sineva_nav::MoveStatusRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sineva_nav::MoveStatusRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sineva_nav::MoveStatusRequest_<ContainerAllocator1> & lhs, const ::sineva_nav::MoveStatusRequest_<ContainerAllocator2> & rhs)
{
  return lhs.moveStatus == rhs.moveStatus &&
    lhs.info == rhs.info;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sineva_nav::MoveStatusRequest_<ContainerAllocator1> & lhs, const ::sineva_nav::MoveStatusRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sineva_nav

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::MoveStatusRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::MoveStatusRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::MoveStatusRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::MoveStatusRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::MoveStatusRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::MoveStatusRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sineva_nav::MoveStatusRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "87093d7d38674a4ba71454924641f57f";
  }

  static const char* value(const ::sineva_nav::MoveStatusRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x87093d7d38674a4bULL;
  static const uint64_t static_value2 = 0xa71454924641f57fULL;
};

template<class ContainerAllocator>
struct DataType< ::sineva_nav::MoveStatusRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sineva_nav/MoveStatusRequest";
  }

  static const char* value(const ::sineva_nav::MoveStatusRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sineva_nav::MoveStatusRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# request message\n"
"int32 moveStatus\n"
"string info\n"
;
  }

  static const char* value(const ::sineva_nav::MoveStatusRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sineva_nav::MoveStatusRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.moveStatus);
      stream.next(m.info);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveStatusRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sineva_nav::MoveStatusRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sineva_nav::MoveStatusRequest_<ContainerAllocator>& v)
  {
    s << indent << "moveStatus: ";
    Printer<int32_t>::stream(s, indent + "  ", v.moveStatus);
    s << indent << "info: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.info);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SINEVA_NAV_MESSAGE_MOVESTATUSREQUEST_H
