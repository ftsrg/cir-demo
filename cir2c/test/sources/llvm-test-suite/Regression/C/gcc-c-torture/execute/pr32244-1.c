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

struct foo
{
  unsigned long long b:40;
} x;

extern void abort (void);

void test1(unsigned long long res)
{
  /* The shift is carried out in 40 bit precision.  */
  if (x.b<<32 != res)
    abort ();
}

int main()
{
  x.b = 0x0100;
  test1(0);
  return 0;
}
