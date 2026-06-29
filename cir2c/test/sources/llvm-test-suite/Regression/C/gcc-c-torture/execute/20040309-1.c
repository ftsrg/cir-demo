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

extern void abort ();

int foo(unsigned short x)
{
  unsigned short y;
  y = x > 32767 ? x - 32768 : 0;
  return y;
}

int main()
{
  if (foo (0) != 0)
    abort ();
  if (foo (32767) != 0)
    abort ();
  if (foo (32768) != 0)
    abort ();
  if (foo (32769) != 1)
    abort ();
  if (foo (65535) != 32767)
    abort ();
  return 0;
}
