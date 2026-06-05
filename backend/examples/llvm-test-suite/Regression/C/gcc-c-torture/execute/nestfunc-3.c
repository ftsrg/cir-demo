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

/* { dg-require-effective-target trampolines } */

extern long foo (long, long, long (*) (long, long));
extern long use (long (*) (long, long), long, long);

int
main (void)
{
  long sum = 0;
  long i;

  long nested_0 (long a, long b)
    {
      if (a > 2 * b)
        return a - b;
      else
        return b - a;
    }

  long nested_1 (long a, long b)
    {
      return use (nested_0, b, a) + sum;
    }

  long nested_2 (long a, long b)
    {
      return nested_1 (b, a);
    }

  for (i = 0; i < 10; ++i)
    {
      long j;

      for (j = 0; j < 10; ++j)
        {
          long k;

          for (k = 0; k < 10; ++k)
            sum += foo (i, j > k ? j - k : k - j, nested_2);
        }
    }

  if ((sum & 0xffffffff) != 0xbecfcbf5)
    abort ();

  exit (0);
}

long
use (long (* func)(long, long), long a, long b)
{
  return func (b, a);
}

long
foo (long a, long b, long (* func) (long, long))
{
  return func (a, b);
}
