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

/* PR tree-optimization/57321 */

int a = 1, *b, **c;

static int
foo (int *p)
{
  if (*p == a)
    {
      int *i[7][5] = { { 0 } };
      int **j[1][1];
      j[0][0] = &i[0][0];
      *b = &p != c;
    }
  return 0;
}

int
main ()
{
  int i = 0;
  foo (&i);
  return 0;
}
