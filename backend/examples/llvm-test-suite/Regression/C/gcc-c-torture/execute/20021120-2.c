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

int g1, g2;

void foo (int x)
{
  int y;

  if (x)
    y = 793;
  else
    y = 793;
  g1 = 7930 / y;
  g2 = 7930 / x;
}

int main ()
{
  foo (793);
  if (g1 != 10 || g2 != 10)
    abort ();
  exit (0);
}
