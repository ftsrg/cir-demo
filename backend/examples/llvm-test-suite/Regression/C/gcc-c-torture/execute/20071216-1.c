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

/* PR rtl-optimization/34490 */

extern void abort (void);

static int x;

int
__attribute__((noinline))
bar (void)
{
  return x;
}

int
foo (void)
{
  long int b = bar ();
  if ((unsigned long) b < -4095L)
    return b;
  if (-b != 38)
    b = -2;
  return b + 1;
}

int
main (void)
{
  x = 26;
  if (foo () != 26)
    abort ();
  x = -39;
  if (foo () != -1)
    abort ();
  x = -38;
  if (foo () != -37)
    abort ();
  return 0;
}
