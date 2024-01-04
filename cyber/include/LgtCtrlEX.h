// Generated by gencpp from file dfcv_mining_msgs/LgtCtrlEX.msg
// DO NOT EDIT!


#ifndef DFCV_MINING_MSGS_MESSAGE_LGTCTRLEX_H
#define DFCV_MINING_MSGS_MESSAGE_LGTCTRLEX_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace dfcv_mining_msgs
{
template <class ContainerAllocator>
struct LgtCtrlEX_
{
  typedef LgtCtrlEX_<ContainerAllocator> Type;

  LgtCtrlEX_()
    : header()
    , LgtCtrl_CreepComplete(0)
    , LgtCtrl_ControlModeManage(0)
    , LgtCtrl_LiftComplete(0)
    , LgtCtrl_AccelerationCalculate(0.0)
    , time_pub(0)
    , time_meas(0)
    , channel_id(0)
    , can_id(0)
    , data()  {
      data.assign(0);
  }
  LgtCtrlEX_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , LgtCtrl_CreepComplete(0)
    , LgtCtrl_ControlModeManage(0)
    , LgtCtrl_LiftComplete(0)
    , LgtCtrl_AccelerationCalculate(0.0)
    , time_pub(0)
    , time_meas(0)
    , channel_id(0)
    , can_id(0)
    , data()  {
  (void)_alloc;
      data.assign(0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _LgtCtrl_CreepComplete_type;
  _LgtCtrl_CreepComplete_type LgtCtrl_CreepComplete;

   typedef uint8_t _LgtCtrl_ControlModeManage_type;
  _LgtCtrl_ControlModeManage_type LgtCtrl_ControlModeManage;

   typedef uint8_t _LgtCtrl_LiftComplete_type;
  _LgtCtrl_LiftComplete_type LgtCtrl_LiftComplete;

   typedef double _LgtCtrl_AccelerationCalculate_type;
  _LgtCtrl_AccelerationCalculate_type LgtCtrl_AccelerationCalculate;

   typedef int64_t _time_pub_type;
  _time_pub_type time_pub;

   typedef int64_t _time_meas_type;
  _time_meas_type time_meas;

   typedef int8_t _channel_id_type;
  _channel_id_type channel_id;

   typedef int32_t _can_id_type;
  _can_id_type can_id;

   typedef boost::array<uint8_t, 8>  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::dfcv_mining_msgs::LgtCtrlEX_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dfcv_mining_msgs::LgtCtrlEX_<ContainerAllocator> const> ConstPtr;

}; // struct LgtCtrlEX_

typedef ::dfcv_mining_msgs::LgtCtrlEX_<std::allocator<void> > LgtCtrlEX;

typedef boost::shared_ptr< ::dfcv_mining_msgs::LgtCtrlEX > LgtCtrlEXPtr;
typedef boost::shared_ptr< ::dfcv_mining_msgs::LgtCtrlEX const> LgtCtrlEXConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dfcv_mining_msgs::LgtCtrlEX_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dfcv_mining_msgs::LgtCtrlEX_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dfcv_mining_msgs::LgtCtrlEX_<ContainerAllocator1> & lhs, const ::dfcv_mining_msgs::LgtCtrlEX_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.LgtCtrl_CreepComplete == rhs.LgtCtrl_CreepComplete &&
    lhs.LgtCtrl_ControlModeManage == rhs.LgtCtrl_ControlModeManage &&
    lhs.LgtCtrl_LiftComplete == rhs.LgtCtrl_LiftComplete &&
    lhs.LgtCtrl_AccelerationCalculate == rhs.LgtCtrl_AccelerationCalculate &&
    lhs.time_pub == rhs.time_pub &&
    lhs.time_meas == rhs.time_meas &&
    lhs.channel_id == rhs.channel_id &&
    lhs.can_id == rhs.can_id &&
    lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dfcv_mining_msgs::LgtCtrlEX_<ContainerAllocator1> & lhs, const ::dfcv_mining_msgs::LgtCtrlEX_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dfcv_mining_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dfcv_mining_msgs::LgtCtrlEX_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dfcv_mining_msgs::LgtCtrlEX_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dfcv_mining_msgs::LgtCtrlEX_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dfcv_mining_msgs::LgtCtrlEX_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dfcv_mining_msgs::LgtCtrlEX_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dfcv_mining_msgs::LgtCtrlEX_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dfcv_mining_msgs::LgtCtrlEX_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6e4e920b975a2671f4fc494c1c523e6a";
  }

  static const char* value(const ::dfcv_mining_msgs::LgtCtrlEX_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6e4e920b975a2671ULL;
  static const uint64_t static_value2 = 0xf4fc494c1c523e6aULL;
};

template<class ContainerAllocator>
struct DataType< ::dfcv_mining_msgs::LgtCtrlEX_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dfcv_mining_msgs/LgtCtrlEX";
  }

  static const char* value(const ::dfcv_mining_msgs::LgtCtrlEX_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dfcv_mining_msgs::LgtCtrlEX_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"uint8 LgtCtrl_CreepComplete\n"
"uint8 LgtCtrl_ControlModeManage\n"
"uint8 LgtCtrl_LiftComplete\n"
"float64 LgtCtrl_AccelerationCalculate\n"
"\n"
"\n"
"int64 time_pub\n"
"int64 time_meas\n"
"int8 channel_id\n"
"int32 can_id\n"
"uint8[8] data\n"
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

  static const char* value(const ::dfcv_mining_msgs::LgtCtrlEX_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dfcv_mining_msgs::LgtCtrlEX_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.LgtCtrl_CreepComplete);
      stream.next(m.LgtCtrl_ControlModeManage);
      stream.next(m.LgtCtrl_LiftComplete);
      stream.next(m.LgtCtrl_AccelerationCalculate);
      stream.next(m.time_pub);
      stream.next(m.time_meas);
      stream.next(m.channel_id);
      stream.next(m.can_id);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LgtCtrlEX_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dfcv_mining_msgs::LgtCtrlEX_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dfcv_mining_msgs::LgtCtrlEX_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "LgtCtrl_CreepComplete: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.LgtCtrl_CreepComplete);
    s << indent << "LgtCtrl_ControlModeManage: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.LgtCtrl_ControlModeManage);
    s << indent << "LgtCtrl_LiftComplete: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.LgtCtrl_LiftComplete);
    s << indent << "LgtCtrl_AccelerationCalculate: ";
    Printer<double>::stream(s, indent + "  ", v.LgtCtrl_AccelerationCalculate);
    s << indent << "time_pub: ";
    Printer<int64_t>::stream(s, indent + "  ", v.time_pub);
    s << indent << "time_meas: ";
    Printer<int64_t>::stream(s, indent + "  ", v.time_meas);
    s << indent << "channel_id: ";
    Printer<int8_t>::stream(s, indent + "  ", v.channel_id);
    s << indent << "can_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.can_id);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DFCV_MINING_MSGS_MESSAGE_LGTCTRLEX_H
