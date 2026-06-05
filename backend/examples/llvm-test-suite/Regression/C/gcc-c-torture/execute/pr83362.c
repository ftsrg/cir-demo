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

typedef __UINT8_TYPE__ u8;
typedef __UINT32_TYPE__ u32;

u32 a, b, d, e;
u8 c;

static u32 __attribute__ ((noinline, noclone))
foo (u32 p)
{
  do
    {
      e /= 0xfff;
      if (p > c)
	d = 0;
      e -= 3;
      e *= b <= a;
    }
  while (e >= 88030);
  return e;
}

int
main (void)
{
  u32 x = foo (1164);
  if (x != 0xfd)
    __builtin_abort ();
  return 0;
}
