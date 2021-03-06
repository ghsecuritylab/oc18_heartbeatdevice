/*
 * Copyright (c) 2016 ARM Limited. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef TEST_M2M_TIMER_IMPL_CLASSIC_H
#define TEST_M2M_TIMER_IMPL_CLASSIC_H

#include "mbed-client-classic/m2mtimerpimpl.h"

class TestObserver;

class Test_M2MTimerPimpl_classic
{
public:
    Test_M2MTimerPimpl_classic();

    virtual ~Test_M2MTimerPimpl_classic();

    void test_start_timer();

    void test_stop_timer();

    void test_timer_expired();

    void test_start_dtls_timer();

    void test_is_intermediate_interval_passed();

    void test_is_total_interval_passed();

    void test_tasklet_func();
    void test_start_still_left_timer();

    M2MTimerPimpl* timer;
    TestObserver* observer;
};

#endif // TEST_M2M_TIMER_IMPL_CLASSIC_H
