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

/* Copyright (C) 2003  Free Software Foundation.

   Test strcpy optimizations don't evaluate side-effects twice.

   Written by Jakub Jelinek, June 23, 2003.  */

typedef __SIZE_TYPE__ size_t;
extern char *strcpy (char *, const char *);
extern int memcmp (const void *, const void *, size_t);
extern void abort (void);
extern void exit (int);

size_t
test1 (char *s, size_t i)
{
  strcpy (s, "foobarbaz" + i++);
  return i;
}

size_t
check2 (void)
{
  static size_t r = 5;
  if (r != 5)
    abort ();
  return ++r;
}

void
test2 (char *s)
{
  strcpy (s, "foobarbaz" + check2 ());
}

int
main (void)
{
  char buf[10];
  if (test1 (buf, 7) != 8 || memcmp (buf, "az", 3))
    abort ();
  test2 (buf);
  if (memcmp (buf, "baz", 4))
    abort ();
  exit (0);
}
