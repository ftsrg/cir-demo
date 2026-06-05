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

int errflag;

long long
f (long long x, long long y)
{
  long long r;

  errflag = 0;
  r = x + y;
  if (x >= 0)
    {
      if ((y < 0) || (r >= 0))
	return r;
    }
  else
    {
      if ((y > 0) || (r < 0))
	return r;
    }
  errflag = 1;
  return 0;
}

main ()
{
  f (0, 0);
  if (errflag)
    abort ();

  f (1, -1);
  if (errflag)
    abort ();

  f (-1, 1);
  if (errflag)
    abort ();

  f (0x8000000000000000LL, 0x8000000000000000LL);
  if (!errflag)
    abort ();

  f (0x8000000000000000LL, -1LL);
  if (!errflag)
    abort ();

  f (0x7fffffffffffffffLL, 0x7fffffffffffffffLL);
  if (!errflag)
    abort ();

  f (0x7fffffffffffffffLL, 1LL);
  if (!errflag)
    abort ();

  f (0x7fffffffffffffffLL, 0x8000000000000000LL);
  if (errflag)
    abort ();

  exit (0);
}
