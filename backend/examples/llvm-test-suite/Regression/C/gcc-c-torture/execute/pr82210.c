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

/* PR c/82210 */
/* { dg-require-effective-target alloca } */

void
foo (int size)
{
  int i;
  struct S {
    __attribute__((aligned (16))) struct T { short c; } a[size];
    int b[size];
  } s;

  for (i = 0; i < size; i++)
    s.a[i].c = 0x1234;
  for (i = 0; i < size; i++)
    s.b[i] = 0;
  for (i = 0; i < size; i++)
    if (s.a[i].c != 0x1234 || s.b[i] != 0)
      __builtin_abort ();
}

int
main ()
{
  foo (15);
  return 0;
}
