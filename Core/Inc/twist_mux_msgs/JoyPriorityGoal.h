#ifndef _ROS_twist_mux_msgs_JoyPriorityGoal_h
#define _ROS_twist_mux_msgs_JoyPriorityGoal_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace twist_mux_msgs
{

  class JoyPriorityGoal : public ros::Msg
  {
    public:

    JoyPriorityGoal()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
     return offset;
    }

    virtual const char * getType() override { return "twist_mux_msgs/JoyPriorityGoal"; };
    virtual const char * getMD5() override { return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

}
#endif
