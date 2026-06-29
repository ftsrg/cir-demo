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

/* PR tree-optimization/52760 */

struct T { unsigned short a, b, c, d; };

__attribute__((noinline, noclone)) void
foo (int x, struct T *y)
{
  int i;

  for (i = 0; i < x; i++)
    {
      y[i].a = ((0x00ff & y[i].a >> 8) | (0xff00 & y[i].a << 8));
      y[i].b = ((0x00ff & y[i].b >> 8) | (0xff00 & y[i].b << 8));
      y[i].c = ((0x00ff & y[i].c >> 8) | (0xff00 & y[i].c << 8));
      y[i].d = ((0x00ff & y[i].d >> 8) | (0xff00 & y[i].d << 8));
    }
}

int
main ()
{
  struct T t = { 0x0001, 0x0203, 0x0405, 0x0607 };
  foo (1, &t);
  if (t.a != 0x0100 || t.b != 0x0302 || t.c != 0x0504 || t.d != 0x0706)
    __builtin_abort ();
  return 0;
}
