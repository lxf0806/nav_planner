// Generated by gencpp from file sineva_nav/JsonSrvRequest.msg
// DO NOT EDIT!


#ifndef SINEVA_NAV_MESSAGE_JSONSRVREQUEST_H
#define SINEVA_NAV_MESSAGE_JSONSRVREQUEST_H


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
struct JsonSrvRequest_
{
  typedef JsonSrvRequest_<ContainerAllocator> Type;

  JsonSrvRequest_()
    : flag()
    , dataReq()  {
    }
  JsonSrvRequest_(const ContainerAllocator& _alloc)
    : flag(_alloc)
    , dataReq(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _flag_type;
  _flag_type flag;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _dataReq_type;
  _dataReq_type dataReq;





  typedef boost::shared_ptr< ::sineva_nav::JsonSrvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sineva_nav::JsonSrvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct JsonSrvRequest_

typedef ::sineva_nav::JsonSrvRequest_<std::allocator<void> > JsonSrvRequest;

typedef boost::shared_ptr< ::sineva_nav::JsonSrvRequest > JsonSrvRequestPtr;
typedef boost::shared_ptr< ::sineva_nav::JsonSrvRequest const> JsonSrvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sineva_nav::JsonSrvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sineva_nav::JsonSrvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sineva_nav::JsonSrvRequest_<ContainerAllocator1> & lhs, const ::sineva_nav::JsonSrvRequest_<ContainerAllocator2> & rhs)
{
  return lhs.flag == rhs.flag &&
    lhs.dataReq == rhs.dataReq;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sineva_nav::JsonSrvRequest_<ContainerAllocator1> & lhs, const ::sineva_nav::JsonSrvRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sineva_nav

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::JsonSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::JsonSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::JsonSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::JsonSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::JsonSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::JsonSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sineva_nav::JsonSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f2174a0798a1a98bacdaf158498c5491";
  }

  static const char* value(const ::sineva_nav::JsonSrvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf2174a0798a1a98bULL;
  static const uint64_t static_value2 = 0xacdaf158498c5491ULL;
};

template<class ContainerAllocator>
struct DataType< ::sineva_nav::JsonSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sineva_nav/JsonSrvRequest";
  }

  static const char* value(const ::sineva_nav::JsonSrvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sineva_nav::JsonSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# request message\n"
"string flag\n"
"string dataReq\n"
;
  }

  static const char* value(const ::sineva_nav::JsonSrvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sineva_nav::JsonSrvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.flag);
      stream.next(m.dataReq);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JsonSrvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sineva_nav::JsonSrvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sineva_nav::JsonSrvRequest_<ContainerAllocator>& v)
  {
    s << indent << "flag: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.flag);
    s << indent << "dataReq: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.dataReq);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SINEVA_NAV_MESSAGE_JSONSRVREQUEST_H
