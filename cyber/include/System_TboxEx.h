// Generated by gencpp from file dfcv_mining_msgs/System_TboxEx.msg
// DO NOT EDIT!


#ifndef DFCV_MINING_MSGS_MESSAGE_SYSTEM_TBOXEX_H
#define DFCV_MINING_MSGS_MESSAGE_SYSTEM_TBOXEX_H


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
struct System_TboxEx_
{
  typedef System_TboxEx_<ContainerAllocator> Type;

  System_TboxEx_()
    : Joint_TaskNo(0)
    , Joint_Tasktype(0)
    , Joint_SlowGuide(0)
    , Joint_JointPoint(0)
    , Joint_JointMethod(0)
    , Drop_TaskNo(0)
    , Drop_TaskType(0)
    , Drop_TaskOperation(0)
    , Move_TaskNo(0)
    , Move_TaskType(0)
    , Move_TaskOperation(0)
    , Move_LimitSpeed(0)
    , Move_Start_X(0)
    , Move_Start_Y(0)
    , Move_Start_Z(0)
    , Move_End_X(0)
    , Move_End_Y(0)
    , Move_End_Z(0)
    , Move_PathIdLength(0)
    , Move_PassPathId()  {
    }
  System_TboxEx_(const ContainerAllocator& _alloc)
    : Joint_TaskNo(0)
    , Joint_Tasktype(0)
    , Joint_SlowGuide(0)
    , Joint_JointPoint(0)
    , Joint_JointMethod(0)
    , Drop_TaskNo(0)
    , Drop_TaskType(0)
    , Drop_TaskOperation(0)
    , Move_TaskNo(0)
    , Move_TaskType(0)
    , Move_TaskOperation(0)
    , Move_LimitSpeed(0)
    , Move_Start_X(0)
    , Move_Start_Y(0)
    , Move_Start_Z(0)
    , Move_End_X(0)
    , Move_End_Y(0)
    , Move_End_Z(0)
    , Move_PathIdLength(0)
    , Move_PassPathId(_alloc)  {
  (void)_alloc;
    }



   typedef uint64_t _Joint_TaskNo_type;
  _Joint_TaskNo_type Joint_TaskNo;

   typedef uint8_t _Joint_Tasktype_type;
  _Joint_Tasktype_type Joint_Tasktype;

   typedef uint8_t _Joint_SlowGuide_type;
  _Joint_SlowGuide_type Joint_SlowGuide;

   typedef uint16_t _Joint_JointPoint_type;
  _Joint_JointPoint_type Joint_JointPoint;

   typedef uint8_t _Joint_JointMethod_type;
  _Joint_JointMethod_type Joint_JointMethod;

   typedef uint64_t _Drop_TaskNo_type;
  _Drop_TaskNo_type Drop_TaskNo;

   typedef uint8_t _Drop_TaskType_type;
  _Drop_TaskType_type Drop_TaskType;

   typedef uint8_t _Drop_TaskOperation_type;
  _Drop_TaskOperation_type Drop_TaskOperation;

   typedef uint64_t _Move_TaskNo_type;
  _Move_TaskNo_type Move_TaskNo;

   typedef uint8_t _Move_TaskType_type;
  _Move_TaskType_type Move_TaskType;

   typedef uint8_t _Move_TaskOperation_type;
  _Move_TaskOperation_type Move_TaskOperation;

   typedef uint16_t _Move_LimitSpeed_type;
  _Move_LimitSpeed_type Move_LimitSpeed;

   typedef uint64_t _Move_Start_X_type;
  _Move_Start_X_type Move_Start_X;

   typedef uint64_t _Move_Start_Y_type;
  _Move_Start_Y_type Move_Start_Y;

   typedef uint64_t _Move_Start_Z_type;
  _Move_Start_Z_type Move_Start_Z;

   typedef uint64_t _Move_End_X_type;
  _Move_End_X_type Move_End_X;

   typedef uint64_t _Move_End_Y_type;
  _Move_End_Y_type Move_End_Y;

   typedef uint64_t _Move_End_Z_type;
  _Move_End_Z_type Move_End_Z;

   typedef uint8_t _Move_PathIdLength_type;
  _Move_PathIdLength_type Move_PathIdLength;

   typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _Move_PassPathId_type;
  _Move_PassPathId_type Move_PassPathId;





  typedef boost::shared_ptr< ::dfcv_mining_msgs::System_TboxEx_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dfcv_mining_msgs::System_TboxEx_<ContainerAllocator> const> ConstPtr;

}; // struct System_TboxEx_

typedef ::dfcv_mining_msgs::System_TboxEx_<std::allocator<void> > System_TboxEx;

