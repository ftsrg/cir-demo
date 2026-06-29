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
char *
strstr(const char *s1, const char *s2)
{
  const char *p, *q;

#ifdef __OPTIMIZE__
  if (inside_main)
    abort ();
#endif

  /* deliberately dumb algorithm */
  for (; *s1; s1++)
    {
      p = s1, q = s2;
      while (*q && *p)
	{
	  if (*q != *p)
	    break;
	  p++, q++;
	}
      if (*q == 0)
	return (char *)s1;
    }
  return 0;
}
