// Generated by gencpp from file sineva_nav/BaseData.msg
// DO NOT EDIT!


#ifndef SINEVA_NAV_MESSAGE_BASEDATA_H
#define SINEVA_NAV_MESSAGE_BASEDATA_H


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
struct BaseData_
{
  typedef BaseData_<ContainerAllocator> Type;

  BaseData_()
    : type(0)
    , data()  {
    }
  BaseData_(const ContainerAllocator& _alloc)
    : type(0)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _type_type;
  _type_type type;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::sineva_nav::BaseData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sineva_nav::BaseData_<ContainerAllocator> const> ConstPtr;

}; // struct BaseData_

typedef ::sineva_nav::BaseData_<std::allocator<void> > BaseData;

typedef boost::shared_ptr< ::sineva_nav::BaseData > BaseDataPtr;
typedef boost::shared_ptr< ::sineva_nav::BaseData const> BaseDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sineva_nav::BaseData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sineva_nav::BaseData_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sineva_nav::BaseData_<ContainerAllocator1> & lhs, const ::sineva_nav::BaseData_<ContainerAllocator2> & rhs)
{
  return lhs.type == rhs.type &&
    lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sineva_nav::BaseData_<ContainerAllocator1> & lhs, const ::sineva_nav::BaseData_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sineva_nav

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::BaseData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::BaseData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::BaseData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::BaseData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::BaseData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::BaseData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sineva_nav::BaseData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fa8c6edfee3919656731e93d6bd477b8";
  }

  static const char* value(const ::sineva_nav::BaseData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfa8c6edfee391965ULL;
  static const uint64_t static_value2 = 0x6731e93d6bd477b8ULL;
};

template<class ContainerAllocator>
struct DataType< ::sineva_nav::BaseData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sineva_nav/BaseData";
  }

  static const char* value(const ::sineva_nav::BaseData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sineva_nav::BaseData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 type\n"
"uint8[] data\n"
;
  }

  static const char* value(const ::sineva_nav::BaseData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sineva_nav::BaseData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BaseData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sineva_nav::BaseData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sineva_nav::BaseData_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.type);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SINEVA_NAV_MESSAGE_BASEDATA_H
