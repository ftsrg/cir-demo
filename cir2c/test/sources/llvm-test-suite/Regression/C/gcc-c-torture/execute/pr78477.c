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

/* PR rtl-optimization/78477 */

unsigned a;
unsigned short b;

unsigned
foo (unsigned x)
{
  b = x;
  a >>= (b & 1);
  b = 1 | (b << 5);
  b >>= 15;
  x = (unsigned char) b > ((2 - (unsigned char) b) & 1);
  b = 0;
  return x;
}

int
main ()
{
  if (__CHAR_BIT__ != 8 || sizeof (short) != 2 || sizeof (int) < 4)
    return 0;
  unsigned x = foo (12345);
  if (x != 0)
    __builtin_abort ();
  return 0;
}
