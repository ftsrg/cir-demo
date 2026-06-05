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

int a[20], b, c;

int
fn1 ()
{
  int d, e, f, g = 0;

  a[12] = 1;
  for (e = 0; e < 3; e++)
    for (d = 0; d < 2; d++)
      {
	for (f = 0; f < 2; f++)
	  {
	    g ^= a[12] > 1;
	    if (g)
	      return 0;
	    if (b)
	      break;
	  }
	for (c = 0; c < 1; c++)
	  a[d] = a[e * 3 + 9];
      }
  return 0;
}

int
main ()
{
  fn1 ();
  if (a[0] != 0)
    abort ();
  return 0;
}
