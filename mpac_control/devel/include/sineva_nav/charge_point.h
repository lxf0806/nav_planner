// Generated by gencpp from file sineva_nav/charge_point.msg
// DO NOT EDIT!


#ifndef SINEVA_NAV_MESSAGE_CHARGE_POINT_H
#define SINEVA_NAV_MESSAGE_CHARGE_POINT_H

#include <ros/service_traits.h>


#include <sineva_nav/charge_pointRequest.h>
#include <sineva_nav/charge_pointResponse.h>


namespace sineva_nav
{

struct charge_point
{

typedef charge_pointRequest Request;
typedef charge_pointResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct charge_point
} // namespace sineva_nav


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::sineva_nav::charge_point > {
  static const char* value()
  {
    return "6aa97255462c38fddb44d27b34691d65";
  }

  static const char* value(const ::sineva_nav::charge_point&) { return value(); }
};

template<>
struct DataType< ::sineva_nav::charge_point > {
  static const char* value()
  {
    return "sineva_nav/charge_point";
  }

  static const char* value(const ::sineva_nav::charge_point&) { return value(); }
};


// service_traits::MD5Sum< ::sineva_nav::charge_pointRequest> should match
// service_traits::MD5Sum< ::sineva_nav::charge_point >
template<>
struct MD5Sum< ::sineva_nav::charge_pointRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sineva_nav::charge_point >::value();
  }
  static const char* value(const ::sineva_nav::charge_pointRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sineva_nav::charge_pointRequest> should match
// service_traits::DataType< ::sineva_nav::charge_point >
template<>
struct DataType< ::sineva_nav::charge_pointRequest>
{
  static const char* value()
  {
    return DataType< ::sineva_nav::charge_point >::value();
  }
  static const char* value(const ::sineva_nav::charge_pointRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sineva_nav::charge_pointResponse> should match
// service_traits::MD5Sum< ::sineva_nav::charge_point >
template<>
struct MD5Sum< ::sineva_nav::charge_pointResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sineva_nav::charge_point >::value();
  }
  static const char* value(const ::sineva_nav::charge_pointResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sineva_nav::charge_pointResponse> should match
// service_traits::DataType< ::sineva_nav::charge_point >
template<>
struct DataType< ::sineva_nav::charge_pointResponse>
{
  static const char* value()
  {
    return DataType< ::sineva_nav::charge_point >::value();
  }
  static const char* value(const ::sineva_nav::charge_pointResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SINEVA_NAV_MESSAGE_CHARGE_POINT_H