// Generated by gencpp from file sineva_nav/goal_status.msg
// DO NOT EDIT!


#ifndef SINEVA_NAV_MESSAGE_GOAL_STATUS_H
#define SINEVA_NAV_MESSAGE_GOAL_STATUS_H

#include <ros/service_traits.h>


#include <sineva_nav/goal_statusRequest.h>
#include <sineva_nav/goal_statusResponse.h>


namespace sineva_nav
{

struct goal_status
{

typedef goal_statusRequest Request;
typedef goal_statusResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct goal_status
} // namespace sineva_nav


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::sineva_nav::goal_status > {
  static const char* value()
  {
    return "3d638b2cdc898e8eb5d6b3cfc2f2c14b";
  }

  static const char* value(const ::sineva_nav::goal_status&) { return value(); }
};

template<>
struct DataType< ::sineva_nav::goal_status > {
  static const char* value()
  {
    return "sineva_nav/goal_status";
  }

  static const char* value(const ::sineva_nav::goal_status&) { return value(); }
};


// service_traits::MD5Sum< ::sineva_nav::goal_statusRequest> should match
// service_traits::MD5Sum< ::sineva_nav::goal_status >
template<>
struct MD5Sum< ::sineva_nav::goal_statusRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sineva_nav::goal_status >::value();
  }
  static const char* value(const ::sineva_nav::goal_statusRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sineva_nav::goal_statusRequest> should match
// service_traits::DataType< ::sineva_nav::goal_status >
template<>
struct DataType< ::sineva_nav::goal_statusRequest>
{
  static const char* value()
  {
    return DataType< ::sineva_nav::goal_status >::value();
  }
  static const char* value(const ::sineva_nav::goal_statusRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sineva_nav::goal_statusResponse> should match
// service_traits::MD5Sum< ::sineva_nav::goal_status >
template<>
struct MD5Sum< ::sineva_nav::goal_statusResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sineva_nav::goal_status >::value();
  }
  static const char* value(const ::sineva_nav::goal_statusResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sineva_nav::goal_statusResponse> should match
// service_traits::DataType< ::sineva_nav::goal_status >
template<>
struct DataType< ::sineva_nav::goal_statusResponse>
{
  static const char* value()
  {
    return DataType< ::sineva_nav::goal_status >::value();
  }
  static const char* value(const ::sineva_nav::goal_statusResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SINEVA_NAV_MESSAGE_GOAL_STATUS_H
