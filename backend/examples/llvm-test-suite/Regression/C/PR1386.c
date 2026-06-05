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
#include <stdint.h>

struct X {
  unsigned char pad : 4;
  uint64_t a : 64;
  uint64_t b : 60;
} __attribute__((packed));

int main (void)
{
  struct X x;
  uint64_t bad_bits;

  x.pad = 255;
  x.a = -1ULL;
  x.b = -1ULL;

  bad_bits = ((uint64_t)-1ULL) ^ *(1+(uint64_t *) &x);
  printf("bad bits: %llx\n", bad_bits);
  return bad_bits != 0;
}
