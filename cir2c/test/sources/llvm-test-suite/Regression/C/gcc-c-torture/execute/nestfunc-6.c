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

/* { dg-require-effective-target trampolines } */

/* Test that the GP gets properly restored, either by the nonlocal
   receiver or the nested function.  */

typedef __SIZE_TYPE__ size_t;
extern void abort (void);
extern void exit (int);
extern void qsort(void *, size_t, size_t, int (*)(const void *, const void *));

int main ()
{
  __label__ nonlocal;
  int compare (const void *a, const void *b)
  {
    goto nonlocal;
  }

  char array[3];
  qsort (array, 3, 1, compare);
  abort ();

 nonlocal:
  exit (0);
}
