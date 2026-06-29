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

__complex__ float
__attribute__ ((noinline)) foo (__complex__ float x)
{
  return x;
}

__complex__ float
__attribute__ ((noinline)) bar (__complex__ float x)
{
  return foo (x);
}

int main()
{
  __complex__ float a, b;
  __real__ a = 9;
  __imag__ a = 42;

  b = bar (a);

  if (a != b)
    abort ();

  return 0;
}
