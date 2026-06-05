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
#include <stdio.h>

uint68 test_part_set(uint68 x, uint60 y)
{
  printf("uint68 x = ");
  printBits(x);
  printf("\n");

  printf("uint60 y = ");
  printBits(y);
  printf("\n");

  printf("part_set(x,y,0,59) = ");
  uint68 z = part_set(x, y, 0, (bitwidthof(y)-1)); 
  printBits(z);
  printf("\n");

  printf("part_set(x,y,59,0) = ");
  z = part_set(x, y, (bitwidthof(y)-1), 0); 
  printBits(z);
  printf("\n");

  printf("part_set(x,0,0,31) = ");
  z = part_set(x, 0, 0, 31);
  printBits(z);
  printf("\n");

  return z;
}

int main(int argc, char** argv) {
  uint68 A = 0xF0F0F0F0F0F0F0F0ULL;
  uint60 B = 0x0F0F0F0F0F0F0F0FULL;
  uint68 X = test_part_set(A, B);
  return 0;
}
