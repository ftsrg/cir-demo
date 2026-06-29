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

int f (i) { return 12; }
int g () { return 0; }

main ()
{
  int i, s;

  for (i = 0; i < 32; i++)
    {
      s = f (i);

      if (i == g ())
	s = 42;
      if (i == 0 || s == 12)
	;
      else
	abort ();
    }

  exit (0);
}
