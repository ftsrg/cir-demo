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

/* Copyright (C) 2001  Free Software Foundation.

   Ensure that short builtin memcmp are optimized and perform correctly.
   On architectures with a cmpstrsi instruction, this test doesn't determine
   which optimization is being performed, but it does check for correctness.

   Written by Roger Sayle, 12/02/2001.
   Additional tests by Roger Sayle after PR 3508, 12/26/2001.  */

extern void abort (void);
typedef __SIZE_TYPE__ size_t;
extern int memcmp (const void *, const void *, size_t);
extern char *strcpy (char *, const char *);
extern void link_error (void);

void
main_test (void)
{
  char str[8];

  strcpy (str, "3141");

  if ( memcmp (str, str+2, 0) != 0 )
    abort ();
  if ( memcmp (str+1, str+3, 0) != 0 )
    abort ();

  if ( memcmp (str+1, str+3, 1) != 0 )
    abort ();
  if ( memcmp (str, str+2, 1) >= 0 )
    abort ();
  if ( memcmp (str+2, str, 1) <= 0 )
    abort ();

  if (memcmp ("abcd", "efgh", 4) >= 0)
    link_error ();
  if (memcmp ("abcd", "abcd", 4) != 0)
    link_error ();
  if (memcmp ("efgh", "abcd", 4) <= 0)
    link_error ();
}
