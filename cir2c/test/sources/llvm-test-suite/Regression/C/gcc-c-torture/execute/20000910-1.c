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

void bar (int);
void foo (int *);

int main () {
  static int a[] = { 0, 1, 2 };
  int *i = &a[sizeof(a)/sizeof(*a)];

  while (i-- > a)
    foo (i);

  exit (0);
}

void baz (int, int);

void bar (int i) { baz (i, i); }
void foo (int *i) { bar (*i); }

void baz (int i, int j) {
  if (i != j)
    abort ();
}
