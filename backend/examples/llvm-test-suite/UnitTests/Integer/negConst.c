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


#include "bits.h"


void test1(int69 x)
{
  int63 y = -120;
  int63 y2 = part_select(y, 0, 31);
  int32 z = 0;
  int32 z2 = 0;
  int i = 0;

  // Compute the part_select manually using bit_select
  for(i = 31; i >= 0; --i) {
    z <<= 1;
    if (bit_select(y, i))
      z |= 1;
  }

  // Compute the part_select
  z2 = y2;
  
  printf("Value1: %x = ", (int)y);
  printBits(y);
  printf("\n");
  printf("Value2: %x = ", (int)y2);
  printBits(y2);
  printf("\n");
  printf("Bits : %x = ", z);
  printBits(z);
  printf("\nPart : %x = ", z2);
  printBits(z2);
  printf("\n");

  if (z != z2)
    printf("Error: %x, %x\n", z, z2);
  else
    printf("OK.\n");
}

int main(int argc, char ** argv)
{
  int69 n;
  if (argc > 1) {
    n = bitsFromString("9876543210000000", 69);
  }
  else
    n = -1;
  int54 n2 = n;
  long long unsigned int U = n;
  long long signed int   S = n2;

  printf("Unsigned: %llu (%llx) = ", U, U);
  printBits(n);
  printf("\n");
  printf("  Signed: %lld (%llx) = ", S, S);
  printBits(n2);
  printf("\n");
  test1(n);
  return 0;
}
