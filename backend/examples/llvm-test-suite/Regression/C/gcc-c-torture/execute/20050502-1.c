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

/* PR rtl-optimization/21330 */

extern void abort (void);
extern int strcmp (const char *, const char *);

int
__attribute__((noinline))
bar (const char **x)
{
  return *(*x)++;
}

int
__attribute__((noinline))
baz (int c)
{
  return c != '@';
}

void
__attribute__((noinline))
foo (const char **w, char *x, _Bool y, _Bool z)
{
  char c = bar (w);
  int i = 0;

  while (1)
    {
      x[i++] = c;
      c = bar (w);
      if (y && c == '\'')
        break;
      if (z && c == '\"')
        break;
      if (!y && !z && !baz (c))
        break;
    }
   x[i] = 0;
}

int
main (void)
{
  char buf[64];
  const char *p;
  p = "abcde'fgh";
  foo (&p, buf, 1, 0);
  if (strcmp (p, "fgh") != 0 || strcmp (buf, "abcde") != 0)
    abort ();
  p = "ABCDEFG\"HI";
  foo (&p, buf, 0, 1);
  if (strcmp (p, "HI") != 0 || strcmp (buf, "ABCDEFG") != 0)
    abort ();
  p = "abcd\"e'fgh";
  foo (&p, buf, 1, 1);
  if (strcmp (p, "e'fgh") != 0 || strcmp (buf, "abcd") != 0)
    abort ();
  p = "ABCDEF'G\"HI";
  foo (&p, buf, 1, 1);
  if (strcmp (p, "G\"HI") != 0 || strcmp (buf, "ABCDEF") != 0)
    abort ();
  p = "abcdef@gh";
  foo (&p, buf, 0, 0);
  if (strcmp (p, "gh") != 0 || strcmp (buf, "abcdef") != 0)
    abort ();
  return 0;
}
