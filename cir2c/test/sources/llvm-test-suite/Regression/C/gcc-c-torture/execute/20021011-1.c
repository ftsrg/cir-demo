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

/* PR opt/8165.  */

extern void abort (void);

char buf[64];

int
main (void)
{
  int i;

  __builtin_strcpy (buf, "mystring");
  if (__builtin_strcmp (buf, "mystring") != 0)
    abort ();

  for (i = 0; i < 16; ++i)
    {
      __builtin_strcpy (buf + i, "mystring");
      if (__builtin_strcmp (buf + i, "mystring") != 0)
	abort ();
    }

  return 0;
}
