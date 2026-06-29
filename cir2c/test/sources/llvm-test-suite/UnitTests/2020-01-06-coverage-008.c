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

struct a {
  int64_t b;
  int64_t c;
} d;

int64_t e;

void f(struct a *g) { d = *g; }

struct a s;

int main() {
  int64_t val_5;
  int64_t val_4;
  int64_t val_3;
  int64_t val_2;
  int64_t val_1;

  val_1 = -7988785259004943837;
  val_2 = -7;
  val_3 = -7;
  val_4 = -7988785259004943837;
  val_5 = -6;

  s.b = val_4;
  s.c = val_5;
  e = val_3;
  d.b = val_1;
  d.c = val_2;
  struct a h = {0, 9};
  s = h;
  e = h.c;
  f(&h);

  printf("d.b = %" PRIi64 "\n", d.b);
  printf("d.c = %" PRIi64 "\n", d.c);
  printf("s.b = %" PRIi64 "\n", s.b);
  printf("s.c = %" PRIi64 "\n", s.c);
  printf("e = %" PRIi64 "\n", e);

  return 0;
}
