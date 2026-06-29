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

/* Copyright (C) 2000  Free Software Foundation  */
/* by Alexandre Oliva <aoliva@redhat.com> */

#include <stdlib.h>
#include <string.h>

char *list[] = { "*", "e" };

static int bar (const char *fmt) {
  return (strchr (fmt, '*') != 0);
}

static void foo () {
  int i;
  for (i = 0; i < sizeof (list) / sizeof (*list); i++) {
    const char *fmt = list[i];
    if (bar (fmt))
      continue;
    if (i == 0)
      abort ();
    else
      exit (0);
  }
}

int main () {
  foo ();
}
