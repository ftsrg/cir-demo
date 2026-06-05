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

   Ensure all expected transformations of builtin strspn occur and
   perform correctly.

   Written by Kaveh R. Ghazi, 11/27/2000.  */

extern void abort (void);
typedef __SIZE_TYPE__ size_t;
extern size_t strspn (const char *, const char *);
extern char *strcpy (char *, const char *);

void
main_test (void)
{
  const char *const s1 = "hello world";
  char dst[64], *d2;

  if (strspn (s1, "hello") != 5)
    abort();
  if (strspn (s1+4, "hello") != 1)
    abort();
  if (strspn (s1, "z") != 0)
    abort();
  if (strspn (s1, "hello world") != 11)
    abort();
  if (strspn (s1, "") != 0)
    abort();
  strcpy (dst, s1);
  if (strspn (dst, "") != 0)
    abort();
  strcpy (dst, s1); d2 = dst;
  if (strspn (++d2, "") != 0 || d2 != dst+1)
    abort();
  strcpy (dst, s1); d2 = dst;
  if (strspn (++d2+5, "") != 0 || d2 != dst+1)
    abort();
  if (strspn ("", s1) != 0)
    abort();
  strcpy (dst, s1);
  if (strspn ("", dst) != 0)
    abort();
  strcpy (dst, s1); d2 = dst;
  if (strspn ("", ++d2) != 0 || d2 != dst+1)
    abort();
  strcpy (dst, s1); d2 = dst;
  if (strspn ("", ++d2+5) != 0 || d2 != dst+1)
    abort();

  /* Test at least one instance of the __builtin_ style.  We do this
     to ensure that it works and that the prototype is correct.  */
  if (__builtin_strspn (s1, "hello") != 5)
    abort();
}
