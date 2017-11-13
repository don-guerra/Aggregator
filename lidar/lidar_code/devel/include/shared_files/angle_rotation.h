// Generated by gencpp from file shared_files/angle_rotation.msg
// DO NOT EDIT!


#ifndef SHARED_FILES_MESSAGE_ANGLE_ROTATION_H
#define SHARED_FILES_MESSAGE_ANGLE_ROTATION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace shared_files
{
template <class ContainerAllocator>
struct angle_rotation_
{
  typedef angle_rotation_<ContainerAllocator> Type;

  angle_rotation_()
    : enable(0)
    , direction(0)
    , angle(0.0)  {
    }
  angle_rotation_(const ContainerAllocator& _alloc)
    : enable(0)
    , direction(0)
    , angle(0.0)  {
  (void)_alloc;
    }



   typedef int8_t _enable_type;
  _enable_type enable;

   typedef int8_t _direction_type;
  _direction_type direction;

   typedef float _angle_type;
  _angle_type angle;




  typedef boost::shared_ptr< ::shared_files::angle_rotation_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::shared_files::angle_rotation_<ContainerAllocator> const> ConstPtr;

}; // struct angle_rotation_

typedef ::shared_files::angle_rotation_<std::allocator<void> > angle_rotation;

typedef boost::shared_ptr< ::shared_files::angle_rotation > angle_rotationPtr;
typedef boost::shared_ptr< ::shared_files::angle_rotation const> angle_rotationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::shared_files::angle_rotation_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::shared_files::angle_rotation_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace shared_files

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'shared_files': ['/home/dguerra/aggregator/lidar/lidar_code/src/shared_files/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::shared_files::angle_rotation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::shared_files::angle_rotation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::shared_files::angle_rotation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::shared_files::angle_rotation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::shared_files::angle_rotation_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::shared_files::angle_rotation_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::shared_files::angle_rotation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "70e02d19e6f4d7979bc0aff4297d83f6";
  }

  static const char* value(const ::shared_files::angle_rotation_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x70e02d19e6f4d797ULL;
  static const uint64_t static_value2 = 0x9bc0aff4297d83f6ULL;
};

template<class ContainerAllocator>
struct DataType< ::shared_files::angle_rotation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "shared_files/angle_rotation";
  }

  static const char* value(const ::shared_files::angle_rotation_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::shared_files::angle_rotation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# These value are sent when the robot is already centered, and we need to orient the robot to\n\
# have it parallel to the dump site\n\
#\n\
# Enable tells us if we have finished centering the robot and we can worry about rotation\n\
#\n\
# Direction tells us whether to rotate clockwise or counter-clockwise\n\
#	-1 = counter-clockwise\n\
#	1 = clockwise\n\
#	0 = in parallel, no need to rotate\n\
#\n\
# Angle represents, in degrees, how much we need to rotate to be in parallel to the dump site\n\
\n\
int8 enable\n\
int8 direction 	\n\
float32 angle\n\
";
  }

  static const char* value(const ::shared_files::angle_rotation_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::shared_files::angle_rotation_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.enable);
      stream.next(m.direction);
      stream.next(m.angle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct angle_rotation_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::shared_files::angle_rotation_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::shared_files::angle_rotation_<ContainerAllocator>& v)
  {
    s << indent << "enable: ";
    Printer<int8_t>::stream(s, indent + "  ", v.enable);
    s << indent << "direction: ";
    Printer<int8_t>::stream(s, indent + "  ", v.direction);
    s << indent << "angle: ";
    Printer<float>::stream(s, indent + "  ", v.angle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SHARED_FILES_MESSAGE_ANGLE_ROTATION_H