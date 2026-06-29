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

//===--- template.cpp --- Test Cases for Bit Accurate Types ---------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This is a test for template functions.
//
//===----------------------------------------------------------------------===//


#include <stdio.h>

typedef int __attribute__ ((bitwidth(4))) int4;
typedef unsigned int __attribute__ ((bitwidth(5))) int5;

template <class T>
  T&  min(T  &tParam1, T  &tParam2)
{
  if(tParam1 < tParam2)
    return tParam1;
  else
    return tParam2;
}

template <class T>
  T&  min(T  &tParam1, T  &tParam2, T  &tParam3)
{
  if(min(tParam1, tParam2) < tParam3)
    return min(tParam1, tParam2) ;
  else
    return tParam3;
}

int main()
{
  int4 x , y, z;
    
  x = 12;
  y = 2;
  z = 7;

  int m = min(x, y);
  printf("min = %d\n", m);

  m = min(x, y, z);
  printf("min = %d\n", m);

  int5 f, g;
  f = 0x1f;
  g = 0x0f;

  m = min(f, g);
  printf("min = %x\n", m);
}
