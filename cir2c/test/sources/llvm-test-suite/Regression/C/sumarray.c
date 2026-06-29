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

int SumArray(int Array[], int Num) {
  unsigned i, Result = 0;
  Array[34] = 1234;

  for (i = 0; i < Num; ++i)
    Result += Array[i];

  return Result;
}

int main() {
  int *Array = (int*)malloc(sizeof(int)*100);
  int i;

  for (i = 0; i < 100; i += 2)
  	Array[i] = i*4;
  for (i = 1; i < 100; i += 2)
  	Array[i] = i*2;

  printf("Produced: %d\n", SumArray(Array, 100));
  return 0;
}
