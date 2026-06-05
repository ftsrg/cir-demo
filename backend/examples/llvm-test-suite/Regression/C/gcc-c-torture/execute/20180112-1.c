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

/* PR rtl-optimization/83565 */
/* Testcase by Sergei Trofimovich <slyfox@inbox.ru> */

extern void abort (void);

typedef __UINT32_TYPE__ u32;

u32 bug (u32 * result) __attribute__((noinline));
u32 bug (u32 * result)
{
  volatile u32 ss = 0xFFFFffff;
  volatile u32 d  = 0xEEEEeeee;
  u32 tt = d & 0x00800000;
  u32 r  = tt << 8;

  r = (r >> 31) | (r <<  1);

  u32 u = r^ss;
  u32 off = u >> 1;

  *result = tt;
  return off;
}

int main(void)
{
  u32 l;
  u32 off = bug(&l);
  if (off != 0x7fffffff)
    abort ();
  return 0;
}
