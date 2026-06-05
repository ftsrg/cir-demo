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

/* PR rtl-optimization/84071 */
/* Reported by Wilco <wilco@gcc.gnu.org> */

extern void abort (void);

typedef union
{
  signed short ss;
  unsigned short us;
  int x;
} U;

int f(int x, int y, int z, int a, U u) __attribute__((noclone, noinline));

int f(int x, int y, int z, int a, U u)
{
  return (u.ss <= 0) + u.us;
}

int main (void)
{
  U u = { .ss = -1 };

  if (f (0, 0, 0, 0, u) != (1 << sizeof (short) * 8))
    abort ();

  return 0;
}
