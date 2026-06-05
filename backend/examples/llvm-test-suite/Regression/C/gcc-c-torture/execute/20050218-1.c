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

/* PR tree-optimization/19828 */
typedef __SIZE_TYPE__ size_t;
extern size_t strlen (const char *s);
extern int strncmp (const char *s1, const char *s2, size_t n);
extern void abort (void);

const char *a[16] = { "a", "bc", "de", "fgh" };

int
foo (char *x, const char *y, size_t n)
{
  size_t i, j = 0;
  for (i = 0; i < n; i++)
    {
      if (strncmp (x + j, a[i], strlen (a[i])) != 0)
        return 2;
      j += strlen (a[i]);
      if (y)
        j += strlen (y);
    }
  return 0;
}

int
main (void)
{
  if (foo ("abcde", (const char *) 0, 3) != 0)
    abort ();
  return 0;
}
