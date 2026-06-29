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

extern void abort (void);
struct T { int t; int r[8]; };
struct S { int a; int b; int c[6]; struct T d; };

__attribute__((noinline)) void
foo (struct S *s)
{
  *s = (struct S) { s->b, s->a, { 0, 0, 0, 0, 0, 0 }, s->d };
}

int
main (void)
{
  struct S s = { 6, 12, { 1, 2, 3, 4, 5, 6 },
		 { 7, { 8, 9, 10, 11, 12, 13, 14, 15 } } };
  foo (&s);
  if (s.a != 12 || s.b != 6
      || s.c[0] || s.c[1] || s.c[2] || s.c[3] || s.c[4] || s.c[5])
    abort ();
  if (s.d.t != 7 || s.d.r[0] != 8 || s.d.r[1] != 9 || s.d.r[2] != 10
      || s.d.r[3] != 11 || s.d.r[4] != 12 || s.d.r[5] != 13
      || s.d.r[6] != 14 || s.d.r[7] != 15)
    abort ();
  return 0;
}
