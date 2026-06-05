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

/* On ARM, BAR used to get a bogus number in E due to stack
   misalignment.  */

extern void abort (void);
extern void exit (int);

void
foo (void)
{
  int f = 0;

  void bar (int a, int b, int c, int d, int e)
    {
      if (e != 0)
	{
	  f = 1;
	  abort ();
	}
    }

  bar (0, 0, 0, 0, 0);
}

int
main (void)
{
  foo ();
  exit (0);
}
