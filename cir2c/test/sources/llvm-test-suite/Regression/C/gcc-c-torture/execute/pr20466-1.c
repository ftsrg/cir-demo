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

int f (int **, int *, int *, int **, int **) __attribute__ ((__noinline__));
int
f (int **ipp, int *i1p, int *i2p, int **i3, int **i4)
{
  **ipp = *i1p;
  *ipp = i2p;
  *i3 = *i4;
  **ipp = 99;
  return 3;
}

extern void exit (int);
extern void abort (void);

int main (void)
{
  int i = 42, i1 = 66, i2 = 1, i3 = -1, i4 = 55;
  int *ip = &i;
  int *i3p = &i3;
  int *i4p = &i4;

  f (&ip, &i1, &i2, &i3p, &i4p);
  if (i != 66 || ip != &i2 || i2 != 99 || i3 != -1 || i3p != i4p || i4 != 55)
    abort ();
  exit (0);
}
