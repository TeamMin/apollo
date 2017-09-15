/******************************************************************************
 * Copyright 2017 The Apollo Authors. All Rights Reserved.
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
#include "modules/l3_perception/delphi_esr/radar_obstacle.h"

namespace apollo {
namespace l3_perception {

  const Point RadarObstacle::position() {
    return position_;
  }

  const Point RadarObstacle::velocity() {
    return velocity_;
  }

  const uint32_t RadarObstacle::id() {
    return id_;
  }

  const double RadarObstacle::rcs() {
    return rcs_;
  }

  const bool RadarObstacle::movable() {
    return movable_;
  }
  
  void RadarObstacle::set_position(const Point& position) {
    position_.set_x(position.x());
    position_.set_y(position.y());
  }
  
  void RadarObstacle::set_position(const double x, const double y) {
    position_.set_x(x);
    position_.set_y(y);
  }

  void RadarObstacle::set_velocity(const Point& velocity) {
    velocity_.set_x(velocity.x());
    velocity_.set_y(velocity.y());
  }

  void RadarObstacle::set_velocity(const double x, const double y) {
    velocity_.set_x(x);
    velocity_.set_y(y);
  }

  void RadarObstacle::set_id(const uint32_t id) {
    id_ = id;
  }

  void RadarObstacle::set_rcs(const double rcs) {
    rcs_ = rcs;
  }

  void RadarObstacle::set_movable(const bool movable) {
    movable_ = movable;
  }

}  // namespace l3_perception
}  // namespace apollo

