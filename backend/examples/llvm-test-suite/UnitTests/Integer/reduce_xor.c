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

int test_reduce_xor47(uint47 x)
{
  unsigned result = reduce(xor, x) != 0;
  printf("reduce_xor47(x) = %d\n", result);
  return result;
}  

int test_reduce_xor68(uint68 x)
{
  unsigned result = reduce(xor, x) != 0;
  printf("reduce_xor68(x) = %d\n", result);
  return result;
}  

int test_reduce_xor250(uint250 x)
{
  unsigned result = reduce(xor, x) != 0;
  printf("reduce_xor250(x) = %d\n", result);
  return result;
}  

int main(int argc, char** argv) {
  uint250 x = 0xF0F0F0F0F0F0F0F0ULL;
  int result = 0;
  int i;
  srand(128);
  for (i = 0; i < 16; ++i) {
    x *= rand();
    printf("x = 0b0");
    printBits(x);
    printf("\n");
    result = 
      test_reduce_xor47(x)  + test_reduce_xor68(x) +
      test_reduce_xor250(x);
    printf("Xor reductions of x = %d\n", result);
  }
  return 0;
}
