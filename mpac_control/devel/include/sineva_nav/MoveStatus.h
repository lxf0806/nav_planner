// Generated by gencpp from file sineva_nav/MoveStatus.msg
// DO NOT EDIT!


#ifndef SINEVA_NAV_MESSAGE_MOVESTATUS_H
#define SINEVA_NAV_MESSAGE_MOVESTATUS_H

#include <ros/service_traits.h>


#include <sineva_nav/MoveStatusRequest.h>
#include <sineva_nav/MoveStatusResponse.h>


namespace sineva_nav
{

struct MoveStatus
{

typedef MoveStatusRequest Request;
typedef MoveStatusResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct MoveStatus
} // namespace sineva_nav


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::sineva_nav::MoveStatus > {
  static const char* value()
  {
    return "f6729728149600a4ea80caa7ab1e5015";
  }

  static const char* value(const ::sineva_nav::MoveStatus&) { return value(); }
};

template<>
struct DataType< ::sineva_nav::MoveStatus > {
  static const char* value()
  {
    return "sineva_nav/MoveStatus";
  }

  static const char* value(const ::sineva_nav::MoveStatus&) { return value(); }
};


// service_traits::MD5Sum< ::sineva_nav::MoveStatusRequest> should match
// service_traits::MD5Sum< ::sineva_nav::MoveStatus >
template<>
struct MD5Sum< ::sineva_nav::MoveStatusRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sineva_nav::MoveStatus >::value();
  }
  static const char* value(const ::sineva_nav::MoveStatusRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sineva_nav::MoveStatusRequest> should match
// service_traits::DataType< ::sineva_nav::MoveStatus >
template<>
struct DataType< ::sineva_nav::MoveStatusRequest>
{
  static const char* value()
  {
    return DataType< ::sineva_nav::MoveStatus >::value();
  }
  static const char* value(const ::sineva_nav::MoveStatusRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sineva_nav::MoveStatusResponse> should match
// service_traits::MD5Sum< ::sineva_nav::MoveStatus >
template<>
struct MD5Sum< ::sineva_nav::MoveStatusResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sineva_nav::MoveStatus >::value();
  }
  static const char* value(const ::sineva_nav::MoveStatusResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sineva_nav::MoveStatusResponse> should match
// service_traits::DataType< ::sineva_nav::MoveStatus >
template<>
struct DataType< ::sineva_nav::MoveStatusResponse>
{
  static const char* value()
  {
    return DataType< ::sineva_nav::MoveStatus >::value();
  }
  static const char* value(const ::sineva_nav::MoveStatusResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SINEVA_NAV_MESSAGE_MOVESTATUS_H