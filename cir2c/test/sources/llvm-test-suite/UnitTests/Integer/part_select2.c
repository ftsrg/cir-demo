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

int main()
{
  int128 X = 0xde7ed959bcfdb200ULL;
  int X0 = 0xde7ed959bcfdb200ULL;
  
  int8 X1 = X0; // Truncate to 0x00

  uint19 r, r0, r1;
  
  printf("\n X=");
  printBits(X);

  r0 = part_select(X0, 0, 18);
  r = part_select(X, 0, 18);
  r1 = part_select(X1, 0, 7);

  printf("\n r0 =");
  printBits(r0);

  printf("\n r  ="); // Wrong!
  printBits(r);

  printf("\n r1 ="); // Zero
  printBits(r1);
  printf("\n");

  return r;
}
