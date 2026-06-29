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

/* Test failed on an architecture that:

   - had 16-bit registers,
   - passed 64-bit structures in registers,
   - only allowed SImode values in even numbered registers.

   Before reload, s.i2 in foo() was represented as:

	(subreg:SI (reg:DI 0) 2)

   find_dummy_reload would return (reg:SI 1) for the subreg reload,
   despite that not being a valid register.  */

struct s
{
  short i1;
  long i2;
  short i3;
};

struct s foo (struct s s)
{
  s.i2++;
  return s;
}

int main ()
{
  struct s s = foo ((struct s) { 1000, 2000L, 3000 });
  if (s.i1 != 1000 || s.i2 != 2001L || s.i3 != 3000)
    abort ();
  exit (0);
}
