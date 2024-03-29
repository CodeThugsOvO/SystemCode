// Generated by gencpp from file dfcv_mining_msgs/LocationIMUCp.msg
// DO NOT EDIT!


#ifndef DFCV_MINING_MSGS_MESSAGE_LOCATIONIMUCP_H
#define DFCV_MINING_MSGS_MESSAGE_LOCATIONIMUCP_H


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
struct LocationIMUCp_
{
  typedef LocationIMUCp_<ContainerAllocator> Type;

  LocationIMUCp_()
    : header()
    , Error_Code(0)
    , SampleTime(0)
    , GroupCounter(0)
    , have_gnss_time_pulse(0)
    , filter_mode(0)
    , clip_mag_z(0)
    , retransmitted(0)
    , clipping_detected(0)
    , interpolated(0)
    , sync_in(0)
    , sync_out(0)
    , clip_acc_x(0)
    , clip_acc_y(0)
    , clip_acc_z(0)
    , clip_gyr_x(0)
    , clip_gyr_y(0)
    , clip_gyr_z(0)
    , clip_mag_x(0)
    , clip_mag_y(0)
    , self_test_ok(0)
    , orientation_valid(0)
    , gps_valid(0)
    , no_rotation(0)
    , representative_motion(0)
    , external_clock_synced(0)
    , Q0(0.0)
    , Q1(0.0)
    , Q2(0.0)
    , Q3(0.0)
    , Roll(0.0)
    , Pitch(0.0)
    , Yaw(0.0)
    , DeltaVx(0.0)
    , DeltaVy(0.0)
    , DeltaVz(0.0)
    , Exponent(0)
    , gyrX(0.0)
    , gyrY(0.0)
    , gyrZ(0.0)
    , DeltaQ0(0.0)
    , DeltaQ1(0.0)
    , DeltaQ2(0.0)
    , DeltaQ3(0.0)
    , accX(0.0)
    , accY(0.0)
    , accZ(0.0)
    , freeAccX(0.0)
    , freeAccY(0.0)
    , freeAccZ(0.0)  {
    }
  LocationIMUCp_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , Error_Code(0)
    , SampleTime(0)
    , GroupCounter(0)
    , have_gnss_time_pulse(0)
    , filter_mode(0)
    , clip_mag_z(0)
    , retransmitted(0)
    , clipping_detected(0)
    , interpolated(0)
    , sync_in(0)
    , sync_out(0)
    , clip_acc_x(0)
    , clip_acc_y(0)
    , clip_acc_z(0)
    , clip_gyr_x(0)
    , clip_gyr_y(0)
    , clip_gyr_z(0)
    , clip_mag_x(0)
    , clip_mag_y(0)
    , self_test_ok(0)
    , orientation_valid(0)
    , gps_valid(0)
    , no_rotation(0)
    , representative_motion(0)
    , external_clock_synced(0)
    , Q0(0.0)
    , Q1(0.0)
    , Q2(0.0)
    , Q3(0.0)
    , Roll(0.0)
    , Pitch(0.0)
    , Yaw(0.0)
    , DeltaVx(0.0)
    , DeltaVy(0.0)
    , DeltaVz(0.0)
    , Exponent(0)
    , gyrX(0.0)
    , gyrY(0.0)
    , gyrZ(0.0)
    , DeltaQ0(0.0)
    , DeltaQ1(0.0)
    , DeltaQ2(0.0)
    , DeltaQ3(0.0)
    , accX(0.0)
    , accY(0.0)
    , accZ(0.0)
    , freeAccX(0.0)
    , freeAccY(0.0)
    , freeAccZ(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _Error_Code_type;
  _Error_Code_type Error_Code;

   typedef uint32_t _SampleTime_type;
  _SampleTime_type SampleTime;

   typedef uint16_t _GroupCounter_type;
  _GroupCounter_type GroupCounter;

   typedef uint8_t _have_gnss_time_pulse_type;
  _have_gnss_time_pulse_type have_gnss_time_pulse;

   typedef uint8_t _filter_mode_type;
  _filter_mode_type filter_mode;

   typedef uint8_t _clip_mag_z_type;
  _clip_mag_z_type clip_mag_z;

   typedef uint8_t _retransmitted_type;
  _retransmitted_type retransmitted;

   typedef uint8_t _clipping_detected_type;
  _clipping_detected_type clipping_detected;

   typedef uint8_t _interpolated_type;
  _interpolated_type interpolated;

   typedef uint8_t _sync_in_type;
  _sync_in_type sync_in;

   typedef uint8_t _sync_out_type;
  _sync_out_type sync_out;

   typedef uint8_t _clip_acc_x_type;
  _clip_acc_x_type clip_acc_x;

   typedef uint8_t _clip_acc_y_type;
  _clip_acc_y_type clip_acc_y;

   typedef uint8_t _clip_acc_z_type;
  _clip_acc_z_type clip_acc_z;

   typedef uint8_t _clip_gyr_x_type;
  _clip_gyr_x_type clip_gyr_x;

   typedef uint8_t _clip_gyr_y_type;
  _clip_gyr_y_type clip_gyr_y;

   typedef uint8_t _clip_gyr_z_type;
  _clip_gyr_z_type clip_gyr_z;

   typedef uint8_t _clip_mag_x_type;
  _clip_mag_x_type clip_mag_x;

   typedef uint8_t _clip_mag_y_type;
  _clip_mag_y_type clip_mag_y;

   typedef uint8_t _self_test_ok_type;
  _self_test_ok_type self_test_ok;

   typedef uint8_t _orientation_valid_type;
  _orientation_valid_type orientation_valid;

   typedef uint8_t _gps_valid_type;
  _gps_valid_type gps_valid;

   typedef uint8_t _no_rotation_type;
  _no_rotation_type no_rotation;

   typedef uint8_t _representative_motion_type;
  _representative_motion_type representative_motion;

   typedef uint8_t _external_clock_synced_type;
  _external_clock_synced_type external_clock_synced;

   typedef double _Q0_type;
  _Q0_type Q0;

   typedef double _Q1_type;
  _Q1_type Q1;

   typedef double _Q2_type;
  _Q2_type Q2;

   typedef double _Q3_type;
  _Q3_type Q3;

   typedef double _Roll_type;
  _Roll_type Roll;

   typedef double _Pitch_type;
  _Pitch_type Pitch;

   typedef double _Yaw_type;
  _Yaw_type Yaw;

   typedef double _DeltaVx_type;
  _DeltaVx_type DeltaVx;

   typedef double _DeltaVy_type;
  _DeltaVy_type DeltaVy;

   typedef double _DeltaVz_type;
  _DeltaVz_type DeltaVz;

   typedef uint8_t _Exponent_type;
  _Exponent_type Exponent;

   typedef double _gyrX_type;
  _gyrX_type gyrX;

   typedef double _gyrY_type;
  _gyrY_type gyrY;

   typedef double _gyrZ_type;
  _gyrZ_type gyrZ;

   typedef double _DeltaQ0_type;
  _DeltaQ0_type DeltaQ0;

   typedef double _DeltaQ1_type;
  _DeltaQ1_type DeltaQ1;

   typedef double _DeltaQ2_type;
  _DeltaQ2_type DeltaQ2;

   typedef double _DeltaQ3_type;
  _DeltaQ3_type DeltaQ3;

   typedef double _accX_type;
  _accX_type accX;

   typedef double _accY_type;
  _accY_type accY;

   typedef double _accZ_type;
  _accZ_type accZ;

   typedef double _freeAccX_type;
  _freeAccX_type freeAccX;

   typedef double _freeAccY_type;
  _freeAccY_type freeAccY;

   typedef double _freeAccZ_type;
  _freeAccZ_type freeAccZ;





  typedef boost::shared_ptr< ::dfcv_mining_msgs::LocationIMUCp_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dfcv_mining_msgs::LocationIMUCp_<ContainerAllocator> const> ConstPtr;

}; // struct LocationIMUCp_

typedef ::dfcv_mining_msgs::LocationIMUCp_<std::allocator<void> > LocationIMUCp;

typedef boost::shared_ptr< ::dfcv_mining_msgs::LocationIMUCp > LocationIMUCpPtr;
typedef boost::shared_ptr< ::dfcv_mining_msgs::LocationIMUCp const> LocationIMUCpConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dfcv_mining_msgs::LocationIMUCp_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dfcv_mining_msgs::LocationIMUCp_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dfcv_mining_msgs::LocationIMUCp_<ContainerAllocator1> & lhs, const ::dfcv_mining_msgs::LocationIMUCp_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.Error_Code == rhs.Error_Code &&
    lhs.SampleTime == rhs.SampleTime &&
    lhs.GroupCounter == rhs.GroupCounter &&
    lhs.have_gnss_time_pulse == rhs.have_gnss_time_pulse &&
    lhs.filter_mode == rhs.filter_mode &&
    lhs.clip_mag_z == rhs.clip_mag_z &&
    lhs.retransmitted == rhs.retransmitted &&
    lhs.clipping_detected == rhs.clipping_detected &&
    lhs.interpolated == rhs.interpolated &&
    lhs.sync_in == rhs.sync_in &&
    lhs.sync_out == rhs.sync_out &&
    lhs.clip_acc_x == rhs.clip_acc_x &&
    lhs.clip_acc_y == rhs.clip_acc_y &&
    lhs.clip_acc_z == rhs.clip_acc_z &&
    lhs.clip_gyr_x == rhs.clip_gyr_x &&
    lhs.clip_gyr_y == rhs.clip_gyr_y &&
    lhs.clip_gyr_z == rhs.clip_gyr_z &&
    lhs.clip_mag_x == rhs.clip_mag_x &&
    lhs.clip_mag_y == rhs.clip_mag_y &&
    lhs.self_test_ok == rhs.self_test_ok &&
    lhs.orientation_valid == rhs.orientation_valid &&
    lhs.gps_valid == rhs.gps_valid &&
    lhs.no_rotation == rhs.no_rotation &&
    lhs.representative_motion == rhs.representative_motion &&
    lhs.external_clock_synced == rhs.external_clock_synced &&
    lhs.Q0 == rhs.Q0 &&
    lhs.Q1 == rhs.Q1 &&
    lhs.Q2 == rhs.Q2 &&
    lhs.Q3 == rhs.Q3 &&
    lhs.Roll == rhs.Roll &&
    lhs.Pitch == rhs.Pitch &&
    lhs.Yaw == rhs.Yaw &&
    lhs.DeltaVx == rhs.DeltaVx &&
    lhs.DeltaVy == rhs.DeltaVy &&
    lhs.DeltaVz == rhs.DeltaVz &&
    lhs.Exponent == rhs.Exponent &&
    lhs.gyrX == rhs.gyrX &&
    lhs.gyrY == rhs.gyrY &&
    lhs.gyrZ == rhs.gyrZ &&
    lhs.DeltaQ0 == rhs.DeltaQ0 &&
    lhs.DeltaQ1 == rhs.DeltaQ1 &&
    lhs.DeltaQ2 == rhs.DeltaQ2 &&
    lhs.DeltaQ3 == rhs.DeltaQ3 &&
    lhs.accX == rhs.accX &&
    lhs.accY == rhs.accY &&
    lhs.accZ == rhs.accZ &&
    lhs.freeAccX == rhs.freeAccX &&
    lhs.freeAccY == rhs.freeAccY &&
    lhs.freeAccZ == rhs.freeAccZ;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dfcv_mining_msgs::LocationIMUCp_<ContainerAllocator1> & lhs, const ::dfcv_mining_msgs::LocationIMUCp_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dfcv_mining_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dfcv_mining_msgs::LocationIMUCp_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dfcv_mining_msgs::LocationIMUCp_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dfcv_mining_msgs::LocationIMUCp_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dfcv_mining_msgs::LocationIMUCp_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dfcv_mining_msgs::LocationIMUCp_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dfcv_mining_msgs::LocationIMUCp_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dfcv_mining_msgs::LocationIMUCp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1b98dd07b86403b9f05a48fa6bb96734";
  }

  static const char* value(const ::dfcv_mining_msgs::LocationIMUCp_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1b98dd07b86403b9ULL;
  static const uint64_t static_value2 = 0xf05a48fa6bb96734ULL;
};

