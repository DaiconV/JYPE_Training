// Generated by gencpp from file pg70/Close.msg
// DO NOT EDIT!


#ifndef PG70_MESSAGE_CLOSE_H
#define PG70_MESSAGE_CLOSE_H

#include <ros/service_traits.h>


#include <pg70/CloseRequest.h>
#include <pg70/CloseResponse.h>


namespace pg70
{

struct Close
{

typedef CloseRequest Request;
typedef CloseResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Close
} // namespace pg70


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::pg70::Close > {
  static const char* value()
  {
    return "a528deecbc4be6f38cecca3041d9f6b7";
  }

  static const char* value(const ::pg70::Close&) { return value(); }
};

template<>
struct DataType< ::pg70::Close > {
  static const char* value()
  {
    return "pg70/Close";
  }

  static const char* value(const ::pg70::Close&) { return value(); }
};


// service_traits::MD5Sum< ::pg70::CloseRequest> should match 
// service_traits::MD5Sum< ::pg70::Close > 
template<>
struct MD5Sum< ::pg70::CloseRequest>
{
  static const char* value()
  {
    return MD5Sum< ::pg70::Close >::value();
  }
  static const char* value(const ::pg70::CloseRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::pg70::CloseRequest> should match 
// service_traits::DataType< ::pg70::Close > 
template<>
struct DataType< ::pg70::CloseRequest>
{
  static const char* value()
  {
    return DataType< ::pg70::Close >::value();
  }
  static const char* value(const ::pg70::CloseRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::pg70::CloseResponse> should match 
// service_traits::MD5Sum< ::pg70::Close > 
template<>
struct MD5Sum< ::pg70::CloseResponse>
{
  static const char* value()
  {
    return MD5Sum< ::pg70::Close >::value();
  }
  static const char* value(const ::pg70::CloseResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::pg70::CloseResponse> should match 
// service_traits::DataType< ::pg70::Close > 
template<>
struct DataType< ::pg70::CloseResponse>
{
  static const char* value()
  {
    return DataType< ::pg70::Close >::value();
  }
  static const char* value(const ::pg70::CloseResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PG70_MESSAGE_CLOSE_H
