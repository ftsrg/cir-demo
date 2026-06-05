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

/* { dg-require-effective-target indirect_jumps } */
/* { dg-require-effective-target label_values } */
/* { dg-skip-if "label differences not supported" { avr-*-* } } */

/* PR rtl-optimization/70460 */

int c;

__attribute__((noinline, noclone)) void
foo (int x)
{
  static int b[] = { &&lab1 - &&lab0, &&lab2 - &&lab0 };
  void *a = &&lab0 + b[x];
  goto *a;
lab1:
  c += 2;
lab2:
  c++;
lab0:
  ;
}

int
main ()
{
  foo (0);
  if (c != 3)
    __builtin_abort ();
  foo (1);
  if (c != 4)
    __builtin_abort ();
  return 0;
}
