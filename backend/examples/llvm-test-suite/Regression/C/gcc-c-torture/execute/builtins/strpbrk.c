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

   Ensure all expected transformations of builtin strpbrk occur and
   perform correctly.

   Written by Kaveh R. Ghazi, 11/6/2000.  */

extern void abort(void);
extern char *strpbrk (const char *, const char *);
extern int strcmp (const char *, const char *);

void fn (const char *foo, const char *const *bar)
{
  if (strcmp(strpbrk ("hello world", "lrooo"), "llo world") != 0)
    abort();
  if (strpbrk (foo, "") != 0)
    abort();
  if (strpbrk (foo + 4, "") != 0)
    abort();
  if (strpbrk (*bar--, "") != 0)
    abort();
  if (strpbrk (*bar, "h") != foo)
    abort();
  if (strpbrk (foo, "h") != foo)
    abort();
  if (strpbrk (foo, "w") != foo + 6)
    abort();
  if (strpbrk (foo + 6, "o") != foo + 7)
    abort();

  /* Test at least one instance of the __builtin_ style.  We do this
     to ensure that it works and that the prototype is correct.  */
  if (__builtin_strpbrk (foo + 6, "o") != foo + 7)
    abort();
}

void
main_test (void)
{
  const char *const foo[] = { "hello world", "bye bye world" };
  fn (foo[0], foo + 1);
}
