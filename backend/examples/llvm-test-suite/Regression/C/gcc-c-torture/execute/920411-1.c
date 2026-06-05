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

long f (w)
     char *w;
{
  long k, i, c = 0, x;
  char *p = (char*) &x;
  for (i = 0; i < 1; i++)
    {
      for (k = 0; k < sizeof (long); k++)
	p[k] = w[k];
      c += x;
    }
  return c;
}

main ()
{
  int i;
  char a[sizeof (long)];

  for (i = sizeof (long); --i >= 0;) a[i] = ' ';
  if (f (a) != ~0UL / (unsigned char) ~0 * ' ')
    abort ();
  exit (0);
}
