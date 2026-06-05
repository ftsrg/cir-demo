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

/* PR rtl-optimization/57875 */

extern void abort (void);
int a[1], b, c, d, f, i;
char e[1];

int
main ()
{
  for (; i < 1; i++)
    if (!d)
      {
	if (!c)
	  f = 2;
	e[0] &= f ^= 0;
      }
  b = a[e[0] >> 1 & 1];
  if (b != 0)
    abort ();
  return 0;
}
