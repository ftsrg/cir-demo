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

/* Problem originally visible on ia64.

   There is a partial redundancy of "in + 1" that makes GCSE want to
   transform the final while loop to

     p = in + 1;
     tmp = p;
     ...
     goto start;
   top:
     tmp = tmp + 1;
   start:
     in = tmp;
     if (in < p) goto top;

   We miscalculate the number of loop iterations as (p - tmp) = 0
   instead of (p - in) = 1, which results in overflow in the doloop
   optimization.  */

static const char *
test (const char *in, char *out)
{
  while (1)
    {
      if (*in == 'a')
	{
	  const char *p = in + 1;
	  while (*p == 'x')
	    ++p;
	  if (*p == 'b')
	    return p;
	  while (in < p)
	    *out++ = *in++;
	}
    }
}

int main ()
{
  char out[4];
  test ("aab", out);
  return 0;
}
