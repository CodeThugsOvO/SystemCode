// Generated by gencpp from file dfcv_mining_msgs/LiftingEx.msg
// DO NOT EDIT!


#ifndef DFCV_MINING_MSGS_MESSAGE_LIFTINGEX_H
#define DFCV_MINING_MSGS_MESSAGE_LIFTINGEX_H


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
struct LiftingEx_
{
  typedef LiftingEx_<ContainerAllocator> Type;

  LiftingEx_()
    : Lifting_BcmLiftControl(0)
    , Lifting_PowerGetSwitch(0)
    , Lifting_PowerGetEngage(0)
    , Lifting_EPBWorkModeControl(0)
    , Lifting_EPBParkControl(0)
    , Lifting_CANBCM(0)
    , Lifting_CANPTO(0)
    , Lifting_CANEPB(0)
    , Lifting_LiftComplishFlag(0)
    , time_pub(0)
    , time_meas(0)
    , channel_id(0)
    , can_id(0)
    , data()  {
      data.assign(0);
  }
  LiftingEx_(const ContainerAllocator& _alloc)
    : Lifting_BcmLiftControl(0)
    , Lifting_PowerGetSwitch(0)
    , Lifting_PowerGetEngage(0)
    , Lifting_EPBWorkModeControl(0)
    , Lifting_EPBParkControl(0)
    , Lifting_CANBCM(0)
    , Lifting_CANPTO(0)
    , Lifting_CANEPB(0)
    , Lifting_LiftComplishFlag(0)
    , time_pub(0)
    , time_meas(0)
    , channel_id(0)
    , can_id(0)
    , data()  {
  (void)_alloc;
      data.assign(0);
  }



   typedef uint8_t _Lifting_BcmLiftControl_type;
  _Lifting_BcmLiftControl_type Lifting_BcmLiftControl;

   typedef uint8_t _Lifting_PowerGetSwitch_type;
  _Lifting_PowerGetSwitch_type Lifting_PowerGetSwitch;

   typedef uint8_t _Lifting_PowerGetEngage_type;
  _Lifting_PowerGetEngage_type Lifting_PowerGetEngage;

   typedef uint8_t _Lifting_EPBWorkModeControl_type;
  _Lifting_EPBWorkModeControl_type Lifting_EPBWorkModeControl;

   typedef uint8_t _Lifting_EPBParkControl_type;
  _Lifting_EPBParkControl_type Lifting_EPBParkControl;

   typedef uint8_t _Lifting_CANBCM_type;
  _Lifting_CANBCM_type Lifting_CANBCM;

   typedef uint8_t _Lifting_CANPTO_type;
  _Lifting_CANPTO_type Lifting_CANPTO;

   typedef uint8_t _Lifting_CANEPB_type;
  _Lifting_CANEPB_type Lifting_CANEPB;

   typedef uint8_t _Lifting_LiftComplishFlag_type;
  _Lifting_LiftComplishFlag_type Lifting_LiftComplishFlag;

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





  typedef boost::shared_ptr< ::dfcv_mining_msgs::LiftingEx_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dfcv_mining_msgs::LiftingEx_<ContainerAllocator> const> ConstPtr;

}; // struct LiftingEx_

typedef ::dfcv_mining_msgs::LiftingEx_<std::allocator<void> > LiftingEx;

typedef boost::shared_ptr< ::dfcv_mining_msgs::LiftingEx > LiftingExPtr;
typedef boost::shared_ptr< ::dfcv_mining_msgs::LiftingEx const> LiftingExConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dfcv_mining_msgs::LiftingEx_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dfcv_mining_msgs::LiftingEx_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dfcv_mining_msgs::LiftingEx_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dfcv_mining_msgs::LiftingEx_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dfcv_mining_msgs::LiftingEx_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dfcv_mining_msgs::LiftingEx_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dfcv_mining_msgs::LiftingEx_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dfcv_mining_msgs::LiftingEx_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dfcv_mining_msgs::LiftingEx_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fe3e41407cf9bafbfba34f7be319d542";
  }

  static const char* value(const ::dfcv_mining_msgs::LiftingEx_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfe3e41407cf9bafbULL;
  static const uint64_t static_value2 = 0xfba34f7be319d542ULL;
};

template<class ContainerAllocator>
struct DataType< ::dfcv_mining_msgs::LiftingEx_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dfcv_mining_msgs/LiftingEx";
  }

  static const char* value(const ::dfcv_mining_msgs::LiftingEx_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dfcv_mining_msgs::LiftingEx_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 Lifting_BcmLiftControl\n\
uint8 Lifting_PowerGetSwitch\n\
uint8 Lifting_PowerGetEngage\n\
uint8 Lifting_EPBWorkModeControl\n\
uint8 Lifting_EPBParkControl\n\
uint8 Lifting_CANBCM\n\
uint8 Lifting_CANPTO\n\
uint8 Lifting_CANEPB\n\
uint8 Lifting_LiftComplishFlag\n\
int64 time_pub\n\
int64 time_meas\n\
int8 channel_id\n\
int32 can_id\n\
uint8[8] data\n\
";
  }

  static const char* value(const ::dfcv_mining_msgs::LiftingEx_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dfcv_mining_msgs::LiftingEx_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.Lifting_BcmLiftControl);
      stream.next(m.Lifting_PowerGetSwitch);
      stream.next(m.Lifting_PowerGetEngage);
      stream.next(m.Lifting_EPBWorkModeControl);
      stream.next(m.Lifting_EPBParkControl);
      stream.next(m.Lifting_CANBCM);
      stream.next(m.Lifting_CANPTO);
      stream.next(m.Lifting_CANEPB);
      stream.next(m.Lifting_LiftComplishFlag);
      stream.next(m.time_pub);
      stream.next(m.time_meas);
      stream.next(m.channel_id);
      stream.next(m.can_id);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LiftingEx_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dfcv_mining_msgs::LiftingEx_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dfcv_mining_msgs::LiftingEx_<ContainerAllocator>& v)
  {
    s << indent << "Lifting_BcmLiftControl: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Lifting_BcmLiftControl);
    s << indent << "Lifting_PowerGetSwitch: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Lifting_PowerGetSwitch);
    s << indent << "Lifting_PowerGetEngage: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Lifting_PowerGetEngage);
    s << indent << "Lifting_EPBWorkModeControl: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Lifting_EPBWorkModeControl);
    s << indent << "Lifting_EPBParkControl: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Lifting_EPBParkControl);
    s << indent << "Lifting_CANBCM: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Lifting_CANBCM);
    s << indent << "Lifting_CANPTO: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Lifting_CANPTO);
    s << indent << "Lifting_CANEPB: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Lifting_CANEPB);
    s << indent << "Lifting_LiftComplishFlag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Lifting_LiftComplishFlag);
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

#endif // DFCV_MINING_MSGS_MESSAGE_LIFTINGEX_H