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

struct A { int a; char b[]; };
union B { struct A a; char b[sizeof (struct A) + 31]; };
union B b = { { 1, "123456789012345678901234567890" } };
union B c = { { 2, "123456789012345678901234567890" } };

__attribute__((noinline, noclone)) void
foo (int *x[2])
{
  x[0] = &b.a.a;
  x[1] = &c.a.a;
}

int
main ()
{
  int *x[2];
  foo (x);
  if (*x[0] != 1 || *x[1] != 2)
    __builtin_abort ();
  return 0;
}
