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

/* Copyright (C) 2000, 2004  Free Software Foundation.

   Ensure all expected transformations of builtin strcspn occur and
   perform correctly.

   Written by Kaveh R. Ghazi, 11/27/2000.  */

extern void abort (void);
typedef __SIZE_TYPE__ size_t;
extern size_t strcspn (const char *, const char *);
extern char *strcpy (char *, const char *);

void
main_test (void)
{
  const char *const s1 = "hello world";
  char dst[64], *d2;

  if (strcspn (s1, "hello") != 0)
    abort();
  if (strcspn (s1, "z") != 11)
    abort();
  if (strcspn (s1+4, "z") != 7)
    abort();
  if (strcspn (s1, "hello world") != 0)
    abort();
  if (strcspn (s1, "") != 11)
    abort();
  strcpy (dst, s1);
  if (strcspn (dst, "") != 11)
    abort();
  strcpy (dst, s1); d2 = dst;
  if (strcspn (++d2, "") != 10 || d2 != dst+1)
    abort();
  strcpy (dst, s1); d2 = dst;
  if (strcspn (++d2+5, "") != 5 || d2 != dst+1)
    abort();
  if (strcspn ("", s1) != 0)
    abort();
  strcpy (dst, s1);
  if (strcspn ("", dst) != 0)
    abort();
  strcpy (dst, s1); d2 = dst;
  if (strcspn ("", ++d2) != 0 || d2 != dst+1)
    abort();
  strcpy (dst, s1); d2 = dst;
  if (strcspn ("", ++d2+5) != 0 || d2 != dst+1)
    abort();

  /* Test at least one instance of the __builtin_ style.  We do this
     to ensure that it works and that the prototype is correct.  */
  if (__builtin_strcspn (s1, "z") != 11)
    abort();
}
