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

#include <stdio.h>
#include <stdlib.h>

int SumArray(int Array[][100], unsigned int NumI, unsigned int NumJ) {
  unsigned i, j;
  int Result = 0;
  
  for (i = 0; i < NumI; i++)
    for (j = 0; j < NumJ; j++)
      Result += Array[i][j];
  
  return Result;
}

int main() {
  int Array[100][100];
  unsigned int i, j;
  
  for (i = 0; i < 100; i++)
    Array[i][i] = -i;
  
  for (i = 0; i < 100; i++)
    for (j = 0; j < 100; j++)
      if (j != i)
        Array[i][j] = i+j;
  
  printf("Sum(Array[%d,%d] = %d\n", 100, 100, SumArray(Array, 100, 100));
  
  return 0;
}
