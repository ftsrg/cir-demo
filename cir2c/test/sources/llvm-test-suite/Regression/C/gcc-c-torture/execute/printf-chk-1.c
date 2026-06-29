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

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

volatile int should_optimize;

int
__attribute__((noinline))
__printf_chk (int flag, const char *fmt, ...)
{
  va_list ap;
  int ret;
#ifdef __OPTIMIZE__
  if (should_optimize)
    abort ();
#endif
  should_optimize = 1;
  va_start (ap, fmt);
  ret = vprintf (fmt, ap);
  va_end (ap);
  return ret;
}

int
main (void)
{
#define test(ret, opt, args...) \
  should_optimize = opt;		\
  __printf_chk (1, args); 		\
  if (!should_optimize)			\
    abort ();				\
  should_optimize = 0;			\
  if (__printf_chk (1, args) != ret)	\
    abort ();				\
  if (!should_optimize)			\
    abort ();
  test (5, 0, "hello");
  test (6, 1, "hello\n");
  test (1, 1, "a");
  test (0, 1, "");
  test (5, 0, "%s", "hello");
  test (6, 1, "%s", "hello\n");
  test (1, 1, "%s", "a");
  test (0, 1, "%s", "");
  test (1, 1, "%c", 'x');
  test (7, 1, "%s\n", "hello\n");
  test (2, 0, "%d\n", 0);
  return 0;
}
