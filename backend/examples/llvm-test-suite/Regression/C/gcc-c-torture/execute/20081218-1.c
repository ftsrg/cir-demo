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

struct A { int i, j; char pad[512]; } a;

int __attribute__((noinline))
foo (void)
{
  __builtin_memset (&a, 0x26, sizeof a);
  return a.i;
}

void __attribute__((noinline))
bar (void)
{
  __builtin_memset (&a, 0x36, sizeof a);
  a.i = 0x36363636;
  a.j = 0x36373636;
}

int
main (void)
{
  int i;
  if (sizeof (int) != 4 || __CHAR_BIT__ != 8)
    return 0;

  if (foo () != 0x26262626)
    __builtin_abort ();
  for (i = 0; i < sizeof a; i++)
    if (((char *)&a)[i] != 0x26)
      __builtin_abort ();

  bar ();
  if (a.j != 0x36373636)
    __builtin_abort ();
  a.j = 0x36363636;
  for (i = 0; i < sizeof a; i++)
    if (((char *)&a)[i] != 0x36)
      __builtin_abort ();
  return 0;
}
