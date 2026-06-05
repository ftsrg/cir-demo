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

/* { dg-require-effective-target int32plus } */

/* PR tree-optimization/78170.
   Check that sign-extended store to a bitfield
   doesn't overwrite other fields.  */

int a, b, d;

struct S0
{
  int f0;
  int f1;
  int f2;
  int f3;
  int f4;
  int f5:15;
  int f6:17;
  int f7:2;
  int f8:30;
} c;

void fn1 ()
{
  d = b = 1;
  for (; b; b = a)
    {
      struct S0 e = { 0, 0, 0, 0, 0, 0, 1, 0, 1 };
      c = e;
      c.f6 = -1;
    }
}

int main ()
{
  fn1 ();
  if (c.f7 != 0)
    __builtin_abort ();
  return 0;
}
