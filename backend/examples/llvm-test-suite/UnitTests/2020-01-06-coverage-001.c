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

int32_t *a;
uint8_t b = 7;
static int32_t **c = &a;
uint8_t *p;
int32_t x;

void d() {
  **c &= 8;
  uint8_t *e = &b;
  p = e;
  x = (*e &= 1) && *a && (*e = 0);
}

int main() {
  int32_t val_3;
  int8_t val_2;
  uint8_t temp_2;
  int32_t val_1;
  int32_t temp_1;

  val_1 = 1149798655;
  val_2 = -125;
  val_3 = -67108864;
  temp_1 = val_1;
  temp_2 = val_2;

  x = val_3;
  p = &temp_2;
  a = &temp_1;
  d();

  printf("b = %" PRIu8 "\n", b);
  printf("x = %" PRIi32 "\n", x);

  return 0;
}
