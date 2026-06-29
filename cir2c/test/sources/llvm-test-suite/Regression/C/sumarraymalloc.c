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

#include <stdlib.h>
#include <stdio.h>

#define SIZE 100

static int SumArray(int *Array, unsigned Num) {
  int Result = 0;
  unsigned i;
  for (i = 0; i < Num; ++i)
    Result += Array[i];

  return Result;
}

static int SumArray2(int *Array, unsigned Num) {
  int Result = 0;
  unsigned i;
  for (i = 0; i < Num; ++i)
    Result += *Array++;

  return Result;
}

static void FillArray(int *Array, unsigned Num) {
  unsigned i;
  for (i = 0; i < Num; ++i)
    Array[i] = i;
}

int
main(int argc, char** argv)
{
  int size;
  int *MyArray;
  
  size = (argc < 2)? SIZE : atoi(argv[1]);
  MyArray = malloc(sizeof(int)* size);
  
  FillArray(MyArray, size);
  printf("Sum1 = %d\n", SumArray(MyArray, SIZE));
  printf("Sum2 = %d\n", SumArray2(MyArray, SIZE));
  free(MyArray);
  return(0);
}
