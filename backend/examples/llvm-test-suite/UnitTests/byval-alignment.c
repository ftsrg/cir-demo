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

struct s0 {
  long double x, y;
};

struct s0 g0;

void f0(int i, struct s0 y) __attribute__((noinline));
void f0(int i, struct s0 y) {
  g0 = y;
  g0.x += i;
  g0.y += i;
}

int main() {
  struct s0 a = { 1., 2. };
  f0(1, a);
  printf("g0.x: %.4f, g0.y: %.4f\n", (double) g0.x, (double) g0.y);
  return 0;
}
