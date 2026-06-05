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

/* Copyright (C) 2000, 2003, 2004  Free Software Foundation.

   Ensure all expected transformations of builtin strcmp
   occur and perform correctly.

   Written by Jakub Jelinek, 11/7/2000.  */

extern void abort (void);
extern int strcmp (const char *, const char *);

int x = 7;
char *bar = "hi world";

void
main_test (void)
{
  const char *const foo = "hello world";

  if (strcmp (foo, "hello") <= 0)
    abort ();
  if (strcmp (foo + 2, "llo") <= 0)
    abort ();
  if (strcmp (foo, foo) != 0)
    abort ();
  if (strcmp (foo, "hello world ") >= 0)
    abort ();
  if (strcmp (foo + 10, "dx") >= 0)
    abort ();
  if (strcmp (10 + foo, "dx") >= 0)
    abort ();
  if (strcmp (bar, "") <= 0)
    abort ();
  if (strcmp ("", bar) >= 0)
    abort ();
  if (strcmp (bar+8, "") != 0)
    abort ();
  if (strcmp ("", bar+8) != 0)
    abort ();
  if (strcmp (bar+(--x), "") <= 0 || x != 6)
    abort ();
  if (strcmp ("", bar+(++x)) >= 0 || x != 7)
    abort ();

  /* Test at least one instance of the __builtin_ style.  We do this
     to ensure that it works and that the prototype is correct.  */
  if (__builtin_strcmp (foo, "hello") <= 0)
    abort ();
}
