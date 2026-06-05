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

/* PR rtl-optimization/68249 */

int a, b, c, g, k, l, m, n;
char h;

void
fn1 ()
{
  for (; k; k++)
    {
      m = b || c < 0 || c > 1 ? : c;
      g = l = n || m < 0 || (m > 1) > 1 >> m ? : 1 << m;
    }
  l = b + 1;
  for (; b < 1; b++)
    h = a + 1;
}

int
main ()
{
  char j;
  for (; a < 1; a++)
    {
      fn1 ();
      if (h)
	j = h;
      if (j > c)
	g = 0;
    }

  if (h != 1)
    __builtin_abort ();

  return 0;
}
