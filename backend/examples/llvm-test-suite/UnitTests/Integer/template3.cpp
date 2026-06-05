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

//===--- template3.cpp --- Test Cases for Bit Accurate Types --------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This is a test for partial specialization.
//
//===----------------------------------------------------------------------===//


#include <stdio.h>

typedef int __attribute__ ((bitwidth(17))) int17;
typedef int __attribute__ ((bitwidth(15))) int15;

template<class T, class U, int I> struct X
{ void f() { printf("Primary template\n"); } };

template<class T, int I> struct X<T, T*, I>
{ void f() { printf("Partial specialization 1\n"); } };

template<class T, class U, int I> struct X<T*, U, I>
{ void f() { printf("Partial specialization 2\n"); } };

template<class T> struct X<int, T*, 10>
{ void f() { printf("Partial specialization 3\n"); } };

template<class T, class U, int I> struct X<T, U*, I>
{ void f() { printf("Partial specialization 4\n"); } };

int main() {
  X<int17, int17, 10> a;
  X<int15, int15*, 5> b;
  X<int17, int15*, 5> bb;

  X<int17*, float, 10> c;
  X<int15, char*, 10> d;
  X<float, int15*, 10> e;

  a.f();
  b.f();
  bb.f();
  c.f();
  d.f();
  e.f();
  return 0;
}
