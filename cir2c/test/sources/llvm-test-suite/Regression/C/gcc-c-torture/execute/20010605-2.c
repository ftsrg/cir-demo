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

void foo (), bar (), baz ();
int main ()
{
  __complex__ double x;
  __complex__ float y;
  __complex__ long double z;
  __real__ x = 1.0;
  __imag__ x = 2.0;
  foo (x);
  __real__ y = 3.0f;
  __imag__ y = 4.0f;
  bar (y);
  __real__ z = 5.0L;
  __imag__ z = 6.0L;
  baz (z);
  exit (0);
}

void foo (__complex__ double x)
{
  if (__real__ x != 1.0 || __imag__ x != 2.0)
    abort ();
}

void bar (__complex__ float x)
{
  if (__real__ x != 3.0f || __imag__ x != 4.0f)
    abort ();
}

void baz (__complex__ long double x)
{
  if (__real__ x != 5.0L || __imag__ x != 6.0L)
    abort ();
}
