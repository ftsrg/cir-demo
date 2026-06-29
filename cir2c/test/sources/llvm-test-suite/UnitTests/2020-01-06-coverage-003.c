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

int8_t a;
int32_t x;

void b() { x = (uint64_t)4073709551607 > a || a != 0; }

int main() {
  int32_t val_2;
  int8_t val_1;

  val_1 = -7;
  val_2 = 1695154176;

  x = val_2;
  a = val_1;
  b();

  printf("a = %" PRIi8 "\n", a);
  printf("x = %" PRIi32 "\n", x);

  return 0;
}
