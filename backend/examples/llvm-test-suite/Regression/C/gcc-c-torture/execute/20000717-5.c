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

typedef struct trio { int a, b, c; } trio;

int
bar (int i, int j, int k, trio t)
{
  if (t.a != 1 || t.b != 2 || t.c != 3 ||
      i != 4 || j != 5 || k != 6)
    abort ();
}

int
foo (trio t, int i, int j, int k)
{
  return bar (i, j, k, t);
}

main ()
{
  trio t = { 1, 2, 3 };

  foo (t, 4, 5, 6);
  exit (0);
}
