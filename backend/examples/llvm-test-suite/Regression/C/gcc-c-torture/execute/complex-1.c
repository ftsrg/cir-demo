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

double
g0 (double x)
{
  return 1.0;
}

double
g1 (double x)
{
  return -1.0;
}

double
g2 (double x)
{
  return 0.0;
}

__complex__ double
xcexp (__complex__ double x)
{
  double r;

  r = g0 (__real__ x);
  __real__ x = r * g1 (__imag__ x);
  __imag__ x = r * g2 (__imag__ x);
  return x;
}

main ()
{
  __complex__ double x;

  x = xcexp (1.0i);
  if (__real__ x != -1.0)
    abort ();
  if (__imag__ x != 0.0)
    abort ();
  exit (0);
}
