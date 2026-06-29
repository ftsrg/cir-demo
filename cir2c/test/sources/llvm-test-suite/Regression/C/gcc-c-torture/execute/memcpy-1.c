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

/* { dg-add-options stack_size } */

#include <string.h>

#if defined (STACK_SIZE)
#define MEMCPY_SIZE (STACK_SIZE / 3)
#else
#define MEMCPY_SIZE (1 << 17)
#endif


void *copy (void *o, const void *i, unsigned l)
{
  return memcpy (o, i, l);
}

main ()
{
  unsigned i;
  unsigned char src[MEMCPY_SIZE];
  unsigned char dst[MEMCPY_SIZE];

  for (i = 0; i < MEMCPY_SIZE; i++)
    src[i] = (unsigned char) i,  dst[i] = 0;

  (void) memcpy (dst, src, MEMCPY_SIZE / 128);

  for (i = 0; i < MEMCPY_SIZE / 128; i++)
    if (dst[i] != (unsigned char) i)
      abort ();

  (void) memset (dst, 1, MEMCPY_SIZE / 128);

  for (i = 0; i < MEMCPY_SIZE / 128; i++)
    if (dst[i] != 1)
      abort ();

  (void) memcpy (dst, src, MEMCPY_SIZE);

  for (i = 0; i < MEMCPY_SIZE; i++)
    if (dst[i] != (unsigned char) i)
      abort ();

  (void) memset (dst, 0, MEMCPY_SIZE);

  for (i = 0; i < MEMCPY_SIZE; i++)
    if (dst[i] != 0)
      abort ();

  (void) copy (dst, src, MEMCPY_SIZE / 128);

  for (i = 0; i < MEMCPY_SIZE / 128; i++)
    if (dst[i] != (unsigned char) i)
      abort ();

  (void) memset (dst, 0, MEMCPY_SIZE);

  (void) copy (dst, src, MEMCPY_SIZE);

  for (i = 0; i < MEMCPY_SIZE; i++)
    if (dst[i] != (unsigned char) i)
      abort ();

  exit (0);
}
