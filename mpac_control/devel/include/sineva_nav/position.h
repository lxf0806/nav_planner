// Generated by gencpp from file sineva_nav/position.msg
// DO NOT EDIT!


#ifndef SINEVA_NAV_MESSAGE_POSITION_H
#define SINEVA_NAV_MESSAGE_POSITION_H


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
struct position_
{
  typedef position_<ContainerAllocator> Type;

  position_()
    : id()
    , x(0.0)
    , y(0.0)
    , r(0.0)  {
    }
  position_(const ContainerAllocator& _alloc)
    : id(_alloc)
    , x(0.0)
    , y(0.0)
    , r(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _id_type;
  _id_type id;

   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _r_type;
  _r_type r;





  typedef boost::shared_ptr< ::sineva_nav::position_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sineva_nav::position_<ContainerAllocator> const> ConstPtr;

}; // struct position_

typedef ::sineva_nav::position_<std::allocator<void> > position;

typedef boost::shared_ptr< ::sineva_nav::position > positionPtr;
typedef boost::shared_ptr< ::sineva_nav::position const> positionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sineva_nav::position_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sineva_nav::position_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sineva_nav::position_<ContainerAllocator1> & lhs, const ::sineva_nav::position_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.r == rhs.r;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sineva_nav::position_<ContainerAllocator1> & lhs, const ::sineva_nav::position_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sineva_nav

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::position_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::position_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::position_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::position_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::position_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::position_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sineva_nav::position_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2b5dece5aaf667954a5f3c6de65b0487";
  }

  static const char* value(const ::sineva_nav::position_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2b5dece5aaf66795ULL;
  static const uint64_t static_value2 = 0x4a5f3c6de65b0487ULL;
};

template<class ContainerAllocator>
struct DataType< ::sineva_nav::position_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sineva_nav/position";
  }

  static const char* value(const ::sineva_nav::position_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sineva_nav::position_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string id\n"
"float32 x\n"
"float32 y\n"
"float32 r\n"
;
  }

  static const char* value(const ::sineva_nav::position_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sineva_nav::position_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.r);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct position_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sineva_nav::position_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sineva_nav::position_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.id);
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "r: ";
    Printer<float>::stream(s, indent + "  ", v.r);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SINEVA_NAV_MESSAGE_POSITION_H
