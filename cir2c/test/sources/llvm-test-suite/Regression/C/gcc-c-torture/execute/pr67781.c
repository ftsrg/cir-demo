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

/* { dg-require-effective-target int32plus } */
#ifdef __UINT32_TYPE__
typedef __UINT32_TYPE__ uint32_t;
#else
typedef unsigned uint32_t;
#endif

#ifdef __UINT8_TYPE__
typedef __UINT8_TYPE__ uint8_t;
#else
typedef unsigned char uint8_t;
#endif

struct
{
  uint32_t a;
  uint8_t b;
} s = { 0x123456, 0x78 };

int pr67781()
{
  uint32_t c = (s.a << 8) | s.b;
  return c;
}

int
main ()
{
  if (sizeof (uint32_t) * __CHAR_BIT__ != 32)
    return 0;

  if (pr67781 () != 0x12345678)
    __builtin_abort ();
  return 0;
}
