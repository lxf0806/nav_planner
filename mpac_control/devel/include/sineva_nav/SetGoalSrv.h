// Generated by gencpp from file sineva_nav/SetGoalSrv.msg
// DO NOT EDIT!


#ifndef SINEVA_NAV_MESSAGE_SETGOALSRV_H
#define SINEVA_NAV_MESSAGE_SETGOALSRV_H

#include <ros/service_traits.h>


#include <sineva_nav/SetGoalSrvRequest.h>
#include <sineva_nav/SetGoalSrvResponse.h>


namespace sineva_nav
{

struct SetGoalSrv
{

typedef SetGoalSrvRequest Request;
typedef SetGoalSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetGoalSrv
} // namespace sineva_nav


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::sineva_nav::SetGoalSrv > {
  static const char* value()
  {
    return "c19bf813310f153659784721f23f0785";
  }

  static const char* value(const ::sineva_nav::SetGoalSrv&) { return value(); }
};

template<>
struct DataType< ::sineva_nav::SetGoalSrv > {
  static const char* value()
  {
    return "sineva_nav/SetGoalSrv";
  }

  static const char* value(const ::sineva_nav::SetGoalSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sineva_nav::SetGoalSrvRequest> should match
// service_traits::MD5Sum< ::sineva_nav::SetGoalSrv >
template<>
struct MD5Sum< ::sineva_nav::SetGoalSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sineva_nav::SetGoalSrv >::value();
  }
  static const char* value(const ::sineva_nav::SetGoalSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sineva_nav::SetGoalSrvRequest> should match
// service_traits::DataType< ::sineva_nav::SetGoalSrv >
template<>
struct DataType< ::sineva_nav::SetGoalSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sineva_nav::SetGoalSrv >::value();
  }
  static const char* value(const ::sineva_nav::SetGoalSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sineva_nav::SetGoalSrvResponse> should match
// service_traits::MD5Sum< ::sineva_nav::SetGoalSrv >
template<>
struct MD5Sum< ::sineva_nav::SetGoalSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sineva_nav::SetGoalSrv >::value();
  }
  static const char* value(const ::sineva_nav::SetGoalSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sineva_nav::SetGoalSrvResponse> should match
// service_traits::DataType< ::sineva_nav::SetGoalSrv >
template<>
struct DataType< ::sineva_nav::SetGoalSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sineva_nav::SetGoalSrv >::value();
  }
  static const char* value(const ::sineva_nav::SetGoalSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SINEVA_NAV_MESSAGE_SETGOALSRV_H
