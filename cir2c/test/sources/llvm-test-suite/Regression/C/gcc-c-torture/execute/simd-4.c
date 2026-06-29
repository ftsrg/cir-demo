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

/* { dg-require-effective-target stdint_types } */
#include <stdint.h>
typedef int32_t __attribute__((vector_size(8))) v2si;
int64_t s64;

static inline int64_t
__ev_convert_s64 (v2si a)
{
  return (int64_t) a;
}

int main()
{
  union { int64_t ll; int32_t i[2]; } endianness_test;
  endianness_test.ll = 1;
  int32_t little_endian = endianness_test.i[0];
  s64 = __ev_convert_s64 ((v2si){1,0xffffffff});
  if (s64 != (little_endian ? 0xffffffff00000001LL : 0x1ffffffffLL))
    abort ();
  return 0;
}
