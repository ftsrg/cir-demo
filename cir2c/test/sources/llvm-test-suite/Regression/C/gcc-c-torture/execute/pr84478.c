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

/* PR tree-optimization/84478 */

long poolptr;
unsigned char *strpool;
static const char *poolfilearr[] = {
  "mu",
  "",
#define A "x",
#define B A "xx", A A "xxx", A A A A A
#define C B B B B B B B B B B
#define D C C C C C C C C C C
  D C C C C C C C B B B
 ((void *)0)
};

__attribute__((noipa)) long
makestring (void)
{
  return 1;
}

__attribute__((noipa)) long
loadpoolstrings (long spare_size)
{
  const char *s;
  long g = 0;
  int i = 0, j = 0;
  while ((s = poolfilearr[j++]))
    {
      int l = __builtin_strlen (s);
      i += l;
      if (i >= spare_size) return 0;
      while (l-- > 0) strpool[poolptr++] = *s++;
      g = makestring ();
    }
  return g;
}

int
main ()
{
  strpool = __builtin_malloc (4000);
  if (!strpool)
    return 0;
  asm volatile ("" : : : "memory");
  volatile int r = loadpoolstrings (4000);
  __builtin_free (strpool);
  return 0;
}
