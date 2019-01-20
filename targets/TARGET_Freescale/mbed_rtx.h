/*
* @File Name: mbed_rtx.h
* @File Path: K:\work\white_PRJ\YJ432-PL-PS\PS_repository\demo\mbed-os\targets\TARGET_Freescale\mbed_rtx.h
* @Author: 29505
* @Date:   2019-01-20 23:49:19
* @Last Modified by:   29505
* @Last Modified time: 2019-01-21 00:02:13
* @Email: 295054118@whut.edu.cn
*/
/* mbed Microcontroller Library
 * Copyright (c) 2016 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MBED_MBED_RTX_H
#define MBED_MBED_RTX_H

#if defined(TARGET_K20D50M)

#ifndef INITIAL_SP
#define INITIAL_SP              (0x10008000UL)
#endif

#elif defined(TARGET_TEENSY3_1)

#ifndef INITIAL_SP
#define INITIAL_SP              (0x20008000UL)
#endif

#elif defined(TARGET_MCU_K22F)

#ifndef INITIAL_SP
#define INITIAL_SP              (0x20010000UL)
#endif

#elif defined(TARGET_K66F)

#ifndef INITIAL_SP
#define INITIAL_SP              (0x20030000UL)
#endif

#elif defined(TARGET_KL27Z)

#ifndef INITIAL_SP
#define INITIAL_SP              (0x20003000UL)
#endif

#elif defined(TARGET_KL43Z)

#ifndef INITIAL_SP
#define INITIAL_SP              (0x20006000UL)
#endif

#elif defined(TARGET_KL05Z)

#ifndef INITIAL_SP
#define INITIAL_SP              (0x20000C00UL)
#endif

#elif defined(TARGET_KL25Z)

#ifndef INITIAL_SP
#define INITIAL_SP              (0x20003000UL)
#endif

#elif defined(TARGET_KL26Z)

#ifndef INITIAL_SP
#define INITIAL_SP              (0x20003000UL)
#endif

#elif defined(TARGET_KL46Z)

#ifndef INITIAL_SP
#define INITIAL_SP              (0x20006000UL)
#endif

#elif defined(TARGET_KL82Z)

#ifndef INITIAL_SP
#define INITIAL_SP              (0x20012000UL)
#endif

#elif defined(TARGET_K64F)

#ifndef INITIAL_SP
#define INITIAL_SP              (0x20030000UL)
#endif

#elif defined(TARGET_SDT64B)

#ifndef INITIAL_SP
#define INITIAL_SP              (0x20030000UL)
#endif

#elif defined(TARGET_KW24D)

#ifndef INITIAL_SP
#define INITIAL_SP              (0x20008000UL)
#endif

#elif defined(TARGET_KW41Z)

#ifndef INITIAL_SP
#define INITIAL_SP              (0x20018000UL)
#endif

#elif defined(TARGET_K82F)

#ifndef INITIAL_SP
#define INITIAL_SP              (0x20030000UL)
#endif

#elif defined(TARGET_RO359B)

#ifndef INITIAL_SP
#define INITIAL_SP              (0x20030000UL)
#endif

#elif defined(TARGET_K64ARM4FPGA)

#ifndef INITIAL_SP
#define INITIAL_SP              (0x20030000UL)
#endif

#endif

#endif  // MBED_MBED_RTX_H
