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

//===--- static.c --- Test Cases for Bit Accurate Types -------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This is a test for static data with non-regular integral data.
//
//===----------------------------------------------------------------------===//


#include <stdio.h>

typedef int __attribute__ ((bitwidth(31))) int31;

int31 test(int31 y, int31* z)
{
  static int31 x = 0;
  *z =  x;
  x = y;
  return x;
}

int main()
{
  int31 a, b;
  a = test(1, &b);
  if(b != 0 || a != 1)
    printf("error\n");
  a = test(-1, &b);
  if(b != 1 || a != -1)
    printf("error\n");
  return 0;
    
}
