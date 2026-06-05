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

void __attribute__((noinline))
foo (int *p, int d1, int d2, int d3,
     short count, int s1, int s2, int s3, int s4, int s5)
{
  int n = count;
  while (n--)
    {
      *p++ = s1;
      *p++ = s2;
      *p++ = s3;
      *p++ = s4;
      *p++ = s5;
    }
}

int main()
{
  int x[10], i;

  foo (x, 0, 0, 0, 2, 100, 200, 300, 400, 500);
  for (i = 0; i < 10; i++)
    if (x[i] != (i % 5 + 1) * 100)
      abort ();
  exit (0);
}
