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

int c = -1;

foo (p)
     int *p;
{
  int x;
  int a;

  a = p[0];
  x = a + 5;
  a = c;
  p[0] = x - 15;
  return a;
}

int main()
{
   int b = 1;
   int a = foo(&b);

   if (a != -1 || b != (1 + 5 - 15))
     abort ();

   exit (0);
}
