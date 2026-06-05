/*
 * Copyright 2026 LLVM Project
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

//===--- array.c --- Test Cases for Bit Accurate Types --------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This is a general test for array data types.
//
//===----------------------------------------------------------------------===//

#include "bits.h"
#include <stdio.h>

typedef enum bool{false=0, true=1} bool;

int my_test(){
  {
    int33 array[8];
    unsigned int i = 0;
    long long tmp;
    {
      i = 0;
      for ( ; ; ) {
        bool ssdm_tmp_1 = (i < 8);
        if (!ssdm_tmp_1) break;
        {
          array[i] = -(i + 1);
          tmp = array[i];
          printf("i=%u: %x\n", i, tmp);
        }
        ++i;
      }
    }
    int33* ptr;
    ptr = &array[7];
    *ptr = array[1] % array[0];
    tmp = *ptr;
    printf("%x\n", tmp);
    return 0;
  }
}


int main()
{
  my_test();
  return 0;
}


