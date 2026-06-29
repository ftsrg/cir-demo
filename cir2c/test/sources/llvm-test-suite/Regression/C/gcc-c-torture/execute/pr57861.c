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

/* PR rtl-optimization/57861 */

extern void abort (void);
short a = 1, f;
int b, c, d, *g = &b, h, i, j;
unsigned int e;

static int
foo (char p)
{
  int k;
  for (c = 0; c < 2; c++)
    {
      i = (j = 0) || p;
      k = i * p;
      if (e < k)
	{
	  short *l = &f;
	  a = d && h;
	  *l = 0;
	}
    }
  return 0;
}

int
main ()
{
  *g = foo (a);
  if (a != 0)
    abort ();
  return 0;
}
