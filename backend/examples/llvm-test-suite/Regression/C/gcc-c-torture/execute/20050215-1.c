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

/* PR middle-end/19857 */

typedef struct { char c[8]; } V
#ifdef __ELF__
  __attribute__ ((aligned (8)))
#endif
  ;
typedef __SIZE_TYPE__ size_t;
V v;
void abort (void);

int
main (void)
{
  V *w = &v;
  if (((size_t) ((float *) ((size_t) w & ~(size_t) 3)) % 8) != 0
      || ((size_t) w & 1))
    {
#ifndef __ELF__
      if (((size_t) &v & 7) == 0)
#endif
	abort ();
    }
  return 0;
}
