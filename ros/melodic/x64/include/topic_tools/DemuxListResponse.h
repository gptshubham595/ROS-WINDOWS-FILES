// Generated by gencpp from file topic_tools/DemuxListResponse.msg
// DO NOT EDIT!


#ifndef TOPIC_TOOLS_MESSAGE_DEMUXLISTRESPONSE_H
#define TOPIC_TOOLS_MESSAGE_DEMUXLISTRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace topic_tools
{
template <class ContainerAllocator>
struct DemuxListResponse_
{
  typedef DemuxListResponse_<ContainerAllocator> Type;

  DemuxListResponse_()
    : topics()  {
    }
  DemuxListResponse_(const ContainerAllocator& _alloc)
    : topics(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _topics_type;
  _topics_type topics;





  typedef boost::shared_ptr< ::topic_tools::DemuxListResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::topic_tools::DemuxListResponse_<ContainerAllocator> const> ConstPtr;

}; // struct DemuxListResponse_

typedef ::topic_tools::DemuxListResponse_<std::allocator<void> > DemuxListResponse;

typedef boost::shared_ptr< ::topic_tools::DemuxListResponse > DemuxListResponsePtr;
typedef boost::shared_ptr< ::topic_tools::DemuxListResponse const> DemuxListResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::topic_tools::DemuxListResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::topic_tools::DemuxListResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace topic_tools

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['C:/opt/ros/melodic/x64/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::topic_tools::DemuxListResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::topic_tools::DemuxListResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::topic_tools::DemuxListResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::topic_tools::DemuxListResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::topic_tools::DemuxListResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::topic_tools::DemuxListResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::topic_tools::DemuxListResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b0eef9a05d4e829092fc2f2c3c2aad3d";
  }

  static const char* value(const ::topic_tools::DemuxListResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb0eef9a05d4e8290ULL;
  static const uint64_t static_value2 = 0x92fc2f2c3c2aad3dULL;
};

template<class ContainerAllocator>
struct DataType< ::topic_tools::DemuxListResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "topic_tools/DemuxListResponse";
  }

  static const char* value(const ::topic_tools::DemuxListResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::topic_tools::DemuxListResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] topics\n"
"\n"
;
  }

  static const char* value(const ::topic_tools::DemuxListResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::topic_tools::DemuxListResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.topics);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DemuxListResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::topic_tools::DemuxListResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::topic_tools::DemuxListResponse_<ContainerAllocator>& v)
  {
    s << indent << "topics[]" << std::endl;
    for (size_t i = 0; i < v.topics.size(); ++i)
    {
      s << indent << "  topics[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.topics[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TOPIC_TOOLS_MESSAGE_DEMUXLISTRESPONSE_H
