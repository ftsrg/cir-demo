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

/* PR tree-optimization/59387 */

int a, *d, **e = &d, f;
char c;
struct S { int f1; } b;

int
main ()
{
  for (a = -19; a; a++)
    {
      for (b.f1 = 0; b.f1 < 24; b.f1++)
	c--;
      *e = &f;
      if (!d)
	return 0;
    }
  return 0;
}
