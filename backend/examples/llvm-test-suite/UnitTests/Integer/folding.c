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

//===--- folding.c --- Test Cases for Bit Accurate Types ------------------===////
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This is used to test constant folding optimization.
//
//===----------------------------------------------------------------------===//


#include <stdio.h>


typedef int __attribute__ ((bitwidth(7))) int7;
typedef unsigned int __attribute__ ((bitwidth(7))) uint7;
typedef int __attribute__ ((bitwidth(15))) int15;

const int7 myConst = 1;
const int15 myConst2 = 0x7fff;

int main()
{
  int7 x;
  int7 y;
  int15 z;
  uint7 u;
    
  x = myConst << 3; // constant 8
  y = x + myConst;  // constant 9
  if(y -x != 1)
    printf("error1: x = %d, y = %d\n", x, y);

  x = myConst << 7; // constant 0
  if(y -x != 9)
    printf("error2: x = %d, y = %d\n", x, y);

  z = (int15) y;
  z &= myConst2;
  if(z != 0x9)
    printf("error3: x = %d, y = %d\n", x, y);

  u = 0x7f;
  u = u + (uint7)myConst;
  if(u != 0)
    printf("error4: x = %d, y = %d\n", x, y);
    
  return 0;
}
