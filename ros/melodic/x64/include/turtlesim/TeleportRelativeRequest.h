// Generated by gencpp from file turtlesim/TeleportRelativeRequest.msg
// DO NOT EDIT!


#ifndef TURTLESIM_MESSAGE_TELEPORTRELATIVEREQUEST_H
#define TURTLESIM_MESSAGE_TELEPORTRELATIVEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace turtlesim
{
template <class ContainerAllocator>
struct TeleportRelativeRequest_
{
  typedef TeleportRelativeRequest_<ContainerAllocator> Type;

  TeleportRelativeRequest_()
    : linear(0.0)
    , angular(0.0)  {
    }
  TeleportRelativeRequest_(const ContainerAllocator& _alloc)
    : linear(0.0)
    , angular(0.0)  {
  (void)_alloc;
    }



   typedef float _linear_type;
  _linear_type linear;

   typedef float _angular_type;
  _angular_type angular;





  typedef boost::shared_ptr< ::turtlesim::TeleportRelativeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlesim::TeleportRelativeRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TeleportRelativeRequest_

typedef ::turtlesim::TeleportRelativeRequest_<std::allocator<void> > TeleportRelativeRequest;

typedef boost::shared_ptr< ::turtlesim::TeleportRelativeRequest > TeleportRelativeRequestPtr;
typedef boost::shared_ptr< ::turtlesim::TeleportRelativeRequest const> TeleportRelativeRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlesim::TeleportRelativeRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlesim::TeleportRelativeRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace turtlesim

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['C:/opt/ros/melodic/x64/share/std_msgs/cmake/../msg'], 'turtlesim': ['C:/catkin_ws/src/ros_tutorials/turtlesim/msg'], 'geometry_msgs': ['C:/opt/ros/melodic/x64/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::turtlesim::TeleportRelativeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlesim::TeleportRelativeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlesim::TeleportRelativeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlesim::TeleportRelativeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlesim::TeleportRelativeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlesim::TeleportRelativeRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlesim::TeleportRelativeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9d5c2dcd348ac8f76ce2a4307bd63a13";
  }

  static const char* value(const ::turtlesim::TeleportRelativeRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9d5c2dcd348ac8f7ULL;
  static const uint64_t static_value2 = 0x6ce2a4307bd63a13ULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlesim::TeleportRelativeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlesim/TeleportRelativeRequest";
  }

  static const char* value(const ::turtlesim::TeleportRelativeRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlesim::TeleportRelativeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 linear\n"
"float32 angular\n"
;
  }

  static const char* value(const ::turtlesim::TeleportRelativeRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlesim::TeleportRelativeRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.linear);
      stream.next(m.angular);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TeleportRelativeRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlesim::TeleportRelativeRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::turtlesim::TeleportRelativeRequest_<ContainerAllocator>& v)
  {
    s << indent << "linear: ";
    Printer<float>::stream(s, indent + "  ", v.linear);
    s << indent << "angular: ";
    Printer<float>::stream(s, indent + "  ", v.angular);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TURTLESIM_MESSAGE_TELEPORTRELATIVEREQUEST_H
