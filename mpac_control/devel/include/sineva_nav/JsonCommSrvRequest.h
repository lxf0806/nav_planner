// Generated by gencpp from file sineva_nav/JsonCommSrvRequest.msg
// DO NOT EDIT!


#ifndef SINEVA_NAV_MESSAGE_JSONCOMMSRVREQUEST_H
#define SINEVA_NAV_MESSAGE_JSONCOMMSRVREQUEST_H


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
struct JsonCommSrvRequest_
{
  typedef JsonCommSrvRequest_<ContainerAllocator> Type;

  JsonCommSrvRequest_()
    : data()  {
    }
  JsonCommSrvRequest_(const ContainerAllocator& _alloc)
    : data(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::sineva_nav::JsonCommSrvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sineva_nav::JsonCommSrvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct JsonCommSrvRequest_

typedef ::sineva_nav::JsonCommSrvRequest_<std::allocator<void> > JsonCommSrvRequest;

typedef boost::shared_ptr< ::sineva_nav::JsonCommSrvRequest > JsonCommSrvRequestPtr;
typedef boost::shared_ptr< ::sineva_nav::JsonCommSrvRequest const> JsonCommSrvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sineva_nav::JsonCommSrvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sineva_nav::JsonCommSrvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sineva_nav::JsonCommSrvRequest_<ContainerAllocator1> & lhs, const ::sineva_nav::JsonCommSrvRequest_<ContainerAllocator2> & rhs)
{
  return lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sineva_nav::JsonCommSrvRequest_<ContainerAllocator1> & lhs, const ::sineva_nav::JsonCommSrvRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sineva_nav

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::JsonCommSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::JsonCommSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::JsonCommSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::JsonCommSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::JsonCommSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::JsonCommSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sineva_nav::JsonCommSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "992ce8a1687cec8c8bd883ec73ca41d1";
  }

  static const char* value(const ::sineva_nav::JsonCommSrvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x992ce8a1687cec8cULL;
  static const uint64_t static_value2 = 0x8bd883ec73ca41d1ULL;
};

template<class ContainerAllocator>
struct DataType< ::sineva_nav::JsonCommSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sineva_nav/JsonCommSrvRequest";
  }

  static const char* value(const ::sineva_nav::JsonCommSrvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sineva_nav::JsonCommSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string data\n"
;
  }

  static const char* value(const ::sineva_nav::JsonCommSrvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sineva_nav::JsonCommSrvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JsonCommSrvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sineva_nav::JsonCommSrvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sineva_nav::JsonCommSrvRequest_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SINEVA_NAV_MESSAGE_JSONCOMMSRVREQUEST_H
