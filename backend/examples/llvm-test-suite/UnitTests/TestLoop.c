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

int foo(int i, int j) {
  printf("%d\n", j);
  return j;
}


int main(int level) {
    int i;
    int fval[4];
    //for (i = 3; i < 10; i--)

    for (i = 3; i >= 0; i--)
      fval[i] = foo(level - 1, level*4 + i + 1); 

    for (i = 0; i < 4; ++i)
      foo(0, fval[i]);
    return 0;
}
