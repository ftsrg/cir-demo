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


extern void exit (int);

int a = 3, b, c, f, g, h;
unsigned d;
char *e;

int
main ()
{
  for (; a; a--)
    {
      int i;
      if (h && i)
	__builtin_printf ("%d%d", c, f);
      i = 0;
      for (; i < 2; i++)
	if (g)
	  for (; d < 10; d++)
	    b = *e;
      i = 0;
      for (; i < 1; i++)
	;
    }
  exit (0);
}
