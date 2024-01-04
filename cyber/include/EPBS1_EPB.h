// Generated by gencpp from file dfcv_mining_msgs/EPBS1_EPB.msg
// DO NOT EDIT!


#ifndef DFCV_MINING_MSGS_MESSAGE_EPBS1_EPB_H
#define DFCV_MINING_MSGS_MESSAGE_EPBS1_EPB_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dfcv_mining_msgs
{
template <class ContainerAllocator>
struct EPBS1_EPB_
{
  typedef EPBS1_EPB_<ContainerAllocator> Type;

  EPBS1_EPB_()
    : EPB_ParkBraStatus(0)
    , AH_ParkActive(0)
    , AH_BraStatus(0)
    , EPB_WorkMode(0)
    , ChildLockActive(0)
    , LowPreRelParkLimit(0)
    , ResponsePriority(0)
    , IdepedtBraOly(0)
    , PrakBraForcTest(0)
    , DriveHillStatus(0)
    , EPB_BraSwitch(0)
    , ParkBtSwitch(0)
    , RelsBtSwitch(0)
    , AHBtSwitch(0)
    , IdepedtBtSwitch(0)
    , ForcTestBtSwitch(0)
    , SysStatus(0)  {
    }
  EPBS1_EPB_(const ContainerAllocator& _alloc)
    : EPB_ParkBraStatus(0)
    , AH_ParkActive(0)
    , AH_BraStatus(0)
    , EPB_WorkMode(0)
    , ChildLockActive(0)
    , LowPreRelParkLimit(0)
    , ResponsePriority(0)
    , IdepedtBraOly(0)
    , PrakBraForcTest(0)
    , DriveHillStatus(0)
    , EPB_BraSwitch(0)
    , ParkBtSwitch(0)
    , RelsBtSwitch(0)
    , AHBtSwitch(0)
    , IdepedtBtSwitch(0)
    , ForcTestBtSwitch(0)
    , SysStatus(0)  {
  (void)_alloc;
    }



   typedef uint8_t _EPB_ParkBraStatus_type;
  _EPB_ParkBraStatus_type EPB_ParkBraStatus;

   typedef uint8_t _AH_ParkActive_type;
  _AH_ParkActive_type AH_ParkActive;

   typedef uint8_t _AH_BraStatus_type;
  _AH_BraStatus_type AH_BraStatus;

   typedef uint8_t _EPB_WorkMode_type;
  _EPB_WorkMode_type EPB_WorkMode;

   typedef uint8_t _ChildLockActive_type;
  _ChildLockActive_type ChildLockActive;

   typedef uint8_t _LowPreRelParkLimit_type;
  _LowPreRelParkLimit_type LowPreRelParkLimit;

   typedef uint8_t _ResponsePriority_type;
  _ResponsePriority_type ResponsePriority;

   typedef uint8_t _IdepedtBraOly_type;
  _IdepedtBraOly_type IdepedtBraOly;

   typedef uint8_t _PrakBraForcTest_type;
  _PrakBraForcTest_type PrakBraForcTest;

   typedef uint8_t _DriveHillStatus_type;
  _DriveHillStatus_type DriveHillStatus;

   typedef uint8_t _EPB_BraSwitch_type;
  _EPB_BraSwitch_type EPB_BraSwitch;

   typedef uint8_t _ParkBtSwitch_type;
  _ParkBtSwitch_type ParkBtSwitch;

   typedef uint8_t _RelsBtSwitch_type;
  _RelsBtSwitch_type RelsBtSwitch;

   typedef uint8_t _AHBtSwitch_type;
  _AHBtSwitch_type AHBtSwitch;

   typedef uint8_t _IdepedtBtSwitch_type;
  _IdepedtBtSwitch_type IdepedtBtSwitch;

   typedef uint8_t _ForcTestBtSwitch_type;
  _ForcTestBtSwitch_type ForcTestBtSwitch;

   typedef uint8_t _SysStatus_type;
  _SysStatus_type SysStatus;





  typedef boost::shared_ptr< ::dfcv_mining_msgs::EPBS1_EPB_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dfcv_mining_msgs::EPBS1_EPB_<ContainerAllocator> const> ConstPtr;

}; // struct EPBS1_EPB_

typedef ::dfcv_mining_msgs::EPBS1_EPB_<std::allocator<void> > EPBS1_EPB;

typedef boost::shared_ptr< ::dfcv_mining_msgs::EPBS1_EPB > EPBS1_EPBPtr;
typedef boost::shared_ptr< ::dfcv_mining_msgs::EPBS1_EPB const> EPBS1_EPBConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dfcv_mining_msgs::EPBS1_EPB_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dfcv_mining_msgs::EPBS1_EPB_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dfcv_mining_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'dfcv_mining_msgs': ['/home/yz/catkin_ws/src/dfcv_mining_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dfcv_mining_msgs::EPBS1_EPB_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dfcv_mining_msgs::EPBS1_EPB_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dfcv_mining_msgs::EPBS1_EPB_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dfcv_mining_msgs::EPBS1_EPB_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dfcv_mining_msgs::EPBS1_EPB_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dfcv_mining_msgs::EPBS1_EPB_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dfcv_mining_msgs::EPBS1_EPB_<ContainerAllocator> >
{
  static const char* value()
  {
    return "33738eb0ed735a29deada97d45190a70";
  }

  static const char* value(const ::dfcv_mining_msgs::EPBS1_EPB_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x33738eb0ed735a29ULL;
  static const uint64_t static_value2 = 0xdeada97d45190a70ULL;
};

template<class ContainerAllocator>
struct DataType< ::dfcv_mining_msgs::EPBS1_EPB_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dfcv_mining_msgs/EPBS1_EPB";
  }

  static const char* value(const ::dfcv_mining_msgs::EPBS1_EPB_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dfcv_mining_msgs::EPBS1_EPB_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#EPBS1_EPB.msg\n\
\n\
uint8 EPB_ParkBraStatus\n\
uint8 AH_ParkActive\n\
uint8 AH_BraStatus\n\
uint8 EPB_WorkMode\n\
uint8 ChildLockActive\n\
uint8 LowPreRelParkLimit\n\
uint8 ResponsePriority\n\
uint8 IdepedtBraOly\n\
uint8 PrakBraForcTest\n\
uint8 DriveHillStatus\n\
uint8 EPB_BraSwitch\n\
uint8 ParkBtSwitch\n\
uint8 RelsBtSwitch\n\
uint8 AHBtSwitch\n\
uint8 IdepedtBtSwitch\n\
uint8 ForcTestBtSwitch\n\
uint8 SysStatus\n\
";
  }

  static const char* value(const ::dfcv_mining_msgs::EPBS1_EPB_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dfcv_mining_msgs::EPBS1_EPB_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.EPB_ParkBraStatus);
      stream.next(m.AH_ParkActive);
      stream.next(m.AH_BraStatus);
      stream.next(m.EPB_WorkMode);
      stream.next(m.ChildLockActive);
      stream.next(m.LowPreRelParkLimit);
      stream.next(m.ResponsePriority);
      stream.next(m.IdepedtBraOly);
      stream.next(m.PrakBraForcTest);
      stream.next(m.DriveHillStatus);
      stream.next(m.EPB_BraSwitch);
      stream.next(m.ParkBtSwitch);
      stream.next(m.RelsBtSwitch);
      stream.next(m.AHBtSwitch);
      stream.next(m.IdepedtBtSwitch);
      stream.next(m.ForcTestBtSwitch);
      stream.next(m.SysStatus);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EPBS1_EPB_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dfcv_mining_msgs::EPBS1_EPB_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dfcv_mining_msgs::EPBS1_EPB_<ContainerAllocator>& v)
  {
    s << indent << "EPB_ParkBraStatus: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.EPB_ParkBraStatus);
    s << indent << "AH_ParkActive: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.AH_ParkActive);
    s << indent << "AH_BraStatus: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.AH_BraStatus);
    s << indent << "EPB_WorkMode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.EPB_WorkMode);
    s << indent << "ChildLockActive: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ChildLockActive);
    s << indent << "LowPreRelParkLimit: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.LowPreRelParkLimit);
    s << indent << "ResponsePriority: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ResponsePriority);
    s << indent << "IdepedtBraOly: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.IdepedtBraOly);
    s << indent << "PrakBraForcTest: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.PrakBraForcTest);
    s << indent << "DriveHillStatus: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.DriveHillStatus);
    s << indent << "EPB_BraSwitch: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.EPB_BraSwitch);
    s << indent << "ParkBtSwitch: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ParkBtSwitch);
    s << indent << "RelsBtSwitch: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.RelsBtSwitch);
    s << indent << "AHBtSwitch: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.AHBtSwitch);
    s << indent << "IdepedtBtSwitch: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.IdepedtBtSwitch);
    s << indent << "ForcTestBtSwitch: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ForcTestBtSwitch);
    s << indent << "SysStatus: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.SysStatus);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DFCV_MINING_MSGS_MESSAGE_EPBS1_EPB_H
