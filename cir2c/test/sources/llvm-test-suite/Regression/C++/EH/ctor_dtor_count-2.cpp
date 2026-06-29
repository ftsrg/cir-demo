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

// Testcase for proper handling of
// c++ type, constructors and destructors.

#include <stdio.h>

int c, d;

struct A
{
  int i;
  A () { i = ++c; printf ("A() %d\n", i); }
  A (const A&) { i = ++c; printf ("A(const A&) %d\n", i); }
  ~A() { printf ("~A() %d\n", i); ++d; }
};

void
f()
{
  printf ("Throwing 1...\n");
  throw A();
}


int main() {
  try
    {
      f();
    }
  catch (A)
    {
      printf ("Caught.\n");
    }
  printf ("c == %d, d == %d\n", c, d);
  return c != d;
}

