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

/* PR rtl-optimization/57876 */

extern void abort (void);
int a, b = 1, c, *d = &c, f, *g, h, j;
static int e;

int
main ()
{
  int i;
  for (i = 0; i < 2; i++)
    {
      long long k = b;
      int l;
      for (f = 0; f < 8; f++)
	{
	  int *m = &e;
	  j = *d;
	  h = a * j - 1;
	  *m = (h == 0) < k;
	  g = &l;
	}
    }
  if (e != 1)
    abort ();
  return 0;
}
