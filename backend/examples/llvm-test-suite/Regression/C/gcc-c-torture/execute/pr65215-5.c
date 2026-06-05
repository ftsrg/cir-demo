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

/* PR tree-optimization/65215 */

__attribute__((noinline, noclone)) unsigned int
foo (unsigned char *p)
{
  return ((unsigned int) p[0] << 24) | (p[1] << 16) | (p[2] << 8) | p[3];
}

__attribute__((noinline, noclone)) unsigned int
bar (unsigned char *p)
{
  return ((unsigned int) p[3] << 24) | (p[2] << 16) | (p[1] << 8) | p[0];
}

struct S { unsigned int a; unsigned char b[5]; };

int
main ()
{
  struct S s = { 1, { 2, 3, 4, 5, 6 } };
  if (__CHAR_BIT__ != 8 || sizeof (unsigned int) != 4)
    return 0;
  if (foo (&s.b[1]) != 0x03040506U
      || bar (&s.b[1]) != 0x06050403U)
    __builtin_abort ();
  return 0;
}
