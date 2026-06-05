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

/* { dg-require-effective-target alloca } */
void f(void * a, double y)
{
}

double g (double a, double b, double c, double d)
{
  double x, y, z;
  void *p;

  x = a + b;
  y = c * d;

  p = alloca (16);

  f(p, y);
  z = x * y * a;

  return z + b;
}

main ()
{
  double a, b, c, d;
  a = 1.0;
  b = 0.0;
  c = 10.0;
  d = 0.0;

  if (g (a, b, c, d) != 0.0)
    abort ();

  if (a != 1.0 || b != 0.0 || c != 10.0 || d != 0.0)
    abort ();

  exit (0);
}
