// Generated by gencpp from file navigation/rover_mobility_arduino.msg
// DO NOT EDIT!


#ifndef NAVIGATION_MESSAGE_ROVER_MOBILITY_ARDUINO_H
#define NAVIGATION_MESSAGE_ROVER_MOBILITY_ARDUINO_H


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
struct rover_mobility_arduino_
{
  typedef rover_mobility_arduino_<ContainerAllocator> Type;

  rover_mobility_arduino_()
    : S1(0.0)
    , S2(0.0)
    , S3(0.0)
    , S4(0.0)
    , S5(0.0)
    , S6(0.0)
    , A1(0.0)
    , A2(0.0)
    , A3(0.0)
    , A4(0.0)  {
    }
  rover_mobility_arduino_(const ContainerAllocator& _alloc)
    : S1(0.0)
    , S2(0.0)
    , S3(0.0)
    , S4(0.0)
    , S5(0.0)
    , S6(0.0)
    , A1(0.0)
    , A2(0.0)
    , A3(0.0)
    , A4(0.0)  {
    }



   typedef double _S1_type;
  _S1_type S1;

   typedef double _S2_type;
  _S2_type S2;

   typedef double _S3_type;
  _S3_type S3;

   typedef double _S4_type;
  _S4_type S4;

   typedef double _S5_type;
  _S5_type S5;

   typedef double _S6_type;
  _S6_type S6;

   typedef double _A1_type;
  _A1_type A1;

   typedef double _A2_type;
  _A2_type A2;

   typedef double _A3_type;
  _A3_type A3;

   typedef double _A4_type;
  _A4_type A4;




  typedef boost::shared_ptr< ::navigation::rover_mobility_arduino_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::navigation::rover_mobility_arduino_<ContainerAllocator> const> ConstPtr;

}; // struct rover_mobility_arduino_

typedef ::navigation::rover_mobility_arduino_<std::allocator<void> > rover_mobility_arduino;

typedef boost::shared_ptr< ::navigation::rover_mobility_arduino > rover_mobility_arduinoPtr;
typedef boost::shared_ptr< ::navigation::rover_mobility_arduino const> rover_mobility_arduinoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::navigation::rover_mobility_arduino_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::navigation::rover_mobility_arduino_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::navigation::rover_mobility_arduino_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::navigation::rover_mobility_arduino_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::navigation::rover_mobility_arduino_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::navigation::rover_mobility_arduino_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::navigation::rover_mobility_arduino_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::navigation::rover_mobility_arduino_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::navigation::rover_mobility_arduino_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5235661df0d289b478808517d3970358";
  }

  static const char* value(const ::navigation::rover_mobility_arduino_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5235661df0d289b4ULL;
  static const uint64_t static_value2 = 0x78808517d3970358ULL;
};

template<class ContainerAllocator>
struct DataType< ::navigation::rover_mobility_arduino_<ContainerAllocator> >
{
  static const char* value()
  {
    return "navigation/rover_mobility_arduino";
  }

  static const char* value(const ::navigation::rover_mobility_arduino_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::navigation::rover_mobility_arduino_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Data Type for Speed given to each of the motors\n\
float64 S1\n\
float64 S2\n\
float64 S3\n\
float64 S4\n\
float64 S5\n\
float64 S6\n\
# Data type for individual angle rotation\n\
float64 A1\n\
float64 A2\n\
float64 A3\n\
float64 A4\n\
\n\
";
  }

  static const char* value(const ::navigation::rover_mobility_arduino_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::navigation::rover_mobility_arduino_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.S1);
      stream.next(m.S2);
      stream.next(m.S3);
      stream.next(m.S4);
      stream.next(m.S5);
      stream.next(m.S6);
      stream.next(m.A1);
      stream.next(m.A2);
      stream.next(m.A3);
      stream.next(m.A4);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct rover_mobility_arduino_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::navigation::rover_mobility_arduino_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::navigation::rover_mobility_arduino_<ContainerAllocator>& v)
  {
    s << indent << "S1: ";
    Printer<double>::stream(s, indent + "  ", v.S1);
    s << indent << "S2: ";
    Printer<double>::stream(s, indent + "  ", v.S2);
    s << indent << "S3: ";
    Printer<double>::stream(s, indent + "  ", v.S3);
    s << indent << "S4: ";
    Printer<double>::stream(s, indent + "  ", v.S4);
    s << indent << "S5: ";
    Printer<double>::stream(s, indent + "  ", v.S5);
    s << indent << "S6: ";
    Printer<double>::stream(s, indent + "  ", v.S6);
    s << indent << "A1: ";
    Printer<double>::stream(s, indent + "  ", v.A1);
    s << indent << "A2: ";
    Printer<double>::stream(s, indent + "  ", v.A2);
    s << indent << "A3: ";
    Printer<double>::stream(s, indent + "  ", v.A3);
    s << indent << "A4: ";
    Printer<double>::stream(s, indent + "  ", v.A4);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAVIGATION_MESSAGE_ROVER_MOBILITY_ARDUINO_H
