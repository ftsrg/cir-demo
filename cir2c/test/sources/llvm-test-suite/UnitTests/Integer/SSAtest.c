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

//===--- SSAtest.c --- Test Cases for Bit Accurate Types ------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// Adopted the test from previous test-cases. Changed it with
// non-regular int data type.
//
//===----------------------------------------------------------------------===//


#include <stdio.h>

typedef int __attribute__ ((bitwidth(4))) int4;

int4 bar()
{
    return 0xf;
}

int4 foo()
{
  int4 a,b,c;
  b = 0;
  c = 0;
  a = b + c;
  b = bar();
  c = bar();
  printf("result = %d\n", a + b + c);
}


int main()
{
  foo();
  return 0;
}
