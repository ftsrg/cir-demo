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

#include <stdio.h>

/* Convert a decimal string to a long long unsigned.  No error check is
   performed.  */

long long unsigned
str2llu (str)
     char *str;
{
  long long unsigned acc;
  int d;
  acc =  *str++ - '0';
  for (;;)
    {
      d = *str++;
      if (d == '\0')
	break;
      d -= '0';
      acc = acc * 10 + d;
    }

  return acc;
}

/* isqrt(t) - computes the square root of t. (tege 86-10-27) */

long unsigned
sqrtllu (long long unsigned t)
{
  long long unsigned s;
  long long unsigned b;

  for (b = 0, s = t;  b++, (s >>= 1) != 0; )
    ;

  s = 1LL << (b >> 1);

  if (b & 1)
    s += s >> 1;

  do
    {
      b = t / s;
      s = (s + b) >> 1;
    }
  while (b < s);

  return s;
}


int plist (p0, p1, tab)
     long long unsigned p0, p1;
     long long unsigned *tab;
{
  long long unsigned p;
  long unsigned d;
  long unsigned s;
  long long unsigned *xp = tab;

  for (p = p0;  p <= p1;  p += 2)
    {
      s = sqrtllu (p);

      for (d = 3;  d <= s;  d += 2)
	{
	  long long unsigned q = p % d;
	  if (q == 0)
	    goto not_prime;
	}

      *xp++ = p;
    not_prime:;
    }
  *xp = 0;
  return xp - tab;
}

main (argc, argv)
     int argc;
     char *argv[];
{
  long long tab[10];
  int nprimes;
  nprimes = plist (str2llu ("1234111111"), str2llu ("1234111127"), tab);

  if(tab[0]!=1234111117LL||tab[1]!=1234111121LL||tab[2]!=1234111127LL||tab[3]!=0)
    abort();

  exit(0);
}
