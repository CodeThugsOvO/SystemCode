// Generated by gencpp from file dfcv_mining_msgs/CAN_TO_CTRL_EPS.msg
// DO NOT EDIT!


#ifndef DFCV_MINING_MSGS_MESSAGE_CAN_TO_CTRL_EPS_H
#define DFCV_MINING_MSGS_MESSAGE_CAN_TO_CTRL_EPS_H


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
struct CAN_TO_CTRL_EPS_
{
  typedef CAN_TO_CTRL_EPS_<ContainerAllocator> Type;

  CAN_TO_CTRL_EPS_()
    : DE_phiSteerAngle(0.0)
    , DE_phiSteerSpd(0.0)
    , DE_SteerToruqe(0.0)
    , DE_HandTorque(0.0)
    , DE_EpsMode(0.0)
    , DE_EpsERRCode(0.0)  {
    }
  CAN_TO_CTRL_EPS_(const ContainerAllocator& _alloc)
    : DE_phiSteerAngle(0.0)
    , DE_phiSteerSpd(0.0)
    , DE_SteerToruqe(0.0)
    , DE_HandTorque(0.0)
    , DE_EpsMode(0.0)
    , DE_EpsERRCode(0.0)  {
  (void)_alloc;
    }



   typedef float _DE_phiSteerAngle_type;
  _DE_phiSteerAngle_type DE_phiSteerAngle;

   typedef float _DE_phiSteerSpd_type;
  _DE_phiSteerSpd_type DE_phiSteerSpd;

   typedef float _DE_SteerToruqe_type;
  _DE_SteerToruqe_type DE_SteerToruqe;

   typedef float _DE_HandTorque_type;
  _DE_HandTorque_type DE_HandTorque;

   typedef float _DE_EpsMode_type;
  _DE_EpsMode_type DE_EpsMode;

   typedef float _DE_EpsERRCode_type;
  _DE_EpsERRCode_type DE_EpsERRCode;





  typedef boost::shared_ptr< ::dfcv_mining_msgs::CAN_TO_CTRL_EPS_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dfcv_mining_msgs::CAN_TO_CTRL_EPS_<ContainerAllocator> const> ConstPtr;

}; // struct CAN_TO_CTRL_EPS_

typedef ::dfcv_mining_msgs::CAN_TO_CTRL_EPS_<std::allocator<void> > CAN_TO_CTRL_EPS;

typedef boost::shared_ptr< ::dfcv_mining_msgs::CAN_TO_CTRL_EPS > CAN_TO_CTRL_EPSPtr;
typedef boost::shared_ptr< ::dfcv_mining_msgs::CAN_TO_CTRL_EPS const> CAN_TO_CTRL_EPSConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dfcv_mining_msgs::CAN_TO_CTRL_EPS_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dfcv_mining_msgs::CAN_TO_CTRL_EPS_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dfcv_mining_msgs::CAN_TO_CTRL_EPS_<ContainerAllocator1> & lhs, const ::dfcv_mining_msgs::CAN_TO_CTRL_EPS_<ContainerAllocator2> & rhs)
{
  return lhs.DE_phiSteerAngle == rhs.DE_phiSteerAngle &&
    lhs.DE_phiSteerSpd == rhs.DE_phiSteerSpd &&
    lhs.DE_SteerToruqe == rhs.DE_SteerToruqe &&
    lhs.DE_HandTorque == rhs.DE_HandTorque &&
    lhs.DE_EpsMode == rhs.DE_EpsMode &&
    lhs.DE_EpsERRCode == rhs.DE_EpsERRCode;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dfcv_mining_msgs::CAN_TO_CTRL_EPS_<ContainerAllocator1> & lhs, const ::dfcv_mining_msgs::CAN_TO_CTRL_EPS_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dfcv_mining_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dfcv_mining_msgs::CAN_TO_CTRL_EPS_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dfcv_mining_msgs::CAN_TO_CTRL_EPS_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dfcv_mining_msgs::CAN_TO_CTRL_EPS_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dfcv_mining_msgs::CAN_TO_CTRL_EPS_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dfcv_mining_msgs::CAN_TO_CTRL_EPS_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dfcv_mining_msgs::CAN_TO_CTRL_EPS_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dfcv_mining_msgs::CAN_TO_CTRL_EPS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4750aa10ae0ab02ece9fcef3f9f8c1f9";
  }

  static const char* value(const ::dfcv_mining_msgs::CAN_TO_CTRL_EPS_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4750aa10ae0ab02eULL;
  static const uint64_t static_value2 = 0xce9fcef3f9f8c1f9ULL;
};

template<class ContainerAllocator>
struct DataType< ::dfcv_mining_msgs::CAN_TO_CTRL_EPS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dfcv_mining_msgs/CAN_TO_CTRL_EPS";
  }

  static const char* value(const ::dfcv_mining_msgs::CAN_TO_CTRL_EPS_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dfcv_mining_msgs::CAN_TO_CTRL_EPS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 DE_phiSteerAngle        #/* '<Root>/DE_phiSteerAngle' */\n"
"float32 DE_phiSteerSpd\n"
"float32 DE_SteerToruqe\n"
"float32 DE_HandTorque\n"
"float32 DE_EpsMode\n"
"float32 DE_EpsERRCode\n"
;
  }

  static const char* value(const ::dfcv_mining_msgs::CAN_TO_CTRL_EPS_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dfcv_mining_msgs::CAN_TO_CTRL_EPS_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.DE_phiSteerAngle);
      stream.next(m.DE_phiSteerSpd);
      stream.next(m.DE_SteerToruqe);
      stream.next(m.DE_HandTorque);
      stream.next(m.DE_EpsMode);
      stream.next(m.DE_EpsERRCode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CAN_TO_CTRL_EPS_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dfcv_mining_msgs::CAN_TO_CTRL_EPS_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dfcv_mining_msgs::CAN_TO_CTRL_EPS_<ContainerAllocator>& v)
  {
    s << indent << "DE_phiSteerAngle: ";
    Printer<float>::stream(s, indent + "  ", v.DE_phiSteerAngle);
    s << indent << "DE_phiSteerSpd: ";
    Printer<float>::stream(s, indent + "  ", v.DE_phiSteerSpd);
    s << indent << "DE_SteerToruqe: ";
    Printer<float>::stream(s, indent + "  ", v.DE_SteerToruqe);
    s << indent << "DE_HandTorque: ";
    Printer<float>::stream(s, indent + "  ", v.DE_HandTorque);
    s << indent << "DE_EpsMode: ";
    Printer<float>::stream(s, indent + "  ", v.DE_EpsMode);
    s << indent << "DE_EpsERRCode: ";
    Printer<float>::stream(s, indent + "  ", v.DE_EpsERRCode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DFCV_MINING_MSGS_MESSAGE_CAN_TO_CTRL_EPS_H