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

/* PR tree-optimization/65369 */
#include <stdint.h>

static const char data[] =
  "12345678901234567890123456789012345678901234567890"
  "123456789012345678901234567890";

__attribute__ ((noinline))
static void foo (const unsigned int *buf)
{
  if (__builtin_memcmp (buf, data, 64))
    __builtin_abort ();
}

__attribute__ ((noinline))
static void bar (const unsigned char *block)
{
  uint32_t buf[16];
  __builtin_memcpy (buf +  0, block +  0, 4);
  __builtin_memcpy (buf +  1, block +  4, 4);
  __builtin_memcpy (buf +  2, block +  8, 4);
  __builtin_memcpy (buf +  3, block + 12, 4);
  __builtin_memcpy (buf +  4, block + 16, 4);
  __builtin_memcpy (buf +  5, block + 20, 4);
  __builtin_memcpy (buf +  6, block + 24, 4);
  __builtin_memcpy (buf +  7, block + 28, 4);
  __builtin_memcpy (buf +  8, block + 32, 4);
  __builtin_memcpy (buf +  9, block + 36, 4);
  __builtin_memcpy (buf + 10, block + 40, 4);
  __builtin_memcpy (buf + 11, block + 44, 4);
  __builtin_memcpy (buf + 12, block + 48, 4);
  __builtin_memcpy (buf + 13, block + 52, 4);
  __builtin_memcpy (buf + 14, block + 56, 4);
  __builtin_memcpy (buf + 15, block + 60, 4);
  foo (buf);
}

int
main ()
{
  unsigned char input[sizeof data + 16] __attribute__((aligned (16)));
  __builtin_memset (input, 0, sizeof input);
  __builtin_memcpy (input + 1, data, sizeof data);
  bar (input + 1);
  return 0;
}
