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

typedef signed short int16_t;
typedef unsigned short uint16_t;

int16_t logadd (int16_t *a, int16_t *b);
void ba_compute_psd (int16_t start);

int16_t masktab[6] = { 1, 2, 3, 4, 5};
int16_t psd[6] = { 50, 40, 30, 20, 10};
int16_t bndpsd[6] = { 1, 2, 3, 4, 5};

void ba_compute_psd (int16_t start)
{
  int i,j,k;
  int16_t lastbin = 4;

  j = start;
  k = masktab[start];

  bndpsd[k] = psd[j];
  j++;

  for (i = j; i < lastbin; i++) {
    bndpsd[k] = logadd(&bndpsd[k], &psd[j]);
    j++;
  }
}

int16_t logadd (int16_t *a, int16_t *b)
{
  return *a + *b;
}

int main (void)
{
  int i;

  ba_compute_psd (0);

  if (bndpsd[1] != 140) abort ();
  return 0;
}
