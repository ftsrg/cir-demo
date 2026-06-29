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

/* Copyright (C) 2007  Free Software Foundation.

   Ensure all expected transformations of builtin memchr occur
   and perform correctly.

   Written by Paolo Carlini, 10/5/2007.  */

extern void abort (void);
typedef __SIZE_TYPE__ size_t;
extern void *memchr (const void *, int, size_t);

void
main_test (void)
{
  const char* const foo1 = "hello world";

  if (memchr (foo1, 'x', 11))
    abort ();
  if (memchr (foo1, 'o', 11) != foo1 + 4)
    abort ();
  if (memchr (foo1, 'w', 2))
    abort ();
  if (memchr (foo1 + 5, 'o', 6) != foo1 + 7)
    abort ();
  if (memchr (foo1, 'd', 11) != foo1 + 10)
    abort ();
  if (memchr (foo1, 'd', 10))
    abort ();
  if (memchr (foo1, '\0', 11))
    abort ();
  if (memchr (foo1, '\0', 12) != foo1 + 11)
    abort ();

  /* Test at least one instance of the __builtin_ style.  We do this
     to ensure that it works and that the prototype is correct.  */
  if (__builtin_memchr (foo1, 'r', 11) != foo1 + 8)
    abort ();
}
