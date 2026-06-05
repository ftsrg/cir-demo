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

char a;
int b, c;
short d;

int main ()
{
  unsigned e = 2;
  unsigned timeout = 0;

  for (; c < 2; c++)
    {
      int f = ~e / 7;
      if (f)
	a = e = ~(b && d);
      while (e < 94)
	{
	  e++;
	  if (++timeout > 100)
	    goto die;
	}
    }
  return 0;
die:
  abort ();
}
