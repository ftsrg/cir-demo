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

/* PR tree-optimization/88693 */

__attribute__((noipa)) void
foo (char *p)
{
  if (__builtin_strlen (p) != 9)
    __builtin_abort ();
}

__attribute__((noipa)) void
quux (char *p)
{
  int i;
  for (i = 0; i < 100; i++)
    if (p[i] != 'x')
      __builtin_abort ();
}

__attribute__((noipa)) void
qux (void)
{
  char b[100];
  __builtin_memset (b, 'x', sizeof (b));
  quux (b);
}

__attribute__((noipa)) void
bar (void)
{
  static unsigned char u[9] = "abcdefghi";
  char b[100];
  __builtin_memcpy (b, u, sizeof (u));
  b[sizeof (u)] = 0;
  foo (b);
}

__attribute__((noipa)) void
baz (void)
{
  static unsigned char u[] = { 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r' };
  char b[100];
  __builtin_memcpy (b, u, sizeof (u));
  b[sizeof (u)] = 0;
  foo (b);
}

int
main ()
{
  qux ();
  bar ();
  baz ();
  return 0;
}
