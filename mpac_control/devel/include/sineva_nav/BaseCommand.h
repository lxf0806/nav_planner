// Generated by gencpp from file sineva_nav/BaseCommand.msg
// DO NOT EDIT!


#ifndef SINEVA_NAV_MESSAGE_BASECOMMAND_H
#define SINEVA_NAV_MESSAGE_BASECOMMAND_H

#include <ros/service_traits.h>


#include <sineva_nav/BaseCommandRequest.h>
#include <sineva_nav/BaseCommandResponse.h>


namespace sineva_nav
{

struct BaseCommand
{

typedef BaseCommandRequest Request;
typedef BaseCommandResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct BaseCommand
} // namespace sineva_nav


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::sineva_nav::BaseCommand > {
  static const char* value()
  {
    return "f6f2dc9a7416a2a175dbf05bca3c4fdb";
  }

  static const char* value(const ::sineva_nav::BaseCommand&) { return value(); }
};

template<>
struct DataType< ::sineva_nav::BaseCommand > {
  static const char* value()
  {
    return "sineva_nav/BaseCommand";
  }

  static const char* value(const ::sineva_nav::BaseCommand&) { return value(); }
};


// service_traits::MD5Sum< ::sineva_nav::BaseCommandRequest> should match
// service_traits::MD5Sum< ::sineva_nav::BaseCommand >
template<>
struct MD5Sum< ::sineva_nav::BaseCommandRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sineva_nav::BaseCommand >::value();
  }
  static const char* value(const ::sineva_nav::BaseCommandRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sineva_nav::BaseCommandRequest> should match
// service_traits::DataType< ::sineva_nav::BaseCommand >
template<>
struct DataType< ::sineva_nav::BaseCommandRequest>
{
  static const char* value()
  {
    return DataType< ::sineva_nav::BaseCommand >::value();
  }
  static const char* value(const ::sineva_nav::BaseCommandRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sineva_nav::BaseCommandResponse> should match
// service_traits::MD5Sum< ::sineva_nav::BaseCommand >
template<>
struct MD5Sum< ::sineva_nav::BaseCommandResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sineva_nav::BaseCommand >::value();
  }
  static const char* value(const ::sineva_nav::BaseCommandResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sineva_nav::BaseCommandResponse> should match
// service_traits::DataType< ::sineva_nav::BaseCommand >
template<>
struct DataType< ::sineva_nav::BaseCommandResponse>
{
  static const char* value()
  {
    return DataType< ::sineva_nav::BaseCommand >::value();
  }
  static const char* value(const ::sineva_nav::BaseCommandResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SINEVA_NAV_MESSAGE_BASECOMMAND_H
