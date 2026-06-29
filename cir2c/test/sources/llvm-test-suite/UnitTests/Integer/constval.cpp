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

//===--- constval.c - Test constant APInt values --------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This is a general test parsing constant APInt values
//
//===----------------------------------------------------------------------===//

#include "bits.h"
#include <stdio.h>

void my_test()
{
  uint21 x = bitsFromString("123456", 21);
  printf( "x = %d = ", int(x));
  printBits(x);

  uint16 y = bitsFromString("123456", 16);
  printf( "\ny = %d = ", int(y));
  printBits(y);

  int256 z = bitsFromHexString("0fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff", 256); 
  printf( "\nz = " );
  printBits(z);

  int69 a = bitsFromOctalString("01234567012345670123456", 69);
  printf( "\na = " );
  printBits(a);

  int68 b = bitsFromBinaryString("10101010101010101010101010101010101010101010101010101010101010101010", 68);
  printf( "\nb = " );
  printBits(b);

  int169 c = bitsFromString("-1234567890123456789012345678901234567890", 169);
  printf( "\nc = " );
  printBits(c);

  printf("\n");
}

int main(int argc, char** argv)
{
  my_test();
  return 0;
}

