// Generated by gencpp from file std_msgs/UInt32MultiArray.msg
// DO NOT EDIT!


#ifndef STD_MSGS_MESSAGE_UINT32MULTIARRAY_H
#define STD_MSGS_MESSAGE_UINT32MULTIARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/MultiArrayLayout.h>

namespace std_msgs
{
template <class ContainerAllocator>
struct UInt32MultiArray_
{
  typedef UInt32MultiArray_<ContainerAllocator> Type;

  UInt32MultiArray_()
    : layout()
    , data()  {
    }
  UInt32MultiArray_(const ContainerAllocator& _alloc)
    : layout(_alloc)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::MultiArrayLayout_<ContainerAllocator>  _layout_type;
  _layout_type layout;

   typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::std_msgs::UInt32MultiArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::std_msgs::UInt32MultiArray_<ContainerAllocator> const> ConstPtr;

}; // struct UInt32MultiArray_

typedef ::std_msgs::UInt32MultiArray_<std::allocator<void> > UInt32MultiArray;

typedef boost::shared_ptr< ::std_msgs::UInt32MultiArray > UInt32MultiArrayPtr;
typedef boost::shared_ptr< ::std_msgs::UInt32MultiArray const> UInt32MultiArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::std_msgs::UInt32MultiArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::std_msgs::UInt32MultiArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace std_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['C:/catkin_ws/src/std_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::std_msgs::UInt32MultiArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::std_msgs::UInt32MultiArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::std_msgs::UInt32MultiArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::std_msgs::UInt32MultiArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::std_msgs::UInt32MultiArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::std_msgs::UInt32MultiArray_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::std_msgs::UInt32MultiArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4d6a180abc9be191b96a7eda6c8a233d";
  }

  static const char* value(const ::std_msgs::UInt32MultiArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4d6a180abc9be191ULL;
  static const uint64_t static_value2 = 0xb96a7eda6c8a233dULL;
};

template<class ContainerAllocator>
struct DataType< ::std_msgs::UInt32MultiArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/UInt32MultiArray";
  }

  static const char* value(const ::std_msgs::UInt32MultiArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::std_msgs::UInt32MultiArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Please look at the MultiArrayLayout message definition for\n"
"# documentation on all multiarrays.\n"
"\n"
"MultiArrayLayout  layout        # specification of data layout\n"
"uint32[]          data          # array of data\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/MultiArrayLayout\n"
"# The multiarray declares a generic multi-dimensional array of a\n"
"# particular data type.  Dimensions are ordered from outer most\n"
"# to inner most.\n"
"\n"
"MultiArrayDimension[] dim # Array of dimension properties\n"
"uint32 data_offset        # padding elements at front of data\n"
"\n"
"# Accessors should ALWAYS be written in terms of dimension stride\n"
"# and specified outer-most dimension first.\n"
"# \n"
"# multiarray(i,j,k) = data[data_offset + dim_stride[1]*i + dim_stride[2]*j + k]\n"
"#\n"
"# A standard, 3-channel 640x480 image with interleaved color channels\n"
"# would be specified as:\n"
"#\n"
"# dim[0].label  = \"height\"\n"
"# dim[0].size   = 480\n"
"# dim[0].stride = 3*640*480 = 921600  (note dim[0] stride is just size of image)\n"
"# dim[1].label  = \"width\"\n"
"# dim[1].size   = 640\n"
"# dim[1].stride = 3*640 = 1920\n"
"# dim[2].label  = \"channel\"\n"
"# dim[2].size   = 3\n"
"# dim[2].stride = 3\n"
"#\n"
"# multiarray(i,j,k) refers to the ith row, jth column, and kth channel.\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/MultiArrayDimension\n"
"string label   # label of given dimension\n"
"uint32 size    # size of given dimension (in type units)\n"
"uint32 stride  # stride of given dimension\n"
;
  }

  static const char* value(const ::std_msgs::UInt32MultiArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::std_msgs::UInt32MultiArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.layout);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct UInt32MultiArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::std_msgs::UInt32MultiArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::std_msgs::UInt32MultiArray_<ContainerAllocator>& v)
  {
    s << indent << "layout: ";
    s << std::endl;
    Printer< ::std_msgs::MultiArrayLayout_<ContainerAllocator> >::stream(s, indent + "  ", v.layout);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // STD_MSGS_MESSAGE_UINT32MULTIARRAY_H
