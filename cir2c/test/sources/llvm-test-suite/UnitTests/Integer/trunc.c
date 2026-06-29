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

//===--- trunc.c --- Test Cases for Bit Accurate Types --------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This is used to test trunc and sext instructions.
//
//===----------------------------------------------------------------------===//

#include <stdio.h>

typedef int __attribute__ ((bitwidth(24))) int24;

int
test(int24 v)
{
  int y;

  y = v * (-1);
  printf("test() y = %d\n", y);

  return 0;
}

int
main ( int argc, char** argv)
{
  int num;
  int24 x;
  
  if (argc > 1)
    num = atoi(argv[1]);

  test(num);
  
  num = num - 0xdf5e75; //0x10001

  x = num;

  printf("x=%x\n", x);

  if(x != 1)
    printf("error\n");

  test(x);
  
  return 0;
}
