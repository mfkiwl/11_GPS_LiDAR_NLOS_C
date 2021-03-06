// Generated by gencpp from file hdl_graph_slam/FloorCoeffs.msg
// DO NOT EDIT!


#ifndef HDL_GRAPH_SLAM_MESSAGE_FLOORCOEFFS_H
#define HDL_GRAPH_SLAM_MESSAGE_FLOORCOEFFS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace hdl_graph_slam
{
template <class ContainerAllocator>
struct FloorCoeffs_
{
  typedef FloorCoeffs_<ContainerAllocator> Type;

  FloorCoeffs_()
    : header()
    , coeffs()  {
    }
  FloorCoeffs_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , coeffs(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _coeffs_type;
  _coeffs_type coeffs;




  typedef boost::shared_ptr< ::hdl_graph_slam::FloorCoeffs_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hdl_graph_slam::FloorCoeffs_<ContainerAllocator> const> ConstPtr;

}; // struct FloorCoeffs_

typedef ::hdl_graph_slam::FloorCoeffs_<std::allocator<void> > FloorCoeffs;

typedef boost::shared_ptr< ::hdl_graph_slam::FloorCoeffs > FloorCoeffsPtr;
typedef boost::shared_ptr< ::hdl_graph_slam::FloorCoeffs const> FloorCoeffsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hdl_graph_slam::FloorCoeffs_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hdl_graph_slam::FloorCoeffs_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace hdl_graph_slam

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'hdl_graph_slam': ['/home/wenws/11_GPS_LiDAR_NLOS_C/src/hdl_graph_slam/msg'], 'std_msgs': ['/opt/ros/jade/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::hdl_graph_slam::FloorCoeffs_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hdl_graph_slam::FloorCoeffs_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hdl_graph_slam::FloorCoeffs_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hdl_graph_slam::FloorCoeffs_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hdl_graph_slam::FloorCoeffs_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hdl_graph_slam::FloorCoeffs_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hdl_graph_slam::FloorCoeffs_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c0861e5afa0bb6c1fd931e1b78404b45";
  }

  static const char* value(const ::hdl_graph_slam::FloorCoeffs_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc0861e5afa0bb6c1ULL;
  static const uint64_t static_value2 = 0xfd931e1b78404b45ULL;
};

template<class ContainerAllocator>
struct DataType< ::hdl_graph_slam::FloorCoeffs_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hdl_graph_slam/FloorCoeffs";
  }

  static const char* value(const ::hdl_graph_slam::FloorCoeffs_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hdl_graph_slam::FloorCoeffs_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
float32[] coeffs\n\
\n\
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

  static const char* value(const ::hdl_graph_slam::FloorCoeffs_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hdl_graph_slam::FloorCoeffs_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.coeffs);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FloorCoeffs_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hdl_graph_slam::FloorCoeffs_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hdl_graph_slam::FloorCoeffs_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "coeffs[]" << std::endl;
    for (size_t i = 0; i < v.coeffs.size(); ++i)
    {
      s << indent << "  coeffs[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.coeffs[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // HDL_GRAPH_SLAM_MESSAGE_FLOORCOEFFS_H
