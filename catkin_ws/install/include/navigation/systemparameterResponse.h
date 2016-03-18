// Generated by gencpp from file navigation/systemparameterResponse.msg
// DO NOT EDIT!


#ifndef NAVIGATION_MESSAGE_SYSTEMPARAMETERRESPONSE_H
#define NAVIGATION_MESSAGE_SYSTEMPARAMETERRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace navigation
{
template <class ContainerAllocator>
struct systemparameterResponse_
{
  typedef systemparameterResponse_<ContainerAllocator> Type;

  systemparameterResponse_()
    : kp()  {
      kp.assign(0.0);
  }
  systemparameterResponse_(const ContainerAllocator& _alloc)
    : kp()  {
      kp.assign(0.0);
  }



   typedef boost::array<double, 4>  _kp_type;
  _kp_type kp;




  typedef boost::shared_ptr< ::navigation::systemparameterResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::navigation::systemparameterResponse_<ContainerAllocator> const> ConstPtr;

}; // struct systemparameterResponse_

typedef ::navigation::systemparameterResponse_<std::allocator<void> > systemparameterResponse;

typedef boost::shared_ptr< ::navigation::systemparameterResponse > systemparameterResponsePtr;
typedef boost::shared_ptr< ::navigation::systemparameterResponse const> systemparameterResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::navigation::systemparameterResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::navigation::systemparameterResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace navigation

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'navigation': ['/home/pulkit/urc2016/catkin_ws/src/navigation/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::navigation::systemparameterResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::navigation::systemparameterResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::navigation::systemparameterResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::navigation::systemparameterResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::navigation::systemparameterResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::navigation::systemparameterResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::navigation::systemparameterResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cf97abfab8ffbbdaf77b53d1545ec8e9";
  }

  static const char* value(const ::navigation::systemparameterResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcf97abfab8ffbbdaULL;
  static const uint64_t static_value2 = 0xf77b53d1545ec8e9ULL;
};

template<class ContainerAllocator>
struct DataType< ::navigation::systemparameterResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "navigation/systemparameterResponse";
  }

  static const char* value(const ::navigation::systemparameterResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::navigation::systemparameterResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64[4] kp\n\
\n\
";
  }

  static const char* value(const ::navigation::systemparameterResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::navigation::systemparameterResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.kp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct systemparameterResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::navigation::systemparameterResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::navigation::systemparameterResponse_<ContainerAllocator>& v)
  {
    s << indent << "kp[]" << std::endl;
    for (size_t i = 0; i < v.kp.size(); ++i)
    {
      s << indent << "  kp[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.kp[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAVIGATION_MESSAGE_SYSTEMPARAMETERRESPONSE_H
