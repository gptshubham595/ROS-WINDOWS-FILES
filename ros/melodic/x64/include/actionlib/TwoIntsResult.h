// Generated by gencpp from file actionlib/TwoIntsResult.msg
// DO NOT EDIT!


#ifndef ACTIONLIB_MESSAGE_TWOINTSRESULT_H
#define ACTIONLIB_MESSAGE_TWOINTSRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace actionlib
{
template <class ContainerAllocator>
struct TwoIntsResult_
{
  typedef TwoIntsResult_<ContainerAllocator> Type;

  TwoIntsResult_()
    : sum(0)  {
    }
  TwoIntsResult_(const ContainerAllocator& _alloc)
    : sum(0)  {
  (void)_alloc;
    }



   typedef int64_t _sum_type;
  _sum_type sum;





  typedef boost::shared_ptr< ::actionlib::TwoIntsResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::actionlib::TwoIntsResult_<ContainerAllocator> const> ConstPtr;

}; // struct TwoIntsResult_

typedef ::actionlib::TwoIntsResult_<std::allocator<void> > TwoIntsResult;

typedef boost::shared_ptr< ::actionlib::TwoIntsResult > TwoIntsResultPtr;
typedef boost::shared_ptr< ::actionlib::TwoIntsResult const> TwoIntsResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::actionlib::TwoIntsResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::actionlib::TwoIntsResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace actionlib

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'actionlib': ['D:/a/1/a/_output/devel_isolated/actionlib/share/actionlib/msg'], 'std_msgs': ['C:/opt/ros/melodic/x64/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['C:/opt/ros/melodic/x64/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::actionlib::TwoIntsResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::actionlib::TwoIntsResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actionlib::TwoIntsResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actionlib::TwoIntsResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actionlib::TwoIntsResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actionlib::TwoIntsResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::actionlib::TwoIntsResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b88405221c77b1878a3cbbfff53428d7";
  }

  static const char* value(const ::actionlib::TwoIntsResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb88405221c77b187ULL;
  static const uint64_t static_value2 = 0x8a3cbbfff53428d7ULL;
};

template<class ContainerAllocator>
struct DataType< ::actionlib::TwoIntsResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "actionlib/TwoIntsResult";
  }

  static const char* value(const ::actionlib::TwoIntsResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::actionlib::TwoIntsResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"int64 sum\n"
;
  }

  static const char* value(const ::actionlib::TwoIntsResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::actionlib::TwoIntsResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sum);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TwoIntsResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::actionlib::TwoIntsResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::actionlib::TwoIntsResult_<ContainerAllocator>& v)
  {
    s << indent << "sum: ";
    Printer<int64_t>::stream(s, indent + "  ", v.sum);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ACTIONLIB_MESSAGE_TWOINTSRESULT_H
