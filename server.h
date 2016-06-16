/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef WIFICOND_SERVER_H_
#define WIFICOND_SERVER_H_

#include <android-base/macros.h>

#include "android/net/wifi/BnWificond.h"
#include "chip.h"

namespace android {
namespace wificond {

class Server : public android::net::wifi::BnWificond {
 public:
  Server();
  ~Server() override = default;

  android::binder::Status GetChips(std::vector<sp<IBinder>>* chips) override;

 private:
  std::vector<sp<IBinder>> chips_;

  DISALLOW_COPY_AND_ASSIGN(Server);
};

}  // namespace wificond
}  // namespace android

#endif  // WIFICOND_SERVER_H_