template<class ContainerAllocator>
struct DataType< ::dfcv_mining_msgs::LocationIMUCp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dfcv_mining_msgs/LocationIMUCp";
  }

  static const char* value(const ::dfcv_mining_msgs::LocationIMUCp_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dfcv_mining_msgs::LocationIMUCp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"uint8 Error_Code\n"
"uint32 SampleTime\n"
"uint16 GroupCounter\n"
"\n"
"uint8 have_gnss_time_pulse\n"
"uint8 filter_mode\n"
"uint8 clip_mag_z\n"
"uint8 retransmitted\n"
"uint8 clipping_detected\n"
"uint8 interpolated\n"
"uint8 sync_in\n"
"uint8 sync_out\n"
"uint8 clip_acc_x\n"
"uint8 clip_acc_y\n"
"uint8 clip_acc_z\n"
"uint8 clip_gyr_x\n"
"uint8 clip_gyr_y\n"
"uint8 clip_gyr_z\n"
"uint8 clip_mag_x\n"
"uint8 clip_mag_y\n"
"uint8 self_test_ok\n"
"uint8 orientation_valid\n"
"uint8 gps_valid\n"
"uint8 no_rotation\n"
"uint8 representative_motion\n"
"uint8 external_clock_synced\n"
"\n"
"float64 Q0\n"
"float64 Q1\n"
"float64 Q2\n"
"float64 Q3\n"
"\n"
"float64 Roll\n"
"float64 Pitch\n"
"float64 Yaw\n"
"\n"
"float64 DeltaVx\n"
"float64 DeltaVy\n"
"float64 DeltaVz\n"
"uint8 Exponent\n"
"\n"
"float64 gyrX\n"
"float64 gyrY\n"
"float64 gyrZ\n"
"\n"
"float64 DeltaQ0\n"
"float64 DeltaQ1\n"
"float64 DeltaQ2\n"
"float64 DeltaQ3\n"
"\n"
"float64 accX\n"
"float64 accY\n"
"float64 accZ\n"
"\n"
"float64 freeAccX\n"
"float64 freeAccY\n"
"float64 freeAccZ\n"
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

  static const char* value(const ::dfcv_mining_msgs::LocationIMUCp_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dfcv_mining_msgs::LocationIMUCp_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.Error_Code);
      stream.next(m.SampleTime);
      stream.next(m.GroupCounter);
      stream.next(m.have_gnss_time_pulse);
      stream.next(m.filter_mode);
      stream.next(m.clip_mag_z);
      stream.next(m.retransmitted);
      stream.next(m.clipping_detected);
      stream.next(m.interpolated);
      stream.next(m.sync_in);
      stream.next(m.sync_out);
      stream.next(m.clip_acc_x);
      stream.next(m.clip_acc_y);
      stream.next(m.clip_acc_z);
      stream.next(m.clip_gyr_x);
      stream.next(m.clip_gyr_y);
      stream.next(m.clip_gyr_z);
      stream.next(m.clip_mag_x);
      stream.next(m.clip_mag_y);
      stream.next(m.self_test_ok);
      stream.next(m.orientation_valid);
      stream.next(m.gps_valid);
      stream.next(m.no_rotation);
      stream.next(m.representative_motion);
      stream.next(m.external_clock_synced);
      stream.next(m.Q0);
      stream.next(m.Q1);
      stream.next(m.Q2);
      stream.next(m.Q3);
      stream.next(m.Roll);
      stream.next(m.Pitch);
      stream.next(m.Yaw);
      stream.next(m.DeltaVx);
      stream.next(m.DeltaVy);
      stream.next(m.DeltaVz);
      stream.next(m.Exponent);
      stream.next(m.gyrX);
      stream.next(m.gyrY);
      stream.next(m.gyrZ);
      stream.next(m.DeltaQ0);
      stream.next(m.DeltaQ1);
      stream.next(m.DeltaQ2);
      stream.next(m.DeltaQ3);
      stream.next(m.accX);
      stream.next(m.accY);
      stream.next(m.accZ);
      stream.next(m.freeAccX);
      stream.next(m.freeAccY);
      stream.next(m.freeAccZ);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LocationIMUCp_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dfcv_mining_msgs::LocationIMUCp_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dfcv_mining_msgs::LocationIMUCp_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "Error_Code: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Error_Code);
    s << indent << "SampleTime: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.SampleTime);
    s << indent << "GroupCounter: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.GroupCounter);
    s << indent << "have_gnss_time_pulse: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.have_gnss_time_pulse);
    s << indent << "filter_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.filter_mode);
    s << indent << "clip_mag_z: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.clip_mag_z);
    s << indent << "retransmitted: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.retransmitted);
    s << indent << "clipping_detected: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.clipping_detected);
    s << indent << "interpolated: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.interpolated);
    s << indent << "sync_in: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sync_in);
    s << indent << "sync_out: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sync_out);
    s << indent << "clip_acc_x: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.clip_acc_x);
    s << indent << "clip_acc_y: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.clip_acc_y);
    s << indent << "clip_acc_z: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.clip_acc_z);
    s << indent << "clip_gyr_x: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.clip_gyr_x);
    s << indent << "clip_gyr_y: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.clip_gyr_y);
    s << indent << "clip_gyr_z: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.clip_gyr_z);
    s << indent << "clip_mag_x: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.clip_mag_x);
    s << indent << "clip_mag_y: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.clip_mag_y);
    s << indent << "self_test_ok: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.self_test_ok);
    s << indent << "orientation_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.orientation_valid);
    s << indent << "gps_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gps_valid);
    s << indent << "no_rotation: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.no_rotation);
    s << indent << "representative_motion: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.representative_motion);
    s << indent << "external_clock_synced: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.external_clock_synced);
    s << indent << "Q0: ";
    Printer<double>::stream(s, indent + "  ", v.Q0);
    s << indent << "Q1: ";
    Printer<double>::stream(s, indent + "  ", v.Q1);
    s << indent << "Q2: ";
    Printer<double>::stream(s, indent + "  ", v.Q2);
    s << indent << "Q3: ";
    Printer<double>::stream(s, indent + "  ", v.Q3);
    s << indent << "Roll: ";
    Printer<double>::stream(s, indent + "  ", v.Roll);
    s << indent << "Pitch: ";
    Printer<double>::stream(s, indent + "  ", v.Pitch);
    s << indent << "Yaw: ";
    Printer<double>::stream(s, indent + "  ", v.Yaw);
    s << indent << "DeltaVx: ";
    Printer<double>::stream(s, indent + "  ", v.DeltaVx);
    s << indent << "DeltaVy: ";
    Printer<double>::stream(s, indent + "  ", v.DeltaVy);
    s << indent << "DeltaVz: ";
    Printer<double>::stream(s, indent + "  ", v.DeltaVz);
    s << indent << "Exponent: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Exponent);
    s << indent << "gyrX: ";
    Printer<double>::stream(s, indent + "  ", v.gyrX);
    s << indent << "gyrY: ";
    Printer<double>::stream(s, indent + "  ", v.gyrY);
    s << indent << "gyrZ: ";
    Printer<double>::stream(s, indent + "  ", v.gyrZ);
    s << indent << "DeltaQ0: ";
    Printer<double>::stream(s, indent + "  ", v.DeltaQ0);
    s << indent << "DeltaQ1: ";
    Printer<double>::stream(s, indent + "  ", v.DeltaQ1);
    s << indent << "DeltaQ2: ";
    Printer<double>::stream(s, indent + "  ", v.DeltaQ2);
    s << indent << "DeltaQ3: ";
    Printer<double>::stream(s, indent + "  ", v.DeltaQ3);
    s << indent << "accX: ";
    Printer<double>::stream(s, indent + "  ", v.accX);
    s << indent << "accY: ";
    Printer<double>::stream(s, indent + "  ", v.accY);
    s << indent << "accZ: ";
    Printer<double>::stream(s, indent + "  ", v.accZ);
    s << indent << "freeAccX: ";
    Printer<double>::stream(s, indent + "  ", v.freeAccX);
    s << indent << "freeAccY: ";
    Printer<double>::stream(s, indent + "  ", v.freeAccY);
    s << indent << "freeAccZ: ";
    Printer<double>::stream(s, indent + "  ", v.freeAccZ);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DFCV_MINING_MSGS_MESSAGE_LOCATIONIMUCP_H
