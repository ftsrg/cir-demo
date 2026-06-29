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

#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int test_1(int ly) __attribute__((noinline));
int test_1(int ly) {
  if (ly <= INT32_MIN)
    ly = INT32_MIN + 1;

  return ly;
}

int test_2(int ly) __attribute__((noinline));
int test_2(int ly) {
  if (INT32_MIN >= ly)
    ly = INT32_MIN + 1;

  return ly;
}

int main () {
  int x = 37;

  printf ("x = %d (0x%x)\n", x, x);

  int r1 = test_1(x);
  printf ("test_1(x) = %d (0x%x)\n", r1, r1);

  int r2 = test_2(x);
  printf ("test_2(x) = %d (0x%x)\n", r2, r2);

  return 0;
}
