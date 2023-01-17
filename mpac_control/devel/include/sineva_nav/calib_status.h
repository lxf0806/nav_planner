// Generated by gencpp from file sineva_nav/calib_status.msg
// DO NOT EDIT!


#ifndef SINEVA_NAV_MESSAGE_CALIB_STATUS_H
#define SINEVA_NAV_MESSAGE_CALIB_STATUS_H


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
struct calib_status_
{
  typedef calib_status_<ContainerAllocator> Type;

  calib_status_()
    : status(0)
    , data()  {
    }
  calib_status_(const ContainerAllocator& _alloc)
    : status(0)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef int8_t _status_type;
  _status_type status;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::sineva_nav::calib_status_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sineva_nav::calib_status_<ContainerAllocator> const> ConstPtr;

}; // struct calib_status_

typedef ::sineva_nav::calib_status_<std::allocator<void> > calib_status;

typedef boost::shared_ptr< ::sineva_nav::calib_status > calib_statusPtr;
typedef boost::shared_ptr< ::sineva_nav::calib_status const> calib_statusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sineva_nav::calib_status_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sineva_nav::calib_status_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sineva_nav::calib_status_<ContainerAllocator1> & lhs, const ::sineva_nav::calib_status_<ContainerAllocator2> & rhs)
{
  return lhs.status == rhs.status &&
    lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sineva_nav::calib_status_<ContainerAllocator1> & lhs, const ::sineva_nav::calib_status_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sineva_nav

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::calib_status_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::calib_status_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::calib_status_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::calib_status_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::calib_status_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::calib_status_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sineva_nav::calib_status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d1b06abf01a800329a56a7f3daa01cee";
  }

  static const char* value(const ::sineva_nav::calib_status_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd1b06abf01a80032ULL;
  static const uint64_t static_value2 = 0x9a56a7f3daa01ceeULL;
};

template<class ContainerAllocator>
struct DataType< ::sineva_nav::calib_status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sineva_nav/calib_status";
  }

  static const char* value(const ::sineva_nav::calib_status_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sineva_nav::calib_status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 status\n"
"float32[] data\n"
;
  }

  static const char* value(const ::sineva_nav::calib_status_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sineva_nav::calib_status_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct calib_status_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sineva_nav::calib_status_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sineva_nav::calib_status_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<int8_t>::stream(s, indent + "  ", v.status);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SINEVA_NAV_MESSAGE_CALIB_STATUS_H
