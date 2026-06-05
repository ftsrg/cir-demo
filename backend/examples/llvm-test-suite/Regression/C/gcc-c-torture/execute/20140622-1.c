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

unsigned p;

long __attribute__((noinline, noclone))
test (unsigned a)
{
  return (long)(p + a) - (long)p;
}

int
main ()
{
  p = (unsigned) -2;
  if (test (0) != 0)
    __builtin_abort ();
  if (test (1) != 1)
    __builtin_abort ();
  if (test (2) != -(long)(unsigned)-2)
    __builtin_abort ();
  p = (unsigned) -1;
  if (test (0) != 0)
    __builtin_abort ();
  if (test (1) != -(long)(unsigned)-1)
    __builtin_abort ();
  if (test (2) != -(long)(unsigned)-2)
    __builtin_abort ();
  return 0;
}
