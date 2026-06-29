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
#include <stdio.h>
#include <inttypes.h>

#pragma pack(1)

struct s {
  int : 28;
  unsigned : 17;
  unsigned a : 25;
} b;

volatile int32_t c;
int32_t x;

void d() {
  if (8 < b.a)
    x = c;
}

int main() {
  int32_t val_3;
  int32_t val_2;
  uint32_t val_1;

  val_1 = 2097152;
  val_2 = 0;
  val_3 = 0;

  x = val_3;
  c = val_2;
  b.a = val_1;
  d();

  printf("b.a = %u\n", b.a);
  printf("c = %" PRIi32 "\n", c);
  printf("x = %" PRIi32 "\n", x);

  return 0;
}
