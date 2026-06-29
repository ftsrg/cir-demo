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

//===--- bit_select.c --- Test The bit_select builtin ---------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This test case tests the __builtin_bit_select builtin function llvm-gcc.
// bit_select selects one bit out of a larger 
//
//===----------------------------------------------------------------------===//

#include <stdio.h>

#ifdef ENABLE_LARGE_INTEGERS
typedef int __attribute__((bitwidth(250))) BitType;
const BitType X = 0xAAAAAAAAAAAAAAAAULL;
int numbits = 250;
#else
typedef int __attribute__((bitwidth(47))) BitType;
const BitType X = 0xAAAAAAAAAAAAULL;
int numbits = 47;
#endif

int main(int argc, char** argv)
{

#ifdef ENABLE_LARGE_INTEGERS
  BitType Y = X * X;
#else
  BitType Y = X;
#endif

  BitType i;

  for (i = numbits-1; i >= 0; --i) {
    if (__builtin_bit_select(&Y, i)) 
      printf("1");
    else
      printf("0");
  }

  printf("\n");
  return 0;
}
