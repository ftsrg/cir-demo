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

/* PR middle-end/19551 */

extern void abort ();

#define T(type, name) \
__attribute__((pure)) _Complex type		\
foo_##name (int x)				\
{						\
  _Complex type r;				\
  __real r = x + 1;				\
  __imag r = x - 1;				\
  return r;					\
}						\
						\
void						\
bar_##name (type *x)				\
{						\
  *x = __real foo_##name (5);			\
}						\
						\
void						\
baz_##name (type *x)				\
{						\
  *x = __imag foo_##name (5);			\
}

typedef long double ldouble_t;
typedef long long llong;

T (float, float)
T (double, double)
T (long double, ldouble_t)
T (char, char)
T (short, short)
T (int, int)
T (long, long)
T (long long, llong)
#undef T

int
main (void)
{
#define T(type, name) \
  {						\
    type var = 0;				\
    bar_##name (&var);				\
    if (var != 6)				\
      abort ();					\
    var = 0;					\
    baz_##name (&var);				\
    if (var != 4)				\
      abort ();					\
  }
  T (float, float)
  T (double, double)
  T (long double, ldouble_t)
  T (char, char)
  T (short, short)
  T (int, int)
  T (long, long)
  T (long long, llong)
  return 0;
}
