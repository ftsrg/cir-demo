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

extern void abort (void);
extern void exit (int);

int a[6], c = 1, d;
short e;

int __attribute__ ((noinline))
fn1 (int p)
{
  return a[p];
}

int
main ()
{
  if (sizeof (long long) != 8)
    exit (0);

  a[0] = 1;
  if (c)
    e--;
  d = e;
  long long f = e;
  if (fn1 ((f >> 56) & 1) != 0)
    abort ();
  exit (0);
}
