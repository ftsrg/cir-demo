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

struct s { int f[4]; };

int foo (struct s s, int x1, int x2, int x3, int x4, int x5, int x6, int x7)
{
  return s.f[3] + x7;
}

int main ()
{
  struct s s = { 1, 2, 3, 4 };

  if (foo (s, 100, 200, 300, 400, 500, 600, 700) != 704)
    abort ();
  exit (0);
}
