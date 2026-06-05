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

/* Tail call optimizations would reverse the order of additions in func().  */

double func (const double *array)
{
  double d = *array;
  if (d == 0.0)
    return d;
  else
    return d + func (array + 1);
}

int main ()
{
  double values[] = { 0.1e-100, 1.0, -1.0, 0.0 };
  if (func (values) != 0.1e-100)
    abort ();
  exit (0);
}
