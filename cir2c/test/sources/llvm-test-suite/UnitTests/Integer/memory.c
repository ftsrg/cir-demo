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

//===--- memory.c --- Test Cases for Bit Accurate Types -------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This is a test for memory malloc and free operations. It tests
// non-regular bitwidth data and structures.
//
//===----------------------------------------------------------------------===//


#include <stdio.h>
#include <stdlib.h>

typedef int __attribute__ ((bitwidth(31))) int31;
typedef int __attribute__ ((bitwidth(3))) int3;

typedef struct myStruct{int31 x; int3 y;} myStruct;

void mem_test(int31 num)
{
  int inum = num;
  unsigned int i = 0;
    
  int31* array = (int31*) malloc(sizeof(int31) * inum);
  for(i=0; i< num; ++i){
    array[i] = i;
  }
    
  free(array);
}

void mem_test2()
{
  myStruct* ptr = malloc(sizeof(myStruct));
  ptr->y = 0;
  if(ptr->y != 0)
    printf("error\n");
  ptr->x = ++(ptr->y);
  ptr->x *= 2;
  if(ptr->x - ptr->y != 1)
    printf("error\n");
  free(ptr);
}

int main()
{
  mem_test(0xff);
  mem_test2();
  return 0;
}
