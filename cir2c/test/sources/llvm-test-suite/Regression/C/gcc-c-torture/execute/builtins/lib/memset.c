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
memset (void *dst, int c, __SIZE_TYPE__ n)
{
  while (n-- != 0)
    n[(char *) dst] = c;

  /* Single-byte memsets should be done inline when optimisation
     is enabled.  Do this after the copy in case we're being called to
     initialize bss.  */
#ifdef __OPTIMIZE__
  if (inside_main && n < 2)
    abort ();
#endif

  return dst;
}
