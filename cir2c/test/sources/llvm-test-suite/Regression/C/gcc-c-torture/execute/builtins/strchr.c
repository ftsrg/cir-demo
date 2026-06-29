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

/* Copyright (C) 2000, 2003  Free Software Foundation.

   Ensure all expected transformations of builtin strchr and index
   occur and perform correctly.

   Written by Jakub Jelinek, 11/7/2000.  */

extern void abort (void);
extern char *strchr (const char *, int);
extern char *index (const char *, int);

void
main_test (void)
{
  const char *const foo = "hello world";

  if (strchr (foo, 'x'))
    abort ();
  if (strchr (foo, 'o') != foo + 4)
    abort ();
  if (strchr (foo + 5, 'o') != foo + 7)
    abort ();
  if (strchr (foo, '\0')  != foo + 11)
    abort ();
  /* Test only one instance of index since the code path is the same
     as that of strchr. */
  if (index ("hello", 'z')  != 0)
    abort ();

  /* Test at least one instance of the __builtin_ style.  We do this
     to ensure that it works and that the prototype is correct.  */
  if (__builtin_strchr (foo, 'o')  != foo + 4)
    abort ();
  if (__builtin_index (foo, 'o')  != foo + 4)
    abort ();
}
