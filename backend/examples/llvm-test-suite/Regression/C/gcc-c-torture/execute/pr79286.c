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

int a = 0, c = 0;
static int d[][8] = {};

int main ()
{
  int e = 0;
  for (int b = 0; b < 4; b++)
    {
      __builtin_printf ("%d\n", b, e);
      while (a && c++)
	e = d[300000000000000000][0];
    }

  return 0;
}
