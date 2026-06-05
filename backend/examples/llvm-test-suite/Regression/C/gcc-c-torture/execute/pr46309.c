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

/* PR tree-optimization/46309 */

extern void abort (void);

unsigned int *q;

__attribute__((noinline, noclone)) void
bar (unsigned int *p)
{
  if (*p != 2 && *p != 3)
    (!(!(*q & 263) || *p != 1)) ? abort () : 0;
}

int
main ()
{
  unsigned int x, y;
  asm volatile ("" : : : "memory");
  x = 2;
  bar (&x);
  x = 3;
  bar (&x);
  y = 1;
  x = 0;
  q = &y;
  bar (&x);
  y = 0;
  x = 1;
  bar (&x);
  return 0;
}
