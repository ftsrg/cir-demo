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
extern int inside_main;

__attribute__ ((__noinline__))
void *
memmove (void *dst, const void *src, __SIZE_TYPE__ n)
{
  char *dstp;
  const char *srcp;

#ifdef __OPTIMIZE__
  if (inside_main)
    abort ();
#endif

  srcp = src;
  dstp = dst;
  if (srcp < dstp)
    while (n-- != 0)
      dstp[n] = srcp[n];
  else
    while (n-- != 0)
      *dstp++ = *srcp++;

  return dst;
}

void
bcopy (const void *src, void *dst, __SIZE_TYPE__ n)
{
  memmove (dst, src, n);
}
