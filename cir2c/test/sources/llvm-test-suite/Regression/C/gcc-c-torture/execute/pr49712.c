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

/* PR tree-optimization/49712 */

int a[2], b, c, d, e;

void
foo (int x, int y)
{
}

int
bar (void)
{
  int i;
  for (; d <= 0; d = 1)
    for (i = 0; i < 4; i++)
      for (e = 0; e; e = 1)
	;
  return 0;
}

int
main ()
{
  for (b = 0; b < 2; b++)
    while (c)
      foo (a[b] = 0, bar ());
  return 0;
}
