// Generated by gencpp from file sineva_nav/MapReq.msg
// DO NOT EDIT!


#ifndef SINEVA_NAV_MESSAGE_MAPREQ_H
#define SINEVA_NAV_MESSAGE_MAPREQ_H

#include <ros/service_traits.h>


#include <sineva_nav/MapReqRequest.h>
#include <sineva_nav/MapReqResponse.h>


namespace sineva_nav
{

struct MapReq
{

typedef MapReqRequest Request;
typedef MapReqResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct MapReq
} // namespace sineva_nav


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::sineva_nav::MapReq > {
  static const char* value()
  {
    return "f620cddd1adb52c04caee6100b1f237e";
  }

  static const char* value(const ::sineva_nav::MapReq&) { return value(); }
};

template<>
struct DataType< ::sineva_nav::MapReq > {
  static const char* value()
  {
    return "sineva_nav/MapReq";
  }

  static const char* value(const ::sineva_nav::MapReq&) { return value(); }
};


// service_traits::MD5Sum< ::sineva_nav::MapReqRequest> should match
// service_traits::MD5Sum< ::sineva_nav::MapReq >
template<>
struct MD5Sum< ::sineva_nav::MapReqRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sineva_nav::MapReq >::value();
  }
  static const char* value(const ::sineva_nav::MapReqRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sineva_nav::MapReqRequest> should match
// service_traits::DataType< ::sineva_nav::MapReq >
template<>
struct DataType< ::sineva_nav::MapReqRequest>
{
  static const char* value()
  {
    return DataType< ::sineva_nav::MapReq >::value();
  }
  static const char* value(const ::sineva_nav::MapReqRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sineva_nav::MapReqResponse> should match
// service_traits::MD5Sum< ::sineva_nav::MapReq >
template<>
struct MD5Sum< ::sineva_nav::MapReqResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sineva_nav::MapReq >::value();
  }
  static const char* value(const ::sineva_nav::MapReqResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sineva_nav::MapReqResponse> should match
// service_traits::DataType< ::sineva_nav::MapReq >
template<>
struct DataType< ::sineva_nav::MapReqResponse>
{
  static const char* value()
  {
    return DataType< ::sineva_nav::MapReq >::value();
  }
  static const char* value(const ::sineva_nav::MapReqResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SINEVA_NAV_MESSAGE_MAPREQ_H
