// Generated by gencpp from file df_msgs/TBOXDROP.msg
// DO NOT EDIT!


#ifndef DF_MSGS_MESSAGE_TBOXDROP_H
#define DF_MSGS_MESSAGE_TBOXDROP_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace df_msgs
{
template <class ContainerAllocator>
struct TBOXDROP_
{
  typedef TBOXDROP_<ContainerAllocator> Type;

  TBOXDROP_()
    : questnum(0)
    , questtype(0)
    , questoperation(0)  {
    }
  TBOXDROP_(const ContainerAllocator& _alloc)
    : questnum(0)
    , questtype(0)
    , questoperation(0)  {
  (void)_alloc;
    }



   typedef uint64_t _questnum_type;
  _questnum_type questnum;

   typedef uint8_t _questtype_type;
  _questtype_type questtype;

   typedef uint8_t _questoperation_type;
  _questoperation_type questoperation;





  typedef boost::shared_ptr< ::df_msgs::TBOXDROP_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::df_msgs::TBOXDROP_<ContainerAllocator> const> ConstPtr;

}; // struct TBOXDROP_

typedef ::df_msgs::TBOXDROP_<std::allocator<void> > TBOXDROP;

typedef boost::shared_ptr< ::df_msgs::TBOXDROP > TBOXDROPPtr;
typedef boost::shared_ptr< ::df_msgs::TBOXDROP const> TBOXDROPConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::df_msgs::TBOXDROP_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::df_msgs::TBOXDROP_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace df_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'df_msgs': ['/home/yangchun/catkin_ws/catkin_ws/src/ROS-Academy-for-Beginners/df_msgs/msg', '/home/yangchun/catkin_ws/catkin_ws/devel/share/df_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::df_msgs::TBOXDROP_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::df_msgs::TBOXDROP_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::df_msgs::TBOXDROP_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::df_msgs::TBOXDROP_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::df_msgs::TBOXDROP_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::df_msgs::TBOXDROP_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::df_msgs::TBOXDROP_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ad54ef0886dc01e048263559281fa10b";
  }

  static const char* value(const ::df_msgs::TBOXDROP_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xad54ef0886dc01e0ULL;
  static const uint64_t static_value2 = 0x48263559281fa10bULL;
};

template<class ContainerAllocator>
struct DataType< ::df_msgs::TBOXDROP_<ContainerAllocator> >
{
  static const char* value()
  {
    return "df_msgs/TBOXDROP";
  }

  static const char* value(const ::df_msgs::TBOXDROP_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::df_msgs::TBOXDROP_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#TBOXDROP.msg\n\
\n\
uint64 questnum\n\
uint8 questtype\n\
uint8 questoperation\n\
";
  }

  static const char* value(const ::df_msgs::TBOXDROP_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::df_msgs::TBOXDROP_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.questnum);
      stream.next(m.questtype);
      stream.next(m.questoperation);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TBOXDROP_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::df_msgs::TBOXDROP_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::df_msgs::TBOXDROP_<ContainerAllocator>& v)
  {
    s << indent << "questnum: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.questnum);
    s << indent << "questtype: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.questtype);
    s << indent << "questoperation: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.questoperation);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DF_MSGS_MESSAGE_TBOXDROP_H