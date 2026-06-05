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

/* PR rtl-optimization/19579 */

extern void abort (void);

int
foo (int i, int j)
{
  int k = i + 1;

  if (j)
    {
      if (k > 0)
	k++;
      else if (k < 0)
	k--;
    }

  return k;
}

int
main (void)
{
  if (foo (-2, 0) != -1)
    abort ();
  if (foo (-1, 0) != 0)
    abort ();
  if (foo (0, 0) != 1)
    abort ();
  if (foo (1, 0) != 2)
    abort ();
  if (foo (-2, 1) != -2)
    abort ();
  if (foo (-1, 1) != 0)
    abort ();
  if (foo (0, 1) != 2)
    abort ();
  if (foo (1, 1) != 3)
    abort ();
  return 0;
}
