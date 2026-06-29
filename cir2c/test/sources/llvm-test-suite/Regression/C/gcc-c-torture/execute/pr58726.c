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

/* PR rtl-optimization/58726 */

int a, c;
union { int f1; int f2 : 1; } b;

short
foo (short p)
{
  return p < 0 ? p : a;
}

int
main ()
{
  if (sizeof (short) * __CHAR_BIT__ != 16
      || sizeof (int) * __CHAR_BIT__ != 32)
    return 0;
  b.f1 = 56374;
  unsigned short d;
  int e = b.f2;
  d = e == 0 ? b.f1 : 0;
  c = foo (d);
  if (c != (short) 56374)
    __builtin_abort ();
  return 0;
}
