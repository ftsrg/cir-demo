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

/* PR rtl-optimization/57877 */

extern void abort (void);
int a, b, *c = &b, e, f = 6, g, h;
short d;

static unsigned char
foo (unsigned long long p1, int *p2)
{
  for (; g <= 0; g++)
    {
      short *i = &d;
      int *j = &e;
      h = *c;
      *i = h;
      *j = (*i == *p2) < p1;
    }
  return 0;
}

int
main ()
{
  foo (f, &a);
  if (e != 1)
    abort ();
  return 0;
}
