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

typedef struct sreal
{
  unsigned sig;		/* Significant.  */
  int exp;		/* Exponent.  */
} sreal;

sreal_compare (sreal *a, sreal *b)
{
  if (a->exp > b->exp)
    return 1;
  if (a->exp < b->exp)
    return -1;
  if (a->sig > b->sig)
    return 1;
  if (a->sig < b->sig)
    return -1;
  return 0;
}

sreal a[] = {
   { 0, 0 },
   { 1, 0 },
   { 0, 1 },
   { 1, 1 }
};

int main()
{
  int i, j;
  for (i = 0; i <= 3; i++) {
    for (j = 0; j < 3; j++) {
      if (i < j && sreal_compare(&a[i], &a[j]) != -1) abort();
      if (i == j && sreal_compare(&a[i], &a[j]) != 0) abort();
      if (i > j && sreal_compare(&a[i], &a[j]) != 1) abort();
    }
  }
  return 0;
}
