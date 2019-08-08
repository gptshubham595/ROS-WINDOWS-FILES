// Generated by gencpp from file laser_assembler/AssembleScans2Request.msg
// DO NOT EDIT!


#ifndef LASER_ASSEMBLER_MESSAGE_ASSEMBLESCANS2REQUEST_H
#define LASER_ASSEMBLER_MESSAGE_ASSEMBLESCANS2REQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace laser_assembler
{
template <class ContainerAllocator>
struct AssembleScans2Request_
{
  typedef AssembleScans2Request_<ContainerAllocator> Type;

  AssembleScans2Request_()
    : begin()
    , end()  {
    }
  AssembleScans2Request_(const ContainerAllocator& _alloc)
    : begin()
    , end()  {
  (void)_alloc;
    }



   typedef ros::Time _begin_type;
  _begin_type begin;

   typedef ros::Time _end_type;
  _end_type end;





  typedef boost::shared_ptr< ::laser_assembler::AssembleScans2Request_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::laser_assembler::AssembleScans2Request_<ContainerAllocator> const> ConstPtr;

}; // struct AssembleScans2Request_

typedef ::laser_assembler::AssembleScans2Request_<std::allocator<void> > AssembleScans2Request;

typedef boost::shared_ptr< ::laser_assembler::AssembleScans2Request > AssembleScans2RequestPtr;
typedef boost::shared_ptr< ::laser_assembler::AssembleScans2Request const> AssembleScans2RequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::laser_assembler::AssembleScans2Request_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::laser_assembler::AssembleScans2Request_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace laser_assembler

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['C:/opt/ros/melodic/x64/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['C:/opt/ros/melodic/x64/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['C:/opt/ros/melodic/x64/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::laser_assembler::AssembleScans2Request_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::laser_assembler::AssembleScans2Request_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::laser_assembler::AssembleScans2Request_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::laser_assembler::AssembleScans2Request_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::laser_assembler::AssembleScans2Request_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::laser_assembler::AssembleScans2Request_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::laser_assembler::AssembleScans2Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b341004f74e15bf5e1b2053a9183bdc7";
  }

  static const char* value(const ::laser_assembler::AssembleScans2Request_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb341004f74e15bf5ULL;
  static const uint64_t static_value2 = 0xe1b2053a9183bdc7ULL;
};

template<class ContainerAllocator>
struct DataType< ::laser_assembler::AssembleScans2Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "laser_assembler/AssembleScans2Request";
  }

  static const char* value(const ::laser_assembler::AssembleScans2Request_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::laser_assembler::AssembleScans2Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"time begin\n"
"\n"
"time end\n"
;
  }

  static const char* value(const ::laser_assembler::AssembleScans2Request_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::laser_assembler::AssembleScans2Request_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.begin);
      stream.next(m.end);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AssembleScans2Request_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::laser_assembler::AssembleScans2Request_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::laser_assembler::AssembleScans2Request_<ContainerAllocator>& v)
  {
    s << indent << "begin: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.begin);
    s << indent << "end: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.end);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LASER_ASSEMBLER_MESSAGE_ASSEMBLESCANS2REQUEST_H
