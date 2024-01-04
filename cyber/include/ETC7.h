// Generated by gencpp from file dfcv_mining_msgs/ETC7.msg
// DO NOT EDIT!


#ifndef DFCV_MINING_MSGS_MESSAGE_ETC7_H
#define DFCV_MINING_MSGS_MESSAGE_ETC7_H


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
struct ETC7_
{
  typedef ETC7_<ContainerAllocator> Type;

  ETC7_()
    : Transmission_Mode_3(0)
    , Transmission_Ready_for_Brake_Release(0)  {
    }
  ETC7_(const ContainerAllocator& _alloc)
    : Transmission_Mode_3(0)
    , Transmission_Ready_for_Brake_Release(0)  {
  (void)_alloc;
    }



   typedef uint8_t _Transmission_Mode_3_type;
  _Transmission_Mode_3_type Transmission_Mode_3;

   typedef uint8_t _Transmission_Ready_for_Brake_Release_type;
  _Transmission_Ready_for_Brake_Release_type Transmission_Ready_for_Brake_Release;





  typedef boost::shared_ptr< ::dfcv_mining_msgs::ETC7_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dfcv_mining_msgs::ETC7_<ContainerAllocator> const> ConstPtr;

}; // struct ETC7_

typedef ::dfcv_mining_msgs::ETC7_<std::allocator<void> > ETC7;

typedef boost::shared_ptr< ::dfcv_mining_msgs::ETC7 > ETC7Ptr;
typedef boost::shared_ptr< ::dfcv_mining_msgs::ETC7 const> ETC7ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dfcv_mining_msgs::ETC7_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dfcv_mining_msgs::ETC7_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dfcv_mining_msgs::ETC7_<ContainerAllocator1> & lhs, const ::dfcv_mining_msgs::ETC7_<ContainerAllocator2> & rhs)
{
  return lhs.Transmission_Mode_3 == rhs.Transmission_Mode_3 &&
    lhs.Transmission_Ready_for_Brake_Release == rhs.Transmission_Ready_for_Brake_Release;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dfcv_mining_msgs::ETC7_<ContainerAllocator1> & lhs, const ::dfcv_mining_msgs::ETC7_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dfcv_mining_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dfcv_mining_msgs::ETC7_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dfcv_mining_msgs::ETC7_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dfcv_mining_msgs::ETC7_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dfcv_mining_msgs::ETC7_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dfcv_mining_msgs::ETC7_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dfcv_mining_msgs::ETC7_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dfcv_mining_msgs::ETC7_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3f10167ad901a500c440a0fa156a7ff2";
  }

  static const char* value(const ::dfcv_mining_msgs::ETC7_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3f10167ad901a500ULL;
  static const uint64_t static_value2 = 0xc440a0fa156a7ff2ULL;
};

template<class ContainerAllocator>
struct DataType< ::dfcv_mining_msgs::ETC7_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dfcv_mining_msgs/ETC7";
  }

  static const char* value(const ::dfcv_mining_msgs::ETC7_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dfcv_mining_msgs::ETC7_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#ETC7.msg\n"
"\n"
"uint8 Transmission_Mode_3\n"
"uint8 Transmission_Ready_for_Brake_Release \n"
;
  }

  static const char* value(const ::dfcv_mining_msgs::ETC7_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dfcv_mining_msgs::ETC7_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.Transmission_Mode_3);
      stream.next(m.Transmission_Ready_for_Brake_Release);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ETC7_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dfcv_mining_msgs::ETC7_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dfcv_mining_msgs::ETC7_<ContainerAllocator>& v)
  {
    s << indent << "Transmission_Mode_3: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Transmission_Mode_3);
    s << indent << "Transmission_Ready_for_Brake_Release: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Transmission_Ready_for_Brake_Release);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DFCV_MINING_MSGS_MESSAGE_ETC7_H
