// Generated by gencpp from file control_msgs/FollowJointTrajectoryGoal.msg
// DO NOT EDIT!


#ifndef CONTROL_MSGS_MESSAGE_FOLLOWJOINTTRAJECTORYGOAL_H
#define CONTROL_MSGS_MESSAGE_FOLLOWJOINTTRAJECTORYGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <trajectory_msgs/JointTrajectory.h>
#include <control_msgs/JointTolerance.h>
#include <control_msgs/JointTolerance.h>

namespace control_msgs
{
template <class ContainerAllocator>
struct FollowJointTrajectoryGoal_
{
  typedef FollowJointTrajectoryGoal_<ContainerAllocator> Type;

  FollowJointTrajectoryGoal_()
    : trajectory()
    , path_tolerance()
    , goal_tolerance()
    , goal_time_tolerance()  {
    }
  FollowJointTrajectoryGoal_(const ContainerAllocator& _alloc)
    : trajectory(_alloc)
    , path_tolerance(_alloc)
    , goal_tolerance(_alloc)
    , goal_time_tolerance()  {
  (void)_alloc;
    }



   typedef  ::trajectory_msgs::JointTrajectory_<ContainerAllocator>  _trajectory_type;
  _trajectory_type trajectory;

   typedef std::vector< ::control_msgs::JointTolerance_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::control_msgs::JointTolerance_<ContainerAllocator> >::other >  _path_tolerance_type;
  _path_tolerance_type path_tolerance;

   typedef std::vector< ::control_msgs::JointTolerance_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::control_msgs::JointTolerance_<ContainerAllocator> >::other >  _goal_tolerance_type;
  _goal_tolerance_type goal_tolerance;

   typedef ros::Duration _goal_time_tolerance_type;
  _goal_time_tolerance_type goal_time_tolerance;





  typedef boost::shared_ptr< ::control_msgs::FollowJointTrajectoryGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::control_msgs::FollowJointTrajectoryGoal_<ContainerAllocator> const> ConstPtr;

}; // struct FollowJointTrajectoryGoal_

typedef ::control_msgs::FollowJointTrajectoryGoal_<std::allocator<void> > FollowJointTrajectoryGoal;

typedef boost::shared_ptr< ::control_msgs::FollowJointTrajectoryGoal > FollowJointTrajectoryGoalPtr;
typedef boost::shared_ptr< ::control_msgs::FollowJointTrajectoryGoal const> FollowJointTrajectoryGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::control_msgs::FollowJointTrajectoryGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::control_msgs::FollowJointTrajectoryGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['C:/opt/ros/melodic/x64/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['C:/opt/ros/melodic/x64/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['C:/opt/ros/melodic/x64/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['C:/opt/ros/melodic/x64/share/trajectory_msgs/cmake/../msg'], 'control_msgs': ['C:/catkin_ws/devel_isolated/control_msgs/share/control_msgs/msg', 'C:/catkin_ws/src/control_msgs/control_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::control_msgs::FollowJointTrajectoryGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::control_msgs::FollowJointTrajectoryGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_msgs::FollowJointTrajectoryGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_msgs::FollowJointTrajectoryGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::FollowJointTrajectoryGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::FollowJointTrajectoryGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::control_msgs::FollowJointTrajectoryGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "69636787b6ecbde4d61d711979bc7ecb";
  }

  static const char* value(const ::control_msgs::FollowJointTrajectoryGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x69636787b6ecbde4ULL;
  static const uint64_t static_value2 = 0xd61d711979bc7ecbULL;
};

template<class ContainerAllocator>
struct DataType< ::control_msgs::FollowJointTrajectoryGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "control_msgs/FollowJointTrajectoryGoal";
  }

