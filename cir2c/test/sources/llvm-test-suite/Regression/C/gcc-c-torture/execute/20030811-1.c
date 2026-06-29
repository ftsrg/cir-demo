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

/* Origin: PR target/11535 from H. J. Lu <hjl@lucon.org> */
/* { dg-require-effective-target return_address } */

void vararg (int i, ...)
{
  (void) i;
}

int i0[0], i1;

void test1 (void)
{
  int a = (int) (long long) __builtin_return_address (0);
  vararg (0, a);
}

void test2 (void)
{
  i0[0] = (int) (long long) __builtin_return_address (0);
}

void test3 (void)
{
  i1 = (int) (long long) __builtin_return_address (0);
}

void test4 (void)
{
  volatile long long a = (long long) __builtin_return_address (0);
  i0[0] = (int) a;
}

int main (void)
{
  return 0;
}
