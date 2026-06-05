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

/* PR tree-optimization/49073 */

extern void abort (void);
int a[] = { 1, 2, 3, 4, 5, 6, 7 }, c;

int
main ()
{
  int d = 1, i = 1;
  _Bool f = 0;
  do
    {
      d = a[i];
      if (f && d == 4)
	{
	  ++c;
	  break;
	}
      i++;
      f = (d == 3);
    }
  while (d < 7);
  if (c != 1)
    abort ();
  return 0;
}
