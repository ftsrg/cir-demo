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

int foo (int, int, int);
int bar (int, int, int);

int main (void)
{
  if (foo (5, 10, 21) != 12)
    abort ();

  if (bar (9, 12, 15) != 150)
    abort ();

  exit (0);
}

int foo (int x, int y, int z)
{
  return (x + y + z) / 3;
}

int bar (int x, int y, int z)
{
  return foo (x * x, y * y, z * z);
}
