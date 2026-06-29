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

uint32_t a;
const uint32_t b = -1L, c;
int16_t d;

void e() {
  uint32_t f;
  uint32_t g;
  f = b / a;
  g = f;
  d = g < c;
}

int main() {
  int16_t val_2;
  uint32_t val_1;

  val_1 = 3;
  val_2 = -32767;

  d = val_2;
  a = val_1;
  e();

  printf("a = %" PRIu32 "\n", a);
  printf("b = %" PRIu32 "\n", b);
  printf("c = %" PRIu32 "\n", c);
  printf("d = %" PRIi16 "\n", d);

  return 0;
}
