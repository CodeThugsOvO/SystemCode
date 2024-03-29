// Generated by gencpp from file pub_and_sub/Vechicle_CMD.msg
// DO NOT EDIT!


#ifndef PUB_AND_SUB_MESSAGE_VECHICLE_CMD_H
#define PUB_AND_SUB_MESSAGE_VECHICLE_CMD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace pub_and_sub
{
template <class ContainerAllocator>
struct Vechicle_CMD_
{
  typedef Vechicle_CMD_<ContainerAllocator> Type;

  Vechicle_CMD_()
    : header()
    , PthPln_lTrgLtr(0.0)
    , PthPln_phiTrgAng(0.0)
    , PthPln_kTrgCrv(0.0)
    , SpdPln_vTgtSpd(0.0)
    , SpdPln_aTgtAcc(0.0)
    , BhvCrdn_numBhvID(0)
    , BhvCrdn_CreepMod(0)
    , S(0.0)
    , rounteID(0)
    , BhvCrdn_GearReq(0)  {
    }
  Vechicle_CMD_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , PthPln_lTrgLtr(0.0)
    , PthPln_phiTrgAng(0.0)
    , PthPln_kTrgCrv(0.0)
    , SpdPln_vTgtSpd(0.0)
    , SpdPln_aTgtAcc(0.0)
    , BhvCrdn_numBhvID(0)
    , BhvCrdn_CreepMod(0)
    , S(0.0)
    , rounteID(0)
    , BhvCrdn_GearReq(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _PthPln_lTrgLtr_type;
  _PthPln_lTrgLtr_type PthPln_lTrgLtr;

   typedef float _PthPln_phiTrgAng_type;
  _PthPln_phiTrgAng_type PthPln_phiTrgAng;

   typedef float _PthPln_kTrgCrv_type;
  _PthPln_kTrgCrv_type PthPln_kTrgCrv;

   typedef float _SpdPln_vTgtSpd_type;
  _SpdPln_vTgtSpd_type SpdPln_vTgtSpd;

   typedef float _SpdPln_aTgtAcc_type;
  _SpdPln_aTgtAcc_type SpdPln_aTgtAcc;

   typedef uint8_t _BhvCrdn_numBhvID_type;
  _BhvCrdn_numBhvID_type BhvCrdn_numBhvID;

   typedef uint8_t _BhvCrdn_CreepMod_type;
  _BhvCrdn_CreepMod_type BhvCrdn_CreepMod;

   typedef float _S_type;
  _S_type S;

   typedef uint8_t _rounteID_type;
  _rounteID_type rounteID;

   typedef uint8_t _BhvCrdn_GearReq_type;
  _BhvCrdn_GearReq_type BhvCrdn_GearReq;





  typedef boost::shared_ptr< ::pub_and_sub::Vechicle_CMD_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pub_and_sub::Vechicle_CMD_<ContainerAllocator> const> ConstPtr;

}; // struct Vechicle_CMD_

typedef ::pub_and_sub::Vechicle_CMD_<std::allocator<void> > Vechicle_CMD;

typedef boost::shared_ptr< ::pub_and_sub::Vechicle_CMD > Vechicle_CMDPtr;
typedef boost::shared_ptr< ::pub_and_sub::Vechicle_CMD const> Vechicle_CMDConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pub_and_sub::Vechicle_CMD_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pub_and_sub::Vechicle_CMD_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pub_and_sub

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'pub_and_sub': ['/home/mdc/df_workplace_v1/src/pub_and_sub/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pub_and_sub::Vechicle_CMD_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pub_and_sub::Vechicle_CMD_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pub_and_sub::Vechicle_CMD_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pub_and_sub::Vechicle_CMD_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pub_and_sub::Vechicle_CMD_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pub_and_sub::Vechicle_CMD_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pub_and_sub::Vechicle_CMD_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e77fd03e6a00b162d7614a3715d77e15";
  }

  static const char* value(const ::pub_and_sub::Vechicle_CMD_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe77fd03e6a00b162ULL;
  static const uint64_t static_value2 = 0xd7614a3715d77e15ULL;
};

template<class ContainerAllocator>
struct DataType< ::pub_and_sub::Vechicle_CMD_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pub_and_sub/Vechicle_CMD";
  }

  static const char* value(const ::pub_and_sub::Vechicle_CMD_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pub_and_sub::Vechicle_CMD_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
float32 PthPln_lTrgLtr\n\
float32 PthPln_phiTrgAng\n\
float32 PthPln_kTrgCrv\n\
float32 SpdPln_vTgtSpd\n\
float32 SpdPln_aTgtAcc\n\
uint8 BhvCrdn_numBhvID\n\
uint8 BhvCrdn_CreepMod\n\
float32  S\n\
uint8  rounteID\n\
uint8 BhvCrdn_GearReq\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::pub_and_sub::Vechicle_CMD_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pub_and_sub::Vechicle_CMD_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.PthPln_lTrgLtr);
      stream.next(m.PthPln_phiTrgAng);
      stream.next(m.PthPln_kTrgCrv);
      stream.next(m.SpdPln_vTgtSpd);
      stream.next(m.SpdPln_aTgtAcc);
      stream.next(m.BhvCrdn_numBhvID);
      stream.next(m.BhvCrdn_CreepMod);
      stream.next(m.S);
      stream.next(m.rounteID);
      stream.next(m.BhvCrdn_GearReq);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Vechicle_CMD_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pub_and_sub::Vechicle_CMD_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pub_and_sub::Vechicle_CMD_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "PthPln_lTrgLtr: ";
    Printer<float>::stream(s, indent + "  ", v.PthPln_lTrgLtr);
    s << indent << "PthPln_phiTrgAng: ";
    Printer<float>::stream(s, indent + "  ", v.PthPln_phiTrgAng);
    s << indent << "PthPln_kTrgCrv: ";
    Printer<float>::stream(s, indent + "  ", v.PthPln_kTrgCrv);
    s << indent << "SpdPln_vTgtSpd: ";
    Printer<float>::stream(s, indent + "  ", v.SpdPln_vTgtSpd);
    s << indent << "SpdPln_aTgtAcc: ";
    Printer<float>::stream(s, indent + "  ", v.SpdPln_aTgtAcc);
    s << indent << "BhvCrdn_numBhvID: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.BhvCrdn_numBhvID);
    s << indent << "BhvCrdn_CreepMod: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.BhvCrdn_CreepMod);
    s << indent << "S: ";
    Printer<float>::stream(s, indent + "  ", v.S);
    s << indent << "rounteID: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rounteID);
    s << indent << "BhvCrdn_GearReq: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.BhvCrdn_GearReq);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PUB_AND_SUB_MESSAGE_VECHICLE_CMD_H
