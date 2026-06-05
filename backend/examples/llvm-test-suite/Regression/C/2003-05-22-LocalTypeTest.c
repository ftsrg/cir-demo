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

struct sometimes {
  short offset; short bit;
  short live_length; short calls_crossed;
} Y;

int main() {
  int X;
  {
    struct sometimes { int X, Y; } S;
    S.X = 1;
    X = S.X;
  }
  { 
    struct sometimes { signed char X; } S;
    S.X = -1;
    X += S.X;
  }
  X += Y.offset;

  printf("Result is %d\n", X);
  return X;
}
