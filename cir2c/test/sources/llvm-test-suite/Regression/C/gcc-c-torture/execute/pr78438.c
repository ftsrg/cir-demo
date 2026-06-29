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

/* PR target/78438 */

char a = 0;
int b = 197412621;

__attribute__ ((noinline, noclone))
void foo ()
{
  a = 0 > (short) (b >> 11);
}

int
main ()
{
  asm volatile ("" : : : "memory");
  if (__CHAR_BIT__ != 8 || sizeof (short) != 2 || sizeof (int) < 4)
    return 0;
  foo ();
  if (a != 0)
    __builtin_abort ();
  return 0;
}
