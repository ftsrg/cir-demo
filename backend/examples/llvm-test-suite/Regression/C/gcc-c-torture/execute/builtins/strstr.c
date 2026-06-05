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

   Ensure all expected transformations of builtin strstr occur and
   perform correctly.

   Written by Kaveh R. Ghazi, 11/6/2000.  */

extern void abort(void);
extern char *strstr (const char *, const char *);

void
main_test (void)
{
  const char *const foo = "hello world";

  if (strstr (foo, "") != foo)
    abort();
  if (strstr (foo + 4, "") != foo + 4)
    abort();
  if (strstr (foo, "h") != foo)
    abort();
  if (strstr (foo, "w") != foo + 6)
    abort();
  if (strstr (foo + 6, "o") != foo + 7)
    abort();
  if (strstr (foo + 1, "world") != foo + 6)
    abort();

  /* Test at least one instance of the __builtin_ style.  We do this
     to ensure that it works and that the prototype is correct.  */
  if (__builtin_strstr (foo + 1, "world") != foo + 6)
    abort();
}
