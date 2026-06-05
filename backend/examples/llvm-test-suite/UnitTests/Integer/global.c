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

//===--- global.c --- Test Cases for Bit Accurate Types -------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This is used to test global arrays.
//
//===----------------------------------------------------------------------===//


#include <stdio.h>


typedef int __attribute__ ((bitwidth(7))) int7;
typedef int __attribute__ ((bitwidth(14))) int14;

int7 array[4] = {127, -1, 100, -28};
int14 array2[4][4];

void test()
{
  int i = 0;
  int j = 0;
  for(i=0; i<4; ++i)
    for(j=0; j<4; ++j){
      array2[i][j] = array[i] *  array[j];
      if(array2[i][j] <= 0)
        printf("error: i=%d, j=%d, result = %d\n", i, j, array2[i][j]);
    }
}

int main()
{
  int7 a = 127;
  int7 b = 100;
  printf("a=%d b=%d a*a=%d\n",a, b, a*a);
  test();
  return 0;
}
