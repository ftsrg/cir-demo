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

extern void abort (void);

void test(double f, double i)
{
  if (f == __builtin_huge_val())
    abort ();
  if (f == -__builtin_huge_val())
    abort ();
  if (i == -__builtin_huge_val())
    abort ();
  if (i != __builtin_huge_val())
    abort ();

  if (f >= __builtin_huge_val())
    abort ();
  if (f > __builtin_huge_val())
    abort ();
  if (i > __builtin_huge_val())
    abort ();
  if (f <= -__builtin_huge_val())
    abort ();
  if (f < -__builtin_huge_val())
    abort ();
}

void testf(float f, float i)
{
  if (f == __builtin_huge_valf())
    abort ();
  if (f == -__builtin_huge_valf())
    abort ();
  if (i == -__builtin_huge_valf())
    abort ();
  if (i != __builtin_huge_valf())
    abort ();

  if (f >= __builtin_huge_valf())
    abort ();
  if (f > __builtin_huge_valf())
    abort ();
  if (i > __builtin_huge_valf())
    abort ();
  if (f <= -__builtin_huge_valf())
    abort ();
  if (f < -__builtin_huge_valf())
    abort ();
}

void testl(long double f, long double i)
{
  if (f == __builtin_huge_vall())
    abort ();
  if (f == -__builtin_huge_vall())
    abort ();
  if (i == -__builtin_huge_vall())
    abort ();
  if (i != __builtin_huge_vall())
    abort ();

  if (f >= __builtin_huge_vall())
    abort ();
  if (f > __builtin_huge_vall())
    abort ();
  if (i > __builtin_huge_vall())
    abort ();
  if (f <= -__builtin_huge_vall())
    abort ();
  if (f < -__builtin_huge_vall())
    abort ();
}

int main()
{
  test (34.0, __builtin_huge_val());
  testf (34.0f, __builtin_huge_valf());
  testl (34.0l, __builtin_huge_vall());
  return 0;
}
