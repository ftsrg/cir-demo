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


#include <stdlib.h>

int a, *c, d, e, g, f;
short b;

int
fn1 ()
{
  int h = d != 10;
  if (h > g)
     asm volatile ("" : : : "memory");
  if (h == 10)
    {
      int *i = 0;
      a = 0;
      for (; a < 7; a++)
	for (; *i;)
	  ;
    }
  else
    {
      b = e / h;
      return f;
    }
  c = &h;
  abort ();
}

int
main ()
{
  fn1 ();
  exit (0);
}
