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

/* { dg-skip-if "requires io" { freestanding } }  */

/* This test tests complex conjugate and passing/returning of
   complex parameter.  */

#include <stdlib.h>
#include <stdio.h>

int err;

#define TEST(TYPE, FUNC)					\
__complex__ TYPE						\
ctest_ ## FUNC (__complex__ TYPE x)				\
{								\
  __complex__ TYPE res;						\
								\
  res = ~x;							\
								\
  return res;							\
}								\
								\
void								\
test_ ## FUNC (void)						\
{								\
  __complex__ TYPE res, x;					\
								\
  x = 1.0 + 2.0i;						\
								\
  res = ctest_ ## FUNC (x);					\
								\
  if (res != 1.0 - 2.0i)					\
    {								\
      printf ("test_" #FUNC " failed\n");			\
      ++err;							\
    }								\
}


TEST(float, float)
TEST(double, double)
TEST(long double, long_double)
TEST(int, int)
TEST(long int, long_int)

int
main (void)
{

  err = 0;

  test_float ();
  test_double ();
  test_long_double ();
  test_int ();
  test_long_int ();

  if (err != 0)
    abort ();

  return 0;
}
