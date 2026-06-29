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

//===--- offset.c --- Test Cases for Bit Accurate Types -------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This is a test for data size calculation with non-regular integral type.
//
//===----------------------------------------------------------------------===//


#include <stdio.h>

typedef int __attribute__ ((bitwidth(33))) int33;

struct s { int33 field[0]; };

#define OFFS (((char *) &((struct s *) 0)->field[1]) - (char *) 0)

int foo[OFFS];

int main()
{
  printf("%d\n", OFFS);
  return 0;
}
