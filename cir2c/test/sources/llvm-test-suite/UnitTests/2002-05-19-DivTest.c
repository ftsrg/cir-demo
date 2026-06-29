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


#ifndef __STDC_LIMIT_MACROS
#define __STDC_LIMIT_MACROS 1
#endif
#include <inttypes.h>

extern int printf(const char *, ...);

void testL(int64_t Arg) {
  printf("%d\n", (int) (Arg / ((int64_t)1 << 4)));
  printf("%d\n", (int) (Arg / ((int64_t)1 << 46)));
}

void test(int Arg) {
  printf("%d\n", Arg / (1 << 0));
  printf("%d\n", Arg / (1 << 4));
  printf("%d\n", Arg / (1 << 18));
  printf("%d\n", Arg / (1 << 30));
}

int main() {
  int B20 = - (1 << 20);
  int64_t B53 = - ((int64_t)1 << 53);

  test(B20 + 32);
  test(B20 + 33);

  testL(B53 + 64);
  testL(B53 + 65);

  return 0;
}
