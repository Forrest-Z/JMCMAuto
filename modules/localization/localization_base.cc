/******************************************************************************
 * Copyright 2018 The jmc_auto Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#include "modules/localization/localization_base.h"

#include "modules/common/configs/config_gflags.h"
#include "modules/common/log.h"
#include "modules/localization/common/localization_gflags.h"
#include "modules/common/math/euler_angles_zxy.h"
#include "modules/common/math/quaternion.h"

namespace jmc_auto {
namespace localization {

using ::Eigen::Vector3d;
void LocalizationBase::PublishPoseBroadcastTF(
    const LocalizationEstimate &localization) {
  if (!tf2_broadcaster_) {
    AERROR << "tf broadcaster is not created.";
    return;
  }

  // broadcast tf message
  geometry_msgs::TransformStamped tf2_msg;
  tf2_msg.header.stamp = ros::Time(localization.measurement_time());
  tf2_msg.header.frame_id = FLAGS_localization_tf2_frame_id;
  tf2_msg.child_frame_id = FLAGS_localization_tf2_child_frame_id;

  tf2_msg.transform.translation.x = localization.pose().position().x();
  tf2_msg.transform.translation.y = localization.pose().position().y();
  tf2_msg.transform.translation.z = localization.pose().position().z();

  tf2_msg.transform.rotation.x = localization.pose().orientation().qx();
  tf2_msg.transform.rotation.y = localization.pose().orientation().qy();
  tf2_msg.transform.rotation.z = localization.pose().orientation().qz();
  tf2_msg.transform.rotation.w = localization.pose().orientation().qw();
  //AINFO << "localization tf2_msg transXYZ:" <<tf2_msg.transform.translation.x << " " <<tf2_msg.transform.translation.y
                                             //<< " " <<tf2_msg.transform.translation.z <<"\n";
  //AINFO << "localization tf2_msg rotationXYZW:" << tf2_msg.transform.rotation.x << " " << tf2_msg.transform.rotation.y
                                              //<< " " << tf2_msg.transform.rotation.z <<" "<< tf2_msg.transform.rotation.w <<"\n";                                 


  //?????????????????? frame_id: "world"  child_frame_id: "novatel"
  geometry_msgs::TransformStamped tf1_msg;
  tf1_msg.header.stamp = ros::Time(localization.measurement_time());
  tf1_msg.header.frame_id = "world";
  tf1_msg.child_frame_id = "novatel";
  Vector3d orig(-0.55,-0.15,-0.25);
  Vector3d vec = common::math::QuaternionRotate(
              localization.pose().orientation(), orig);
  tf1_msg.transform.translation.x = localization.pose().position().x()-vec[0];
  tf1_msg.transform.translation.y = localization.pose().position().y()-vec[1];
  tf1_msg.transform.translation.z = localization.pose().position().z()-vec[2];
  tf1_msg.transform.rotation.x = localization.pose().orientation().qx();
  tf1_msg.transform.rotation.y = localization.pose().orientation().qy();
  tf1_msg.transform.rotation.z = localization.pose().orientation().qz();
  tf1_msg.transform.rotation.w = localization.pose().orientation().qw();
   

  tf2_broadcaster_->sendTransform(tf1_msg);
  tf2_broadcaster_->sendTransform(tf2_msg);
}

}  // namespace localization
}  // namespace jmc_auto
