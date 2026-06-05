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

/* { dg-skip-if "ptxas crashes or executes incorrectly" { nvptx-*-* } { "-O0" "-Os" } { "" } } Reported 2015-11-20  */

int a, b, d = 1, e, f, o, u, w = 1, z;
short c, q, t;

int
main ()
{
  char g;
  for (; d; d--)
    {
      while (o)
	for (; e;)
	  {
	    c = b;
	    int h = o = z;
	    for (; u;)
	      for (; a;)
		;
	  }
      if (t < 1)
	g = w;
      f = g;
      g && (q = 1);
    }

  if (q != 1)
    __builtin_abort ();

  return 0;
}
