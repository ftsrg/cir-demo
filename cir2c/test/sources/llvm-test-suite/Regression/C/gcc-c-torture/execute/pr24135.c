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

/* { dg-require-effective-target trampolines } */

extern void abort (void);

int x(int a, int b)
{
  __label__ xlab;
  __label__ xlab2;

  void y(int b)
    {
       switch (b)
        {
          case 1: goto xlab;
          case 2: goto xlab;
        }
    }

  a = a + 2;
  y (b);

 xlab:
  return a;

 xlab2:
  a++;
  return a;

}

int main ()
{
  int i, j;

  for (j = 1; j <= 2; ++j)
    for (i = 1; i <= 2; ++i)
      {
	int a = x (j, i);
	if (a != 2 + j)
	  abort ();
      }

  return 0;
}
