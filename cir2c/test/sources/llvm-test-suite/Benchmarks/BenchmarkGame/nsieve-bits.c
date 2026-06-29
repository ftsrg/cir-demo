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

/*
** The Great Computer Language Shootout
** http://shootout.alioth.debian.org/
** contributed by Mike Pall
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned int bits;
#define BBITS		(sizeof(bits) * 8)
#define BSIZE(x)	(((x) / 8) + sizeof(bits))
#define BMASK(x)	(1 << ((x) % BBITS))
#define BTEST(p, x)	((p)[(x) / BBITS] & BMASK(x))
#define BFLIP(p, x)	(p)[(x) / BBITS] ^= BMASK(x)

int main(int argc, char **argv)
{
  unsigned int m, sz = 10000 << 12;
  bits *primes = (bits *)malloc(BSIZE(sz));
  if (!primes) return 1;
  for (m = 0; m <= 2; m++) {
    unsigned int i, j, count = 0, n = sz >> m;
    memset(primes, 0xff, BSIZE(n));
    for (i = 2; i <= n; i++)
      if (BTEST(primes, i)) {
	count++;
	for (j = i + i; j <= n; j += i)
	  if (BTEST(primes, j)) BFLIP(primes, j);
      }
    printf("Primes up to %8d %8d\n", n, count);
  }
  free(primes);
  return 0;
}