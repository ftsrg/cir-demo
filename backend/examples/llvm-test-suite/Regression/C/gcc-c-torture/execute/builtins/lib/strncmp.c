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

typedef __SIZE_TYPE__ size_t;

__attribute__ ((__noinline__))
int
strncmp(const char *s1, const char *s2, size_t n)
{
  const unsigned char *u1 = (const unsigned char *)s1;
  const unsigned char *u2 = (const unsigned char *)s2;
  unsigned char c1, c2;

#ifdef __OPTIMIZE__
  if (inside_main)
    abort();
#endif

  while (n > 0)
    {
      c1 = *u1++, c2 = *u2++;
      if (c1 == '\0' || c1 != c2)
	return c1 - c2;
      n--;
    }
  return c1 - c2;
}
