// Generated by gencpp from file sineva_nav/charge_pointRequest.msg
// DO NOT EDIT!


#ifndef SINEVA_NAV_MESSAGE_CHARGE_POINTREQUEST_H
#define SINEVA_NAV_MESSAGE_CHARGE_POINTREQUEST_H


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
struct charge_pointRequest_
{
  typedef charge_pointRequest_<ContainerAllocator> Type;

  charge_pointRequest_()
    : type(0)
    , x(0.0)
    , y(0.0)
    , r(0.0)
    , px(0.0)
    , py(0.0)
    , pr(0.0)
    , dx(0.0)
    , dy(0.0)
    , dr(0.0)  {
    }
  charge_pointRequest_(const ContainerAllocator& _alloc)
    : type(0)
    , x(0.0)
    , y(0.0)
    , r(0.0)
    , px(0.0)
    , py(0.0)
    , pr(0.0)
    , dx(0.0)
    , dy(0.0)
    , dr(0.0)  {
  (void)_alloc;
    }



   typedef int8_t _type_type;
  _type_type type;

   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _r_type;
  _r_type r;

   typedef float _px_type;
  _px_type px;

   typedef float _py_type;
  _py_type py;

   typedef float _pr_type;
  _pr_type pr;

   typedef float _dx_type;
  _dx_type dx;

   typedef float _dy_type;
  _dy_type dy;

   typedef float _dr_type;
  _dr_type dr;





  typedef boost::shared_ptr< ::sineva_nav::charge_pointRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sineva_nav::charge_pointRequest_<ContainerAllocator> const> ConstPtr;

}; // struct charge_pointRequest_

typedef ::sineva_nav::charge_pointRequest_<std::allocator<void> > charge_pointRequest;

typedef boost::shared_ptr< ::sineva_nav::charge_pointRequest > charge_pointRequestPtr;
typedef boost::shared_ptr< ::sineva_nav::charge_pointRequest const> charge_pointRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sineva_nav::charge_pointRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sineva_nav::charge_pointRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sineva_nav::charge_pointRequest_<ContainerAllocator1> & lhs, const ::sineva_nav::charge_pointRequest_<ContainerAllocator2> & rhs)
{
  return lhs.type == rhs.type &&
    lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.r == rhs.r &&
    lhs.px == rhs.px &&
    lhs.py == rhs.py &&
    lhs.pr == rhs.pr &&
    lhs.dx == rhs.dx &&
    lhs.dy == rhs.dy &&
    lhs.dr == rhs.dr;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sineva_nav::charge_pointRequest_<ContainerAllocator1> & lhs, const ::sineva_nav::charge_pointRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sineva_nav

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::charge_pointRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sineva_nav::charge_pointRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::charge_pointRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sineva_nav::charge_pointRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::charge_pointRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sineva_nav::charge_pointRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sineva_nav::charge_pointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "95724697e5528f2c7137c4e74465d994";
  }

  static const char* value(const ::sineva_nav::charge_pointRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x95724697e5528f2cULL;
  static const uint64_t static_value2 = 0x7137c4e74465d994ULL;
};

template<class ContainerAllocator>
struct DataType< ::sineva_nav::charge_pointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sineva_nav/charge_pointRequest";
  }

  static const char* value(const ::sineva_nav::charge_pointRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sineva_nav::charge_pointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 type\n"
"# charger pose\n"
"float32 x\n"
"float32 y\n"
"float32 r\n"
"# dock point pose\n"
"float32 px\n"
"float32 py\n"
"float32 pr\n"
"# deviation pose\n"
"float32 dx\n"
"float32 dy\n"
"float32 dr\n"
;
  }

  static const char* value(const ::sineva_nav::charge_pointRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sineva_nav::charge_pointRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.r);
      stream.next(m.px);
      stream.next(m.py);
      stream.next(m.pr);
      stream.next(m.dx);
      stream.next(m.dy);
      stream.next(m.dr);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct charge_pointRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sineva_nav::charge_pointRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sineva_nav::charge_pointRequest_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<int8_t>::stream(s, indent + "  ", v.type);
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "r: ";
    Printer<float>::stream(s, indent + "  ", v.r);
    s << indent << "px: ";
    Printer<float>::stream(s, indent + "  ", v.px);
    s << indent << "py: ";
    Printer<float>::stream(s, indent + "  ", v.py);
    s << indent << "pr: ";
    Printer<float>::stream(s, indent + "  ", v.pr);
    s << indent << "dx: ";
    Printer<float>::stream(s, indent + "  ", v.dx);
    s << indent << "dy: ";
    Printer<float>::stream(s, indent + "  ", v.dy);
    s << indent << "dr: ";
    Printer<float>::stream(s, indent + "  ", v.dr);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SINEVA_NAV_MESSAGE_CHARGE_POINTREQUEST_H
