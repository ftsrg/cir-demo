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

/* PR middle-end/38422 */

extern void abort (void);

struct S
{
  int s : (sizeof (int) * __CHAR_BIT__ - 2);
} s;

void
foo (void)
{
  s.s *= 2;
}

int
main ()
{
  s.s = 24;
  foo ();
  if (s.s != 48)
    abort ();
  return 0;
}
