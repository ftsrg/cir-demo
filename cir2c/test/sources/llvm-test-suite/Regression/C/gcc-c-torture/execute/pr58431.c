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

char a, h;
int b, d, e, g, j, k;
volatile int c;
short i;

int
main ()
{
  int m;

  m = i ^= 1;
  for (b = 0; b < 1; b++)
    {
      char o = m;
      g = k;
      j = j || c;
      if (a != o)
	for (; d < 1; d++)
	  ;
      else
	{
	  char *p = &h;
	  *p = 1;
	  for (; e; e++)
	    ;
	}
    }

  if (h != 0)
    __builtin_abort();

  return 0;
}
