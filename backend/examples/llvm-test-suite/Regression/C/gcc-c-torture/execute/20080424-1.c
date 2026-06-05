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

/* PR tree-optimization/36008 */

extern void abort (void);

int g[48][3][3];

void __attribute__ ((noinline))
bar (int x[3][3], int y[3][3])
{
  static int i;
  if (x != g[i + 8] || y != g[i++])
    abort ();
}

static inline void __attribute__ ((always_inline))
foo (int x[][3][3])
{
  int i;
  for (i = 0; i < 8; i++)
    {
      int k = i + 8;
      bar (x[k], x[k - 8]);
    }
}

int
main ()
{
  foo (g);
  return 0;
}
