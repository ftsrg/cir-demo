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

int test_reduce_or(uint68 x)
{
  unsigned result = reduce(or, x) != 0;
  printf("reduce(or, x) = %d\n", result);
  return result;
}

int test_reduce_nor(uint68 x)
{
  unsigned result = reduce(nor, x) != 0;
  printf("reduce(nor, x) = %d\n", result);
  return result;
}  

int test_reduce_xor(uint68 x)
{
  unsigned result = reduce(xor, x) != 0;
  printf("reduce(xor, x) = %d\n", result);
  return result;
}  

int test_reduce_nxor(uint68 x)
{
  unsigned result = reduce(nxor, x) != 0;
  printf("reduce(nxor, x) = %d\n", result);
  return result;
}  

int test_reduce_and(uint68 x)
{
  unsigned result = reduce(and, x) != 0;
  printf("reduce(and, x) = %d\n", result);
  return result;
}  

int test_reduce_nand(uint68 x)
{
  unsigned result = reduce(nand, x) != 0;
  printf("reduce(nand, x) = %d\n", result);
  return result;
}  


int main(int argc, char** argv) {
  uint68 x = 0xF0F0F0F0F0F0F0F0ULL;
  int result = 0;
  printf("x = ");
  printBits(x);
  printf("\n");
  result = 
    test_reduce_or(x)  + test_reduce_nor(x) +
    test_reduce_xor(x) + test_reduce_nxor(x) +
    test_reduce_and(x) + test_reduce_nand(x);
  printf("Sum of reductions of x = %d\n", result);
  return result;
}
