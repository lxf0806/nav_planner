// Generated by gencpp from file sineva_nav/GetStateSrv.msg
// DO NOT EDIT!


#ifndef SINEVA_NAV_MESSAGE_GETSTATESRV_H
#define SINEVA_NAV_MESSAGE_GETSTATESRV_H

#include <ros/service_traits.h>


#include <sineva_nav/GetStateSrvRequest.h>
#include <sineva_nav/GetStateSrvResponse.h>


namespace sineva_nav
{

struct GetStateSrv
{

typedef GetStateSrvRequest Request;
typedef GetStateSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetStateSrv
} // namespace sineva_nav


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::sineva_nav::GetStateSrv > {
  static const char* value()
  {
    return "702496c6638c59bcef5d602cda36b30f";
  }

  static const char* value(const ::sineva_nav::GetStateSrv&) { return value(); }
};

template<>
struct DataType< ::sineva_nav::GetStateSrv > {
  static const char* value()
  {
    return "sineva_nav/GetStateSrv";
  }

  static const char* value(const ::sineva_nav::GetStateSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sineva_nav::GetStateSrvRequest> should match 
// service_traits::MD5Sum< ::sineva_nav::GetStateSrv > 
template<>
struct MD5Sum< ::sineva_nav::GetStateSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sineva_nav::GetStateSrv >::value();
  }
  static const char* value(const ::sineva_nav::GetStateSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sineva_nav::GetStateSrvRequest> should match 
// service_traits::DataType< ::sineva_nav::GetStateSrv > 
template<>
struct DataType< ::sineva_nav::GetStateSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sineva_nav::GetStateSrv >::value();
  }
  static const char* value(const ::sineva_nav::GetStateSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sineva_nav::GetStateSrvResponse> should match 
// service_traits::MD5Sum< ::sineva_nav::GetStateSrv > 
template<>
struct MD5Sum< ::sineva_nav::GetStateSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sineva_nav::GetStateSrv >::value();
  }
  static const char* value(const ::sineva_nav::GetStateSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sineva_nav::GetStateSrvResponse> should match 
// service_traits::DataType< ::sineva_nav::GetStateSrv > 
template<>
struct DataType< ::sineva_nav::GetStateSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sineva_nav::GetStateSrv >::value();
  }
  static const char* value(const ::sineva_nav::GetStateSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SINEVA_NAV_MESSAGE_GETSTATESRV_H
