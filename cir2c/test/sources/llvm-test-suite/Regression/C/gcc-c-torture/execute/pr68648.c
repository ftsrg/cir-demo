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
int __attribute__ ((noinline))
foo (void)
{
  return 123;
}

int __attribute__ ((noinline))
bar (void)
{
  int c = 1;
  c |= 4294967295 ^ (foo () | 4073709551608);
  return c;
}

int
main ()
{
  if (bar () != 0x83fd4005)
    __builtin_abort ();
}
