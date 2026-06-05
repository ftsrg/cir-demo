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

/* { dg-require-effective-target alloca } */
/* This used to fail on SPARC with an unaligned memory access.  */

void foo(int n)
{
  struct S {
    int i[n];
    unsigned int b:1;
    int i2;
  } __attribute__ ((packed)) __attribute__ ((aligned (4)));

  struct S s;

  s.i2 = 0;
}

int main(void)
{
  foo(4);

  return 0;
}
