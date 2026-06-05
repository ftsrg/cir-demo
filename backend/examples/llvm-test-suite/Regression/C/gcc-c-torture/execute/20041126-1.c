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

extern int abs (int);
extern void abort (void);

void
check (int *p)
{
  int i;
  for (i = 0; i < 5; ++i)
    if (p[i])
      abort ();
  for (; i < 10; ++i)
    if (p[i] != i + 1)
      abort ();
}

int
main (void)
{
  int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int i;

  for (i = -5; i < 0; i++)
    a[abs (i - 10) - 11] = 0;
  check (a);
  return 0;
}
