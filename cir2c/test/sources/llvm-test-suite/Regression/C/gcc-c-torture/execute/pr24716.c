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

/* PR24716, scalar evolution returning the wrong result
   for pdest.  */

int Link[] = { -1 };
int W[] = { 2 };

extern void abort (void);

int f (int k, int p)
{
  int pdest, j, D1361;
  j = 0;
  pdest = 0;
  for (;;) {
    if (pdest > 2)
      do
        j--, pdest++;
      while (j > 2);

    if (j == 1)
      break;

    while (pdest > p)
      if (j == p)
        pdest++;

    do
      {
        D1361 = W[k];
        do
          if (D1361 != 0)
            pdest = 1, W[k] = D1361 = 0;
        while (p < 1);
    } while (k > 0);

    do
      {
        p = 0;
        k = Link[k];
        while (p < j)
          if (k != -1)
            pdest++, p++;
      }
    while (k != -1);
    j = 1;
  }

  /* The correct return value should be pdest (1 in the call from main).
     DOM3 is mistaken and propagates a 0 here.  */
  return pdest;
}

int main ()
{
  if (!f (0, 2))
    abort ();
  return 0;
}
