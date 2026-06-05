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

/* Copyright (C) 2000, 2001, 2003, 2004  Free Software Foundation.

   Ensure all expected transformations of builtin strlen
   occur and perform correctly.

   Written by Jakub Jelinek, 11/7/2000.

   Additional tests written by Roger Sayle, 11/02/2001:
   Ensure all builtin strlen comparisons against zero are optimized
   and perform correctly. The multiple calls to strcpy are to prevent
   the potentially "pure" strlen calls from being removed by CSE.

   Modified by Ben Elliston, 2006-10-25:
   The multiple calls to strcpy that Roger mentions above are
   problematic on systems where strcpy is implemented using strlen
   (which this test overrides to call abort).  So, rather than use
   strcpy, we perform the identical operations using array indexing
   and char assignments.  */

extern void abort (void);
extern __SIZE_TYPE__ strlen (const char *);
extern char *strcpy (char *, const char *);

int x = 6;

void
main_test(void)
{
  const char *const foo = "hello world";
  char str[8];
  char *ptr;

  if (strlen (foo) != 11)
    abort ();
  if (strlen (foo + 4) != 7)
    abort ();
  if (strlen (foo + (x++ & 7)) != 5)
    abort ();
  if (x != 7)
    abort ();

  ptr = str;
  ptr[0] = 'n'; ptr[1] = 't'; ptr[2] = 's'; ptr[3] = '\0';
  if (strlen (ptr) == 0)
    abort ();

  ptr[0] = 'n'; ptr[1] = 't'; ptr[2] = 's'; ptr[3] = '\0';
  if (strlen (ptr) < 1)
    abort ();

  ptr[0] = 'n'; ptr[1] = 't'; ptr[2] = 's'; ptr[3] = '\0';
  if (strlen (ptr) <= 0)
    abort ();

  ptr[0] = 'n'; ptr[1] = 't'; ptr[2] = 's'; ptr[3] = '\0';
  if (strlen (ptr+3) != 0)
    abort ();

  ptr[0] = 'n'; ptr[1] = 't'; ptr[2] = 's'; ptr[3] = '\0';
  if (strlen (ptr+3) > 0)
    abort ();

  ptr[0] = 'n'; ptr[1] = 't'; ptr[2] = 's'; ptr[3] = '\0';
  if (strlen (str+3) >= 1)
    abort ();

  /* Test at least one instance of the __builtin_ style.  We do this
     to ensure that it works and that the prototype is correct.  */
  if (__builtin_strlen (foo) != 11)
    abort ();
}
