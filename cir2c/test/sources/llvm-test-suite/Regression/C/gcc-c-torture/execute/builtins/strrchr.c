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

   Ensure all expected transformations of builtin strrchr and rindex
   occur and perform correctly.

   Written by Jakub Jelinek, 11/7/2000.  */

extern void abort (void);
extern char *strrchr (const char *, int);
extern char *rindex (const char *, int);

char *bar = "hi world";
int x = 7;

void
main_test (void)
{
  const char *const foo = "hello world";

  if (strrchr (foo, 'x'))
    abort ();
  if (strrchr (foo, 'o') != foo + 7)
    abort ();
  if (strrchr (foo, 'e') != foo + 1)
    abort ();
  if (strrchr (foo + 3, 'e'))
    abort ();
  if (strrchr (foo, '\0') != foo + 11)
    abort ();
  if (strrchr (bar, '\0') != bar + 8)
    abort ();
  if (strrchr (bar + 4, '\0') != bar + 8)
    abort ();
  if (strrchr (bar + (x++ & 3), '\0') != bar + 8)
    abort ();
  if (x != 8)
    abort ();
  /* Test only one instance of rindex since the code path is the same
     as that of strrchr. */
  if (rindex ("hello", 'z') != 0)
    abort ();

  /* Test at least one instance of the __builtin_ style.  We do this
     to ensure that it works and that the prototype is correct.  */
  if (__builtin_strrchr (foo, 'o') != foo + 7)
    abort ();
  if (__builtin_rindex (foo, 'o') != foo + 7)
    abort ();
}
