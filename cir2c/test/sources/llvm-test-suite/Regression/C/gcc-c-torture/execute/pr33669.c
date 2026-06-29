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

typedef struct foo_t
{
  unsigned int blksz;
  unsigned int bf_cnt;
} foo_t;

#define _RNDUP(x, unit)  ((((x) + (unit) - 1) / (unit)) * (unit))
#define _RNDDOWN(x, unit)  ((x) - ((x)%(unit)))

long long
foo (foo_t *const pxp,  long long offset, unsigned int extent)
{
  long long blkoffset = _RNDDOWN(offset, (long long )pxp->blksz);
  unsigned int diff = (unsigned int)(offset - blkoffset);
  unsigned int blkextent = _RNDUP(diff + extent, pxp->blksz);

  if (pxp->blksz < blkextent)
    return -1LL;

  if (pxp->bf_cnt > pxp->blksz)
    pxp->bf_cnt = pxp->blksz;

  return blkoffset;
}

int
main ()
{
  foo_t x;
  long long xx;

  x.blksz = 8192;
  x.bf_cnt = 0;
  xx = foo (&x, 0, 4096);
  if (xx != 0LL)
    abort ();
  return 0;
}
