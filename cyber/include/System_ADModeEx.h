// Generated by gencpp from file dfcv_mining_msgs/System_ADModeEx.msg
// DO NOT EDIT!


#ifndef DFCV_MINING_MSGS_MESSAGE_SYSTEM_ADMODEEX_H
#define DFCV_MINING_MSGS_MESSAGE_SYSTEM_ADMODEEX_H


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
struct System_ADModeEx_
{
  typedef System_ADModeEx_<ContainerAllocator> Type;

  System_ADModeEx_()
    : System_ADMode(0)
    , System_TransmissionMode3(0)  {
    }
  System_ADModeEx_(const ContainerAllocator& _alloc)
    : System_ADMode(0)
    , System_TransmissionMode3(0)  {
  (void)_alloc;
    }



   typedef uint8_t _System_ADMode_type;
  _System_ADMode_type System_ADMode;

   typedef uint8_t _System_TransmissionMode3_type;
  _System_TransmissionMode3_type System_TransmissionMode3;





  typedef boost::shared_ptr< ::dfcv_mining_msgs::System_ADModeEx_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dfcv_mining_msgs::System_ADModeEx_<ContainerAllocator> const> ConstPtr;

}; // struct System_ADModeEx_

typedef ::dfcv_mining_msgs::System_ADModeEx_<std::allocator<void> > System_ADModeEx;

typedef boost::shared_ptr< ::dfcv_mining_msgs::System_ADModeEx > System_ADModeExPtr;
typedef boost::shared_ptr< ::dfcv_mining_msgs::System_ADModeEx const> System_ADModeExConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dfcv_mining_msgs::System_ADModeEx_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dfcv_mining_msgs::System_ADModeEx_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dfcv_mining_msgs::System_ADModeEx_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dfcv_mining_msgs::System_ADModeEx_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dfcv_mining_msgs::System_ADModeEx_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dfcv_mining_msgs::System_ADModeEx_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dfcv_mining_msgs::System_ADModeEx_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dfcv_mining_msgs::System_ADModeEx_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dfcv_mining_msgs::System_ADModeEx_<ContainerAllocator> >
{
  static const char* value()
  {
    return "be73b95deb33c05ee9928f544980ba6a";
  }

  static const char* value(const ::dfcv_mining_msgs::System_ADModeEx_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbe73b95deb33c05eULL;
  static const uint64_t static_value2 = 0xe9928f544980ba6aULL;
};

template<class ContainerAllocator>
struct DataType< ::dfcv_mining_msgs::System_ADModeEx_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dfcv_mining_msgs/System_ADModeEx";
  }

  static const char* value(const ::dfcv_mining_msgs::System_ADModeEx_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dfcv_mining_msgs::System_ADModeEx_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#System_ADModeEx.msg\n\
\n\
uint8 System_ADMode\n\
\n\
uint8 System_TransmissionMode3    #变速箱模式\n\
";
  }

  static const char* value(const ::dfcv_mining_msgs::System_ADModeEx_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dfcv_mining_msgs::System_ADModeEx_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.System_ADMode);
      stream.next(m.System_TransmissionMode3);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct System_ADModeEx_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dfcv_mining_msgs::System_ADModeEx_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dfcv_mining_msgs::System_ADModeEx_<ContainerAllocator>& v)
  {
    s << indent << "System_ADMode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.System_ADMode);
    s << indent << "System_TransmissionMode3: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.System_TransmissionMode3);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DFCV_MINING_MSGS_MESSAGE_SYSTEM_ADMODEEX_H
