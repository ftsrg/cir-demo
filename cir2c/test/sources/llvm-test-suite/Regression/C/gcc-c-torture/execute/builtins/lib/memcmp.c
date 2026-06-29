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

extern void abort(void);
extern int inside_main;

__attribute__ ((__noinline__))
int
memcmp (const void *s1, const void *s2, __SIZE_TYPE__ len)
{
  const unsigned char *sp1, *sp2;

#ifdef __OPTIMIZE__
  if (inside_main)
    abort ();
#endif

  sp1 = s1;
  sp2 = s2;
  while (len != 0 && *sp1 == *sp2)
    sp1++, sp2++, len--;

  if (len == 0)
    return 0;
  return *sp1 - *sp2;
}
