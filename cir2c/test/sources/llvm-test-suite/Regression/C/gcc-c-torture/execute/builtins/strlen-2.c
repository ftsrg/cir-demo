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

   Test strlen optimizations on conditional expressions.

   Written by Jakub Jelinek, June 23, 2003.  */

typedef __SIZE_TYPE__ size_t;
extern size_t strlen (const char *);
extern char *strcpy (char *, const char *);
extern int memcmp (const void *, const void *, size_t);
extern void abort (void);
extern int inside_main;

size_t g, h, i, j, k, l;

size_t
foo (void)
{
  if (l)
    abort ();
  return ++l;
}

void
main_test (void)
{
  if (strlen (i ? "foo" + 1 : j ? "bar" + 1 : "baz" + 1) != 2)
    abort ();
  if (strlen (g++ ? "foo" : "bar") != 3 || g != 1)
    abort ();
  if (strlen (h++ ? "xfoo" + 1 : "bar") != 3 || h != 1)
    abort ();
  if (strlen ((i++, "baz")) != 3 || i != 1)
    abort ();
  /* The following calls might not optimize strlen call away.  */
  inside_main = 0;
  if (strlen (j ? "foo" + k++ : "bar" + k++) != 3 || k != 1)
    abort ();
  if (strlen (foo () ? "foo" : "bar") != 3 || l != 1)
    abort ();
}
