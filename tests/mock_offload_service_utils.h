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

#ifndef WIFICOND_TEST_MOCK_OFFLOAD_SERVICE_UTILS_H_
#define WIFICOND_TEST_MOCK_OFFLOAD_SERVICE_UTILS_H_

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "wificond/scanning/offload/offload_callback.h"
#include "wificond/scanning/offload/offload_service_utils.h"
#include "wificond/scanning/offload/offload_callback_handlers.h"
#include <android/hardware/wifi/offload/1.0/IOffload.h>

using android::hardware::wifi::offload::V1_0::IOffload;

namespace android {
namespace wificond {

class MockOffloadServiceUtils : public OffloadServiceUtils {
 public:
  MockOffloadServiceUtils();
  ~MockOffloadServiceUtils() override = default;

  MOCK_METHOD0(GetOffloadService, sp<IOffload>());
  MOCK_METHOD1(GetOffloadCallback, sp<OffloadCallback>(
      OffloadCallbackHandlers* handlers));
};

} // namespace wificond
} // namespace android

#endif // WIFICOND_TEST_MOCK_OFFLOAD_SERVICE_UTILS_H_

