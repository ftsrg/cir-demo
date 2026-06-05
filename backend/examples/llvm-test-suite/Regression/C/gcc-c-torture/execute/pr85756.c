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

/* PR target/85756 */

#if __CHAR_BIT__ == 8 && __SIZEOF_SHORT__ == 2 && __SIZEOF_INT__ == 4
int a, c, *e, f, h = 10;
short b;
unsigned int p;

__attribute__((noipa)) void
bar (int a)
{
  asm volatile ("" : : "r" (a) : "memory");
}

void
foo ()
{
  unsigned j = 1, m = 430523;
  int k, n = 1, *l = &h;
lab:
  p = m;
  m = -((~65535U | j) - n);
  f = b << ~(n - 8);
  n = (m || b) ^ f;
  j = p;
  if (p < m)
    *l = k < 3;
  if (!n)
    l = &k;
  if (c)
    {
      bar (a);
      goto lab;
    }
  if (!*l)
    *e = 1;
}

int
main ()
{
  foo ();
  return 0;
}
#else
int
main ()
{
  return 0;
}
#endif
