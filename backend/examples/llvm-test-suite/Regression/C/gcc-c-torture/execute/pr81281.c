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

/* PR sanitizer/81281 */

void
foo (unsigned p, unsigned a, unsigned b)
{
  unsigned q = p + 7;
  if (a - (1U + __INT_MAX__) >= 2)
    __builtin_unreachable ();
  int d = p + b;
  int c = p + a;
  if (c - d != __INT_MAX__)
    __builtin_abort ();
}

void
bar (unsigned p, unsigned a)
{
  unsigned q = p + 7;
  if (a - (1U + __INT_MAX__) >= 2)
    __builtin_unreachable ();
  int c = p;
  int d = p + a;
  if (c - d != -__INT_MAX__ - 1)
    __builtin_abort ();
}

int
main ()
{
  foo (-1U, 1U + __INT_MAX__, 1U);
  bar (-1U, 1U + __INT_MAX__);
  return 0;
}
