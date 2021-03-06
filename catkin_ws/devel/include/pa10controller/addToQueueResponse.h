// Generated by gencpp from file pa10controller/addToQueueResponse.msg
// DO NOT EDIT!


#ifndef PA10CONTROLLER_MESSAGE_ADDTOQUEUERESPONSE_H
#define PA10CONTROLLER_MESSAGE_ADDTOQUEUERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pa10controller
{
template <class ContainerAllocator>
struct addToQueueResponse_
{
  typedef addToQueueResponse_<ContainerAllocator> Type;

  addToQueueResponse_()
    : sucess(false)  {
    }
  addToQueueResponse_(const ContainerAllocator& _alloc)
    : sucess(false)  {
  (void)_alloc;
    }



   typedef uint8_t _sucess_type;
  _sucess_type sucess;





  typedef boost::shared_ptr< ::pa10controller::addToQueueResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pa10controller::addToQueueResponse_<ContainerAllocator> const> ConstPtr;

}; // struct addToQueueResponse_

typedef ::pa10controller::addToQueueResponse_<std::allocator<void> > addToQueueResponse;

typedef boost::shared_ptr< ::pa10controller::addToQueueResponse > addToQueueResponsePtr;
typedef boost::shared_ptr< ::pa10controller::addToQueueResponse const> addToQueueResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pa10controller::addToQueueResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pa10controller::addToQueueResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pa10controller

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pa10controller::addToQueueResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pa10controller::addToQueueResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pa10controller::addToQueueResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pa10controller::addToQueueResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pa10controller::addToQueueResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pa10controller::addToQueueResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pa10controller::addToQueueResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3e8ad2f62d0edf01ac96b1e92459b490";
  }

  static const char* value(const ::pa10controller::addToQueueResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3e8ad2f62d0edf01ULL;
  static const uint64_t static_value2 = 0xac96b1e92459b490ULL;
};

template<class ContainerAllocator>
struct DataType< ::pa10controller::addToQueueResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pa10controller/addToQueueResponse";
  }

  static const char* value(const ::pa10controller::addToQueueResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pa10controller::addToQueueResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
bool sucess\n\
";
  }

  static const char* value(const ::pa10controller::addToQueueResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pa10controller::addToQueueResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sucess);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct addToQueueResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pa10controller::addToQueueResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pa10controller::addToQueueResponse_<ContainerAllocator>& v)
  {
    s << indent << "sucess: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sucess);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PA10CONTROLLER_MESSAGE_ADDTOQUEUERESPONSE_H
