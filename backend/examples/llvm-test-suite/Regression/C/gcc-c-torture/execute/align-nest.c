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

/* { dg-skip-if "requires alloca" { ! alloca } { "-O0" } { "" } } */

void foo(int n)
{
  typedef struct
  {
    int value;
  } myint;

  struct S
  {
    int i[n];
    unsigned int b:1;
    myint mi;
  } __attribute__ ((packed)) __attribute__ ((aligned (4)));

  struct S s[2];
  int k;

  for (k = 0; k < 2; k ++)
    s[k].mi.value = 0;
}

int main ()
{
  foo (2);
  return 0;
}
