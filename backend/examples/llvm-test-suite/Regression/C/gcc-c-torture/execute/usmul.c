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

/* { dg-require-effective-target int32plus } */
int __attribute__ ((noinline)) foo (short x, unsigned short y)
{
  return x * y;
}

int __attribute__ ((noinline)) bar (unsigned short x, short y)
{
  return x * y;
}

int main ()
{
  if (foo (-2, 0xffff) != -131070)
    abort ();
  if (foo (2, 0xffff) != 131070)
    abort ();
  if (foo (-32768, 0x8000) != -1073741824)
    abort ();
  if (foo (32767, 0x8000) != 1073709056)
    abort ();

  if (bar (0xffff, -2) != -131070)
    abort ();
  if (bar (0xffff, 2) != 131070)
    abort ();
  if (bar (0x8000, -32768) != -1073741824)
    abort ();
  if (bar (0x8000, 32767) != 1073709056)
    abort ();

  exit (0);
}
