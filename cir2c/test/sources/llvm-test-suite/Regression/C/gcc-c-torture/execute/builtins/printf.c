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

/* Copyright (C) 2000  Free Software Foundation.

   Ensure all expected transformations of builtin printf occur and
   that we honor side effects in the arguments.

   Written by Kaveh R. Ghazi, 12/4/2000.  */

extern int printf (const char *, ...);
extern int printf_unlocked (const char *, ...);
extern void abort(void);

void
main_test (void)
{
  const char *const s1 = "hello world";
  const char *const s2[] = { s1, 0 }, *const*s3;

  printf ("%s\n", "hello");
  printf ("%s\n", *s2);
  s3 = s2;
  printf ("%s\n", *s3++);
  if (s3 != s2+1 || *s3 != 0)
    abort();

  printf ("%c", '\n');
  printf ("%c", **s2);
  s3 = s2;
  printf ("%c", **s3++);
  if (s3 != s2+1 || *s3 != 0)
    abort();

  printf ("");
  printf ("%s", "");
  printf ("\n");
  printf ("%s", "\n");
  printf ("hello world\n");
  printf ("%s", "hello world\n");

  /* Test at least one instance of the __builtin_ style.  We do this
     to ensure that it works and that the prototype is correct.  */
  __builtin_printf ("%s\n", "hello");
  /* These builtin stubs are called by __builtin_printf, ensure their
     prototypes are set correctly too.  */
  __builtin_putchar ('\n');
  __builtin_puts ("hello");
  /* Check the unlocked style, these evaluate to nothing to avoid
     problems on systems without the unlocked functions.  */
  printf_unlocked ("");
  __builtin_printf_unlocked ("");
  printf_unlocked ("%s", "");
  __builtin_printf_unlocked ("%s", "");
}
