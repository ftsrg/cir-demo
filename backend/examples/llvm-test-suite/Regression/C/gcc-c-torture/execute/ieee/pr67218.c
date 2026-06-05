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

extern void abort (void) __attribute__ ((noreturn));

double __attribute__ ((noinline, noclone))
foo (unsigned int x)
{
  return (double) (float) (x | 0xffff0000);
}

int
main ()
{
  if (foo (1) != 0x1.fffep31)
    abort ();
  return 0;
}
