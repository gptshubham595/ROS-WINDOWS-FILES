// Generated by gencpp from file sensor_msgs/LaserScan.msg
// DO NOT EDIT!


#ifndef SENSOR_MSGS_MESSAGE_LASERSCAN_H
#define SENSOR_MSGS_MESSAGE_LASERSCAN_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace sensor_msgs
{
template <class ContainerAllocator>
struct LaserScan_
{
  typedef LaserScan_<ContainerAllocator> Type;

  LaserScan_()
    : header()
    , angle_min(0.0)
    , angle_max(0.0)
    , angle_increment(0.0)
    , time_increment(0.0)
    , scan_time(0.0)
    , range_min(0.0)
    , range_max(0.0)
    , ranges()
    , intensities()  {
    }
  LaserScan_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , angle_min(0.0)
    , angle_max(0.0)
    , angle_increment(0.0)
    , time_increment(0.0)
    , scan_time(0.0)
    , range_min(0.0)
    , range_max(0.0)
    , ranges(_alloc)
    , intensities(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _angle_min_type;
  _angle_min_type angle_min;

   typedef float _angle_max_type;
  _angle_max_type angle_max;

   typedef float _angle_increment_type;
  _angle_increment_type angle_increment;

   typedef float _time_increment_type;
  _time_increment_type time_increment;

   typedef float _scan_time_type;
  _scan_time_type scan_time;

   typedef float _range_min_type;
  _range_min_type range_min;

   typedef float _range_max_type;
  _range_max_type range_max;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _ranges_type;
  _ranges_type ranges;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _intensities_type;
  _intensities_type intensities;





  typedef boost::shared_ptr< ::sensor_msgs::LaserScan_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sensor_msgs::LaserScan_<ContainerAllocator> const> ConstPtr;

}; // struct LaserScan_

typedef ::sensor_msgs::LaserScan_<std::allocator<void> > LaserScan;

typedef boost::shared_ptr< ::sensor_msgs::LaserScan > LaserScanPtr;
typedef boost::shared_ptr< ::sensor_msgs::LaserScan const> LaserScanConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sensor_msgs::LaserScan_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sensor_msgs::LaserScan_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sensor_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['C:/opt/ros/melodic/x64/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['C:/opt/ros/melodic/x64/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['C:/catkin_ws/src/common_msgs/sensor_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sensor_msgs::LaserScan_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sensor_msgs::LaserScan_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor_msgs::LaserScan_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor_msgs::LaserScan_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_msgs::LaserScan_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_msgs::LaserScan_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sensor_msgs::LaserScan_<ContainerAllocator> >
{
  static const char* value()
  {
    return "90c7ef2dc6895d81024acba2ac42f369";
  }

  static const char* value(const ::sensor_msgs::LaserScan_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x90c7ef2dc6895d81ULL;
  static const uint64_t static_value2 = 0x024acba2ac42f369ULL;
};

template<class ContainerAllocator>
struct DataType< ::sensor_msgs::LaserScan_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor_msgs/LaserScan";
  }

  static const char* value(const ::sensor_msgs::LaserScan_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sensor_msgs::LaserScan_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Single scan from a planar laser range-finder\n"
"#\n"
"# If you have another ranging device with different behavior (e.g. a sonar\n"
"# array), please find or create a different message, since applications\n"
"# will make fairly laser-specific assumptions about this data\n"
"\n"
"Header header            # timestamp in the header is the acquisition time of \n"
"                         # the first ray in the scan.\n"
"                         #\n"
"                         # in frame frame_id, angles are measured around \n"
"                         # the positive Z axis (counterclockwise, if Z is up)\n"
"                         # with zero angle being forward along the x axis\n"
"                         \n"
"float32 angle_min        # start angle of the scan [rad]\n"
"float32 angle_max        # end angle of the scan [rad]\n"
"float32 angle_increment  # angular distance between measurements [rad]\n"
"\n"
"float32 time_increment   # time between measurements [seconds] - if your scanner\n"
"                         # is moving, this will be used in interpolating position\n"
"                         # of 3d points\n"
"float32 scan_time        # time between scans [seconds]\n"
"\n"
"float32 range_min        # minimum range value [m]\n"
"float32 range_max        # maximum range value [m]\n"
"\n"
"float32[] ranges         # range data [m] (Note: values < range_min or > range_max should be discarded)\n"
"float32[] intensities    # intensity data [device-specific units].  If your\n"
"                         # device does not provide intensities, please leave\n"
"                         # the array empty.\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::sensor_msgs::LaserScan_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sensor_msgs::LaserScan_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.angle_min);
      stream.next(m.angle_max);
      stream.next(m.angle_increment);
      stream.next(m.time_increment);
      stream.next(m.scan_time);
      stream.next(m.range_min);
      stream.next(m.range_max);
      stream.next(m.ranges);
      stream.next(m.intensities);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LaserScan_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sensor_msgs::LaserScan_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sensor_msgs::LaserScan_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "angle_min: ";
    Printer<float>::stream(s, indent + "  ", v.angle_min);
    s << indent << "angle_max: ";
    Printer<float>::stream(s, indent + "  ", v.angle_max);
    s << indent << "angle_increment: ";
    Printer<float>::stream(s, indent + "  ", v.angle_increment);
    s << indent << "time_increment: ";
    Printer<float>::stream(s, indent + "  ", v.time_increment);
    s << indent << "scan_time: ";
    Printer<float>::stream(s, indent + "  ", v.scan_time);
    s << indent << "range_min: ";
    Printer<float>::stream(s, indent + "  ", v.range_min);
    s << indent << "range_max: ";
    Printer<float>::stream(s, indent + "  ", v.range_max);
    s << indent << "ranges[]" << std::endl;
    for (size_t i = 0; i < v.ranges.size(); ++i)
    {
      s << indent << "  ranges[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.ranges[i]);
    }
    s << indent << "intensities[]" << std::endl;
    for (size_t i = 0; i < v.intensities.size(); ++i)
    {
      s << indent << "  intensities[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.intensities[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SENSOR_MSGS_MESSAGE_LASERSCAN_H
