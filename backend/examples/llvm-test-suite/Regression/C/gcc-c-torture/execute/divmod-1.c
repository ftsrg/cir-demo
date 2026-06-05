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

div1 (signed char x)
{
  return x / -1;
}

div2 (signed short x)
{
  return x / -1;
}

div3 (signed char x, signed char y)
{
  return x / y;
}

div4 (signed short x, signed short y)
{
  return x / y;
}

mod1 (signed char x)
{
  return x % -1;
}

mod2 (signed short x)
{
  return x % -1;
}

mod3 (signed char x, signed char y)
{
  return x % y;
}

mod4 (signed short x, signed short y)
{
  return x % y;
}

signed long
mod5 (signed long x, signed long y)
{
  return x % y;
}

unsigned long
mod6 (unsigned long x, unsigned long y)
{
  return x % y;
}

main ()
{
  if (div1 (-(1 << 7)) != 1 << 7)
    abort ();
  if (div2 (-(1 << 15)) != 1 << 15)
    abort ();
  if (div3 (-(1 << 7), -1) != 1 << 7)
    abort ();
  if (div4 (-(1 << 15), -1) != 1 << 15)
    abort ();
  if (mod1 (-(1 << 7)) != 0)
    abort ();
  if (mod2 (-(1 << 15)) != 0)
    abort ();
  if (mod3 (-(1 << 7), -1) != 0)
    abort ();
  if (mod4 (-(1 << 15), -1) != 0)
    abort ();
  if (mod5 (0x50000000, 2) != 0)
    abort ();
  if (mod6 (0x50000000, 2) != 0)
    abort ();

  exit (0);
}
