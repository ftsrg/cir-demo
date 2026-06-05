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


void dummy (x, y)
     int *x;
     int y;
{}

int
main (argc, argv)
     int argc;
     char **argv;
{
  int number_columns=9;
  int cnt0 = 0;
  int cnt1 = 0;
  int i,A1;

  for (i = number_columns-1; i != 0; i--)
    {
      if (i == 1)
	{
	  dummy(&A1, i);
	  cnt0++;
	}
      else
	{
          dummy(&A1, i-1);
          cnt1++;
	}
    }
  if (cnt0 != 1 || cnt1 != 7)
    abort ();
  exit (0);
}
