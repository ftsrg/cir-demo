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

/* Copyright (C) 2004  Free Software Foundation.

   Check builtin memmove and bcopy optimization when length is 1.

   Written by Jakub Jelinek, 9/14/2004.  */

extern void abort (void);
typedef __SIZE_TYPE__ size_t;
extern void *memmove (void *, const void *, size_t);
extern void bcopy (const void *, void *, size_t);
extern int memcmp (const void *, const void *, size_t);

char p[32] = "abcdefg";
char *q = p + 4;

void
main_test (void)
{
  /* memmove with length 1 can be optimized into memcpy if it can be
     expanded inline.  */
  if (memmove (p + 2, p + 3, 1) != p + 2 || memcmp (p, "abddefg", 8))
    abort ();
  if (memmove (p + 1, p + 1, 1) != p + 1 || memcmp (p, "abddefg", 8))
    abort ();
  if (memmove (q, p + 4, 1) != p + 4 || memcmp (p, "abddefg", 8))
    abort ();
  bcopy (p + 5, p + 6, 1);
  if (memcmp (p, "abddeff", 8))
    abort ();
  bcopy (p + 1, p + 1, 1);
  if (memcmp (p, "abddeff", 8))
    abort ();
  bcopy (q, p + 4, 1);
  if (memcmp (p, "abddeff", 8))
    abort ();
}
