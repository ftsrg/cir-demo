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
extern void abort();

int bork[4][3] = { 1,2,3,4,5,6,7,8,9,10,11,12};
void function(short width, int data[][width]) {
  int i,j;
  for (i = 0; i < 4; i++)
    for (j = 0; j < width; j++)
      if (bork[i][j] != data[i][j])
	abort();
}


void test() {
     function(3, bork);
}

int bork2[2][3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12, 13,14,15,16,17,18,19,20,21,22,23,24};
void function2(short width, short width2, int data[][width][width2]) {
  int i,j,k;
  for (i = 0; i < 2; i++)
    for (j = 0; j < width; j++)
      for (k = 0; k < width2; k++)
        if (bork2[i][j][k] != data[i][j][k])
          abort();
}


void test2() {
     function2(3, 4, bork2);
}
int main() {
  test();
  test2();
  return 0;
}
