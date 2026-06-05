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

int main(int argc, char** argv) {
  uint68 x = 0xF0F0F0F0F0F0F0F0ULL;
  uint60 y = 0x0F0F0F0F0F0F0F0FULL;
  uint68 z = part_set(x, y, 0, (bitwidthof(y)-1)); 
  uint68 z2= part_set(x, y, (bitwidthof(y)-1), 0); 
  printf("x = ");
  printBits(x);
  printf("\ny = ");
  printBits(y);
  printf("\npart_set(x, y, 0, 59) = ");
  printBits(z);
  printf("\npart_set(x, y, 59, 0) = ");
  printBits(z2);
  printf("\n");
  return (int) z;
}
