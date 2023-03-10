// Generated by gencpp from file sineva_nav/EnableSrv.msg
// DO NOT EDIT!


#ifndef SINEVA_NAV_MESSAGE_ENABLESRV_H
#define SINEVA_NAV_MESSAGE_ENABLESRV_H

#include <ros/service_traits.h>


#include <sineva_nav/EnableSrvRequest.h>
#include <sineva_nav/EnableSrvResponse.h>


namespace sineva_nav
{

struct EnableSrv
{

typedef EnableSrvRequest Request;
typedef EnableSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct EnableSrv
} // namespace sineva_nav


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::sineva_nav::EnableSrv > {
  static const char* value()
  {
    return "453c8349175735b023f9d38fc609cbe6";
  }

  static const char* value(const ::sineva_nav::EnableSrv&) { return value(); }
};

template<>
struct DataType< ::sineva_nav::EnableSrv > {
  static const char* value()
  {
    return "sineva_nav/EnableSrv";
  }

  static const char* value(const ::sineva_nav::EnableSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sineva_nav::EnableSrvRequest> should match
// service_traits::MD5Sum< ::sineva_nav::EnableSrv >
template<>
struct MD5Sum< ::sineva_nav::EnableSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sineva_nav::EnableSrv >::value();
  }
  static const char* value(const ::sineva_nav::EnableSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sineva_nav::EnableSrvRequest> should match
// service_traits::DataType< ::sineva_nav::EnableSrv >
template<>
struct DataType< ::sineva_nav::EnableSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sineva_nav::EnableSrv >::value();
  }
  static const char* value(const ::sineva_nav::EnableSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sineva_nav::EnableSrvResponse> should match
// service_traits::MD5Sum< ::sineva_nav::EnableSrv >
template<>
struct MD5Sum< ::sineva_nav::EnableSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sineva_nav::EnableSrv >::value();
  }
  static const char* value(const ::sineva_nav::EnableSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sineva_nav::EnableSrvResponse> should match
// service_traits::DataType< ::sineva_nav::EnableSrv >
template<>
struct DataType< ::sineva_nav::EnableSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sineva_nav::EnableSrv >::value();
  }
  static const char* value(const ::sineva_nav::EnableSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SINEVA_NAV_MESSAGE_ENABLESRV_H