typedef boost::shared_ptr< ::dfcv_mining_msgs::System_TboxEx > System_TboxExPtr;
typedef boost::shared_ptr< ::dfcv_mining_msgs::System_TboxEx const> System_TboxExConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dfcv_mining_msgs::System_TboxEx_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dfcv_mining_msgs::System_TboxEx_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dfcv_mining_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'dfcv_mining_msgs': ['/home/yz/catkin_ws/src/dfcv_mining_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dfcv_mining_msgs::System_TboxEx_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dfcv_mining_msgs::System_TboxEx_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dfcv_mining_msgs::System_TboxEx_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dfcv_mining_msgs::System_TboxEx_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dfcv_mining_msgs::System_TboxEx_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dfcv_mining_msgs::System_TboxEx_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dfcv_mining_msgs::System_TboxEx_<ContainerAllocator> >
{
  static const char* value()
  {
    return "52ba2f5b86bb0f450685ee03558a0685";
  }

  static const char* value(const ::dfcv_mining_msgs::System_TboxEx_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x52ba2f5b86bb0f45ULL;
  static const uint64_t static_value2 = 0x0685ee03558a0685ULL;
};

template<class ContainerAllocator>
struct DataType< ::dfcv_mining_msgs::System_TboxEx_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dfcv_mining_msgs/System_TboxEx";
  }

  static const char* value(const ::dfcv_mining_msgs::System_TboxEx_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dfcv_mining_msgs::System_TboxEx_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#System_TboxEx.msg\n\
\n\
uint64 Joint_TaskNo\n\
uint8 Joint_Tasktype\n\
uint8 Joint_SlowGuide\n\
uint16 Joint_JointPoint\n\
uint8 Joint_JointMethod\n\
\n\
uint64 Drop_TaskNo\n\
uint8 Drop_TaskType\n\
uint8 Drop_TaskOperation\n\
\n\
uint64 Move_TaskNo\n\
uint8 Move_TaskType\n\
uint8 Move_TaskOperation\n\
uint16 Move_LimitSpeed\n\
uint64 Move_Start_X\n\
uint64 Move_Start_Y\n\
uint64 Move_Start_Z\n\
uint64 Move_End_X\n\
uint64 Move_End_Y\n\
uint64 Move_End_Z\n\
uint8 Move_PathIdLength\n\
uint32[] Move_PassPathId\n\
";
  }

  static const char* value(const ::dfcv_mining_msgs::System_TboxEx_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dfcv_mining_msgs::System_TboxEx_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.Joint_TaskNo);
      stream.next(m.Joint_Tasktype);
      stream.next(m.Joint_SlowGuide);
      stream.next(m.Joint_JointPoint);
      stream.next(m.Joint_JointMethod);
      stream.next(m.Drop_TaskNo);
      stream.next(m.Drop_TaskType);
      stream.next(m.Drop_TaskOperation);
      stream.next(m.Move_TaskNo);
      stream.next(m.Move_TaskType);
      stream.next(m.Move_TaskOperation);
      stream.next(m.Move_LimitSpeed);
      stream.next(m.Move_Start_X);
      stream.next(m.Move_Start_Y);
      stream.next(m.Move_Start_Z);
      stream.next(m.Move_End_X);
      stream.next(m.Move_End_Y);
      stream.next(m.Move_End_Z);
      stream.next(m.Move_PathIdLength);
      stream.next(m.Move_PassPathId);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct System_TboxEx_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dfcv_mining_msgs::System_TboxEx_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dfcv_mining_msgs::System_TboxEx_<ContainerAllocator>& v)
  {
    s << indent << "Joint_TaskNo: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.Joint_TaskNo);
    s << indent << "Joint_Tasktype: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Joint_Tasktype);
    s << indent << "Joint_SlowGuide: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Joint_SlowGuide);
    s << indent << "Joint_JointPoint: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.Joint_JointPoint);
    s << indent << "Joint_JointMethod: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Joint_JointMethod);
    s << indent << "Drop_TaskNo: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.Drop_TaskNo);
    s << indent << "Drop_TaskType: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Drop_TaskType);
    s << indent << "Drop_TaskOperation: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Drop_TaskOperation);
    s << indent << "Move_TaskNo: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.Move_TaskNo);
    s << indent << "Move_TaskType: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Move_TaskType);
    s << indent << "Move_TaskOperation: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Move_TaskOperation);
    s << indent << "Move_LimitSpeed: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.Move_LimitSpeed);
    s << indent << "Move_Start_X: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.Move_Start_X);
    s << indent << "Move_Start_Y: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.Move_Start_Y);
    s << indent << "Move_Start_Z: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.Move_Start_Z);
    s << indent << "Move_End_X: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.Move_End_X);
    s << indent << "Move_End_Y: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.Move_End_Y);
    s << indent << "Move_End_Z: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.Move_End_Z);
    s << indent << "Move_PathIdLength: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Move_PathIdLength);
    s << indent << "Move_PassPathId[]" << std::endl;
    for (size_t i = 0; i < v.Move_PassPathId.size(); ++i)
    {
      s << indent << "  Move_PassPathId[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.Move_PassPathId[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DFCV_MINING_MSGS_MESSAGE_SYSTEM_TBOXEX_H
