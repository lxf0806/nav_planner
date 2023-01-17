// Generated by gencpp from file sineva_nav/UpdateMapSrv.msg
// DO NOT EDIT!


#ifndef SINEVA_NAV_MESSAGE_UPDATEMAPSRV_H
#define SINEVA_NAV_MESSAGE_UPDATEMAPSRV_H

#include <ros/service_traits.h>


#include <sineva_nav/UpdateMapSrvRequest.h>
#include <sineva_nav/UpdateMapSrvResponse.h>


namespace sineva_nav
{

struct UpdateMapSrv
{

typedef UpdateMapSrvRequest Request;
typedef UpdateMapSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct UpdateMapSrv
} // namespace sineva_nav


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::sineva_nav::UpdateMapSrv > {
  static const char* value()
  {
    return "e2ab93ba586b17f6c5de94ce88e0aec5";
  }

  static const char* value(const ::sineva_nav::UpdateMapSrv&) { return value(); }
};

template<>
struct DataType< ::sineva_nav::UpdateMapSrv > {
  static const char* value()
  {
    return "sineva_nav/UpdateMapSrv";
  }

  static const char* value(const ::sineva_nav::UpdateMapSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sineva_nav::UpdateMapSrvRequest> should match 
// service_traits::MD5Sum< ::sineva_nav::UpdateMapSrv > 
template<>
struct MD5Sum< ::sineva_nav::UpdateMapSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sineva_nav::UpdateMapSrv >::value();
  }
  static const char* value(const ::sineva_nav::UpdateMapSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sineva_nav::UpdateMapSrvRequest> should match 
// service_traits::DataType< ::sineva_nav::UpdateMapSrv > 
template<>
struct DataType< ::sineva_nav::UpdateMapSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sineva_nav::UpdateMapSrv >::value();
  }
  static const char* value(const ::sineva_nav::UpdateMapSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sineva_nav::UpdateMapSrvResponse> should match 
// service_traits::MD5Sum< ::sineva_nav::UpdateMapSrv > 
template<>
struct MD5Sum< ::sineva_nav::UpdateMapSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sineva_nav::UpdateMapSrv >::value();
  }
  static const char* value(const ::sineva_nav::UpdateMapSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sineva_nav::UpdateMapSrvResponse> should match 
// service_traits::DataType< ::sineva_nav::UpdateMapSrv > 
template<>
struct DataType< ::sineva_nav::UpdateMapSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sineva_nav::UpdateMapSrv >::value();
  }
  static const char* value(const ::sineva_nav::UpdateMapSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SINEVA_NAV_MESSAGE_UPDATEMAPSRV_H
