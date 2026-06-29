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

   Ensure builtin memcpy and strcpy perform correctly.

   Written by Jakub Jelinek, 11/24/2000.  */

extern void abort (void);
extern char *strcpy (char *, const char *);
typedef __SIZE_TYPE__ size_t;
extern void *memcpy (void *, const void *, size_t);
extern int memcmp (const void *, const void *, size_t);

char p[32] = "";

void
main_test (void)
{
  if (strcpy (p, "abcde") != p || memcmp (p, "abcde", 6))
    abort ();
  if (strcpy (p + 16, "vwxyz" + 1) != p + 16 || memcmp (p + 16, "wxyz", 5))
    abort ();
  if (strcpy (p + 1, "") != p + 1 || memcmp (p, "a\0cde", 6))
    abort ();
  if (strcpy (p + 3, "fghij") != p + 3 || memcmp (p, "a\0cfghij", 9))
    abort ();
  if (memcpy (p, "ABCDE", 6) != p || memcmp (p, "ABCDE", 6))
    abort ();
  if (memcpy (p + 16, "VWX" + 1, 2) != p + 16 || memcmp (p + 16, "WXyz", 5))
    abort ();
  if (memcpy (p + 1, "", 1) != p + 1 || memcmp (p, "A\0CDE", 6))
    abort ();
  if (memcpy (p + 3, "FGHI", 4) != p + 3 || memcmp (p, "A\0CFGHIj", 9))
    abort ();

  /* Test at least one instance of the __builtin_ style.  We do this
     to ensure that it works and that the prototype is correct.  */
  if (__builtin_strcpy (p, "abcde") != p || memcmp (p, "abcde", 6))
    abort ();
  if (__builtin_memcpy (p, "ABCDE", 6) != p || memcmp (p, "ABCDE", 6))
    abort ();
}
