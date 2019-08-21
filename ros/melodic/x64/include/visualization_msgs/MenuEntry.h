// Generated by gencpp from file visualization_msgs/MenuEntry.msg
// DO NOT EDIT!


#ifndef VISUALIZATION_MSGS_MESSAGE_MENUENTRY_H
#define VISUALIZATION_MSGS_MESSAGE_MENUENTRY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace visualization_msgs
{
template <class ContainerAllocator>
struct MenuEntry_
{
  typedef MenuEntry_<ContainerAllocator> Type;

  MenuEntry_()
    : id(0)
    , parent_id(0)
    , title()
    , command()
    , command_type(0)  {
    }
  MenuEntry_(const ContainerAllocator& _alloc)
    : id(0)
    , parent_id(0)
    , title(_alloc)
    , command(_alloc)
    , command_type(0)  {
  (void)_alloc;
    }



   typedef uint32_t _id_type;
  _id_type id;

   typedef uint32_t _parent_id_type;
  _parent_id_type parent_id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _title_type;
  _title_type title;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _command_type;
  _command_type command;

   typedef uint8_t _command_type_type;
  _command_type_type command_type;



  enum {
    FEEDBACK = 0u,
    ROSRUN = 1u,
    ROSLAUNCH = 2u,
  };


  typedef boost::shared_ptr< ::visualization_msgs::MenuEntry_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::visualization_msgs::MenuEntry_<ContainerAllocator> const> ConstPtr;

}; // struct MenuEntry_

typedef ::visualization_msgs::MenuEntry_<std::allocator<void> > MenuEntry;

typedef boost::shared_ptr< ::visualization_msgs::MenuEntry > MenuEntryPtr;
typedef boost::shared_ptr< ::visualization_msgs::MenuEntry const> MenuEntryConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::visualization_msgs::MenuEntry_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::visualization_msgs::MenuEntry_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace visualization_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['C:/opt/ros/melodic/x64/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['C:/opt/ros/melodic/x64/share/geometry_msgs/cmake/../msg'], 'visualization_msgs': ['C:/catkin_ws/src/common_msgs/visualization_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::visualization_msgs::MenuEntry_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::visualization_msgs::MenuEntry_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::visualization_msgs::MenuEntry_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::visualization_msgs::MenuEntry_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::visualization_msgs::MenuEntry_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::visualization_msgs::MenuEntry_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::visualization_msgs::MenuEntry_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b90ec63024573de83b57aa93eb39be2d";
  }

  static const char* value(const ::visualization_msgs::MenuEntry_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb90ec63024573de8ULL;
  static const uint64_t static_value2 = 0x3b57aa93eb39be2dULL;
};

template<class ContainerAllocator>
struct DataType< ::visualization_msgs::MenuEntry_<ContainerAllocator> >
{
  static const char* value()
  {
    return "visualization_msgs/MenuEntry";
  }

  static const char* value(const ::visualization_msgs::MenuEntry_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::visualization_msgs::MenuEntry_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# MenuEntry message.\n"
"\n"
"# Each InteractiveMarker message has an array of MenuEntry messages.\n"
"# A collection of MenuEntries together describe a\n"
"# menu/submenu/subsubmenu/etc tree, though they are stored in a flat\n"
"# array.  The tree structure is represented by giving each menu entry\n"
"# an ID number and a \"parent_id\" field.  Top-level entries are the\n"
"# ones with parent_id = 0.  Menu entries are ordered within their\n"
"# level the same way they are ordered in the containing array.  Parent\n"
"# entries must appear before their children.\n"
"\n"
"# Example:\n"
"# - id = 3\n"
"#   parent_id = 0\n"
"#   title = \"fun\"\n"
"# - id = 2\n"
"#   parent_id = 0\n"
"#   title = \"robot\"\n"
"# - id = 4\n"
"#   parent_id = 2\n"
"#   title = \"pr2\"\n"
"# - id = 5\n"
"#   parent_id = 2\n"
"#   title = \"turtle\"\n"
"#\n"
"# Gives a menu tree like this:\n"
"#  - fun\n"
"#  - robot\n"
"#    - pr2\n"
"#    - turtle\n"
"\n"
"# ID is a number for each menu entry.  Must be unique within the\n"
"# control, and should never be 0.\n"
"uint32 id\n"
"\n"
"# ID of the parent of this menu entry, if it is a submenu.  If this\n"
"# menu entry is a top-level entry, set parent_id to 0.\n"
"uint32 parent_id\n"
"\n"
"# menu / entry title\n"
"string title\n"
"\n"
"# Arguments to command indicated by command_type (below)\n"
"string command\n"
"\n"
"# Command_type stores the type of response desired when this menu\n"
"# entry is clicked.\n"
"# FEEDBACK: send an InteractiveMarkerFeedback message with menu_entry_id set to this entry's id.\n"
"# ROSRUN: execute \"rosrun\" with arguments given in the command field (above).\n"
"# ROSLAUNCH: execute \"roslaunch\" with arguments given in the command field (above).\n"
"uint8 FEEDBACK=0\n"
"uint8 ROSRUN=1\n"
"uint8 ROSLAUNCH=2\n"
"uint8 command_type\n"
;
  }

  static const char* value(const ::visualization_msgs::MenuEntry_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::visualization_msgs::MenuEntry_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.parent_id);
      stream.next(m.title);
      stream.next(m.command);
      stream.next(m.command_type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MenuEntry_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::visualization_msgs::MenuEntry_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::visualization_msgs::MenuEntry_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.id);
    s << indent << "parent_id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.parent_id);
    s << indent << "title: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.title);
    s << indent << "command: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.command);
    s << indent << "command_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.command_type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VISUALIZATION_MSGS_MESSAGE_MENUENTRY_H
