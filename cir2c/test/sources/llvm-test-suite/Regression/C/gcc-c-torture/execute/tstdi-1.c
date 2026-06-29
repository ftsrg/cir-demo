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

#define FALSE 140
#define TRUE 13

feq (x)
     long long int x;
{
  if (x == 0)
    return TRUE;
  else
    return FALSE;
}

fne (x)
     long long int x;
{
  if (x != 0)
    return TRUE;
  else
    return FALSE;
}

flt (x)
     long long int x;
{
  if (x < 0)
    return TRUE;
  else
    return FALSE;
}

fge (x)
     long long int x;
{
  if (x >= 0)
    return TRUE;
  else
    return FALSE;
}

fgt (x)
     long long int x;
{
  if (x > 0)
    return TRUE;
  else
    return FALSE;
}

fle (x)
     long long int x;
{
  if (x <= 0)
    return TRUE;
  else
    return FALSE;
}

main ()
{
  if (feq (0LL) != TRUE)
    abort ();
  if (feq (-1LL) != FALSE)
    abort ();
  if (feq (0x8000000000000000LL) != FALSE)
    abort ();
  if (feq (0x8000000000000001LL) != FALSE)
    abort ();
  if (feq (1LL) != FALSE)
    abort ();
  if (feq (0x7fffffffffffffffLL) != FALSE)
    abort ();

  if (fne (0LL) != FALSE)
    abort ();
  if (fne (-1LL) != TRUE)
    abort ();
  if (fne (0x8000000000000000LL) != TRUE)
    abort ();
  if (fne (0x8000000000000001LL) != TRUE)
    abort ();
  if (fne (1LL) != TRUE)
    abort ();
  if (fne (0x7fffffffffffffffLL) != TRUE)
    abort ();

  if (flt (0LL) != FALSE)
    abort ();
  if (flt (-1LL) != TRUE)
    abort ();
  if (flt (0x8000000000000000LL) != TRUE)
    abort ();
  if (flt (0x8000000000000001LL) != TRUE)
    abort ();
  if (flt (1LL) != FALSE)
    abort ();
  if (flt (0x7fffffffffffffffLL) != FALSE)
    abort ();

  if (fge (0LL) != TRUE)
    abort ();
  if (fge (-1LL) != FALSE)
    abort ();
  if (fge (0x8000000000000000LL) != FALSE)
    abort ();
  if (fge (0x8000000000000001LL) != FALSE)
    abort ();
  if (fge (1LL) != TRUE)
    abort ();
  if (fge (0x7fffffffffffffffLL) != TRUE)
    abort ();

  if (fgt (0LL) != FALSE)
    abort ();
  if (fgt (-1LL) != FALSE)
    abort ();
  if (fgt (0x8000000000000000LL) != FALSE)
    abort ();
  if (fgt (0x8000000000000001LL) != FALSE)
    abort ();
  if (fgt (1LL) != TRUE)
    abort ();
  if (fgt (0x7fffffffffffffffLL) != TRUE)
    abort ();

  if (fle (0LL) != TRUE)
    abort ();
  if (fle (-1LL) != TRUE)
    abort ();
  if (fle (0x8000000000000000LL) != TRUE)
    abort ();
  if (fle (0x8000000000000001LL) != TRUE)
    abort ();
  if (fle (1LL) != FALSE)
    abort ();
  if (fle (0x7fffffffffffffffLL) != FALSE)
    abort ();

  exit (0);
}
