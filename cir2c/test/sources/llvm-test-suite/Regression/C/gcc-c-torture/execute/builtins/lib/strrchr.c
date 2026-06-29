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
strrchr (const char *s, int c)
{
  __SIZE_TYPE__ i;

#ifdef __OPTIMIZE__
  if (inside_main)
    abort ();
#endif

  i = 0;
  while (s[i] != 0)
    i++;

  do
    if (s[i] == c)
      return (char *) s + i;
  while (i-- != 0);

  return 0;
}

__attribute__ ((__noinline__))
char *
rindex (const char *s, int c)
{
  return strrchr (s, c);
}
