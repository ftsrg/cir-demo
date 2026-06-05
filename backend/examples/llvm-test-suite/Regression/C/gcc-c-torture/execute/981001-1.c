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

#define NG   0x100L

unsigned long flg = 0;

long sub (int n)
{
  int a, b ;

  if (n >= 2)
    {
      if (n % 2 == 0)
	{
	  a = sub (n / 2);

	  return (a + 2 * sub (n / 2 - 1)) * a;
	}
      else
	{
	  a = sub (n / 2 + 1);
	  b = sub (n / 2);

	  return a * a + b * b;
	}
    }
  else
    return (long) n;
}

int main (void)
{
  if (sub (30) != 832040L)
    flg |= NG;

  if (flg)
    abort ();

  exit (0);
}
