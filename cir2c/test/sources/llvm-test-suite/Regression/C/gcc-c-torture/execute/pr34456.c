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

/* { dg-skip-if "requires qsort" { freestanding } }  */

#include <stdlib.h>

int __attribute__ ((noinline)) debug (void) { return 1; }
int errors;

struct s { int elt; int (*compare) (int); };

static int
compare (const void *x, const void *y)
{
  const struct s *s1 = x, *s2 = y;
  int (*compare1) (int);
  int elt2;

  compare1 = s1->compare;
  elt2 = s2->elt;
  if (elt2 != 0 && debug () && compare1 (s1->elt) != 0)
    errors++;
  return compare1 (elt2);
}

int bad_compare (int x) { return -x; }
struct s array[2] = { { 1, bad_compare }, { -1, bad_compare } };

int
main (void)
{
  qsort (array, 2, sizeof (struct s), compare);
  return errors == 0;
}