  static const char* value(const ::control_msgs::FollowJointTrajectoryGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::control_msgs::FollowJointTrajectoryGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# The joint trajectory to follow\n"
"trajectory_msgs/JointTrajectory trajectory\n"
"\n"
"# Tolerances for the trajectory.  If the measured joint values fall\n"
"# outside the tolerances the trajectory goal is aborted.  Any\n"
"# tolerances that are not specified (by being omitted or set to 0) are\n"
"# set to the defaults for the action server (often taken from the\n"
"# parameter server).\n"
"\n"
"# Tolerances applied to the joints as the trajectory is executed.  If\n"
"# violated, the goal aborts with error_code set to\n"
"# PATH_TOLERANCE_VIOLATED.\n"
"JointTolerance[] path_tolerance\n"
"\n"
"# To report success, the joints must be within goal_tolerance of the\n"
"# final trajectory value.  The goal must be achieved by time the\n"
"# trajectory ends plus goal_time_tolerance.  (goal_time_tolerance\n"
"# allows some leeway in time, so that the trajectory goal can still\n"
"# succeed even if the joints reach the goal some time after the\n"
"# precise end time of the trajectory).\n"
"#\n"
"# If the joints are not within goal_tolerance after \"trajectory finish\n"
"# time\" + goal_time_tolerance, the goal aborts with error_code set to\n"
"# GOAL_TOLERANCE_VIOLATED\n"
"JointTolerance[] goal_tolerance\n"
"duration goal_time_tolerance\n"
"\n"
"\n"
"================================================================================\n"
"MSG: trajectory_msgs/JointTrajectory\n"
"Header header\n"
"string[] joint_names\n"
"JointTrajectoryPoint[] points\n"
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
"\n"
"================================================================================\n"
"MSG: trajectory_msgs/JointTrajectoryPoint\n"
"# Each trajectory point specifies either positions[, velocities[, accelerations]]\n"
"# or positions[, effort] for the trajectory to be executed.\n"
"# All specified values are in the same order as the joint names in JointTrajectory.msg\n"
"\n"
"float64[] positions\n"
"float64[] velocities\n"
"float64[] accelerations\n"
"float64[] effort\n"
"duration time_from_start\n"
"\n"
"================================================================================\n"
"MSG: control_msgs/JointTolerance\n"
"# The tolerances specify the amount the position, velocity, and\n"
"# accelerations can vary from the setpoints.  For example, in the case\n"
"# of trajectory control, when the actual position varies beyond\n"
"# (desired position + position tolerance), the trajectory goal may\n"
"# abort.\n"
"# \n"
"# There are two special values for tolerances:\n"
"#  * 0 - The tolerance is unspecified and will remain at whatever the default is\n"
"#  * -1 - The tolerance is \"erased\".  If there was a default, the joint will be\n"
"#         allowed to move without restriction.\n"
"\n"
"string name\n"
"float64 position  # in radians or meters (for a revolute or prismatic joint, respectively)\n"
"float64 velocity  # in rad/sec or m/sec\n"
"float64 acceleration  # in rad/sec^2 or m/sec^2\n"
;
  }

  static const char* value(const ::control_msgs::FollowJointTrajectoryGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::control_msgs::FollowJointTrajectoryGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.trajectory);
      stream.next(m.path_tolerance);
      stream.next(m.goal_tolerance);
      stream.next(m.goal_time_tolerance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FollowJointTrajectoryGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::control_msgs::FollowJointTrajectoryGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::control_msgs::FollowJointTrajectoryGoal_<ContainerAllocator>& v)
  {
    s << indent << "trajectory: ";
    s << std::endl;
    Printer< ::trajectory_msgs::JointTrajectory_<ContainerAllocator> >::stream(s, indent + "  ", v.trajectory);
    s << indent << "path_tolerance[]" << std::endl;
    for (size_t i = 0; i < v.path_tolerance.size(); ++i)
    {
      s << indent << "  path_tolerance[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::control_msgs::JointTolerance_<ContainerAllocator> >::stream(s, indent + "    ", v.path_tolerance[i]);
    }
    s << indent << "goal_tolerance[]" << std::endl;
    for (size_t i = 0; i < v.goal_tolerance.size(); ++i)
    {
      s << indent << "  goal_tolerance[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::control_msgs::JointTolerance_<ContainerAllocator> >::stream(s, indent + "    ", v.goal_tolerance[i]);
    }
    s << indent << "goal_time_tolerance: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.goal_time_tolerance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CONTROL_MSGS_MESSAGE_FOLLOWJOINTTRAJECTORYGOAL_H
