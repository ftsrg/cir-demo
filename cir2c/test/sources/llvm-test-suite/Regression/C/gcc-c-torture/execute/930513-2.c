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

sub3 (i)
     const int *i;
{
}

eq (a, b)
{
  static int i = 0;
  if (a != i)
    abort ();
  i++;
}

main ()
{
  int i;

  for (i = 0; i < 4; i++)
    {
      const int j = i;
      int k;
      sub3 (&j);
      k = j;
      eq (k, k);
    }
  exit (0);
}
