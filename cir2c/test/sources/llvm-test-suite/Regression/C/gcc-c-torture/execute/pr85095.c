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

/* PR target/85095 */

__attribute__((noipa)) unsigned long
f1 (unsigned long a, unsigned long b)
{
  unsigned long i = __builtin_add_overflow (a, b, &a);
  return a + i;
}

__attribute__((noipa)) unsigned long
f2 (unsigned long a, unsigned long b)
{
  unsigned long i = __builtin_add_overflow (a, b, &a);
  return a - i;
}

__attribute__((noipa)) unsigned long
f3 (unsigned int a, unsigned int b)
{
  unsigned int i = __builtin_add_overflow (a, b, &a);
  return a + i;
}

__attribute__((noipa)) unsigned long
f4 (unsigned int a, unsigned int b)
{
  unsigned int i = __builtin_add_overflow (a, b, &a);
  return a - i;
}

int
main ()
{
  if (f1 (16UL, -18UL) != -2UL
      || f1 (16UL, -17UL) != -1UL
      || f1 (16UL, -16UL) != 1UL
      || f1 (16UL, -15UL) != 2UL
      || f2 (24UL, -26UL) != -2UL
      || f2 (24UL, -25UL) != -1UL
      || f2 (24UL, -24UL) != -1UL
      || f2 (24UL, -23UL) != 0UL
      || f3 (32U, -34U) != -2U
      || f3 (32U, -33U) != -1U
      || f3 (32U, -32U) != 1U
      || f3 (32U, -31U) != 2U
      || f4 (35U, -37U) != -2U
      || f4 (35U, -36U) != -1U
      || f4 (35U, -35U) != -1U
      || f4 (35U, -34U) != 0U)
    __builtin_abort ();
  return 0;
}
