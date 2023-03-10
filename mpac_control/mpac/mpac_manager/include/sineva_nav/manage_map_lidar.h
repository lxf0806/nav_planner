// Generated by gencpp from file sineva_nav/manage_map_lidar.msg
// DO NOT EDIT!


#ifndef SINEVA_NAV_MESSAGE_MANAGE_MAP_LIDAR_H
#define SINEVA_NAV_MESSAGE_MANAGE_MAP_LIDAR_H

#include <ros/service_traits.h>


#include <sineva_nav/manage_map_lidarRequest.h>
#include <sineva_nav/manage_map_lidarResponse.h>


namespace sineva_nav
{

struct manage_map_lidar
{

typedef manage_map_lidarRequest Request;
typedef manage_map_lidarResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct manage_map_lidar
} // namespace sineva_nav


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::sineva_nav::manage_map_lidar > {
  static const char* value()
  {
    return "af39c21a4fa890c80c400b940fd5dfea";
  }

  static const char* value(const ::sineva_nav::manage_map_lidar&) { return value(); }
};

template<>
struct DataType< ::sineva_nav::manage_map_lidar > {
  static const char* value()
  {
    return "sineva_nav/manage_map_lidar";
  }

  static const char* value(const ::sineva_nav::manage_map_lidar&) { return value(); }
};


// service_traits::MD5Sum< ::sineva_nav::manage_map_lidarRequest> should match 
// service_traits::MD5Sum< ::sineva_nav::manage_map_lidar > 
template<>
struct MD5Sum< ::sineva_nav::manage_map_lidarRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sineva_nav::manage_map_lidar >::value();
  }
  static const char* value(const ::sineva_nav::manage_map_lidarRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sineva_nav::manage_map_lidarRequest> should match 
// service_traits::DataType< ::sineva_nav::manage_map_lidar > 
template<>
struct DataType< ::sineva_nav::manage_map_lidarRequest>
{
  static const char* value()
  {
    return DataType< ::sineva_nav::manage_map_lidar >::value();
  }
  static const char* value(const ::sineva_nav::manage_map_lidarRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sineva_nav::manage_map_lidarResponse> should match 
// service_traits::MD5Sum< ::sineva_nav::manage_map_lidar > 
template<>
struct MD5Sum< ::sineva_nav::manage_map_lidarResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sineva_nav::manage_map_lidar >::value();
  }
  static const char* value(const ::sineva_nav::manage_map_lidarResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sineva_nav::manage_map_lidarResponse> should match 
// service_traits::DataType< ::sineva_nav::manage_map_lidar > 
template<>
struct DataType< ::sineva_nav::manage_map_lidarResponse>
{
  static const char* value()
  {
    return DataType< ::sineva_nav::manage_map_lidar >::value();
  }
  static const char* value(const ::sineva_nav::manage_map_lidarResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SINEVA_NAV_MESSAGE_MANAGE_MAP_LIDAR_H
