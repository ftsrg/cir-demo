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

int bar = 0;

f (p)
     int *p;
{
  int foo = 2;

  while (foo > bar)
    {
      foo -=  bar;
      *p++ = foo;
      bar = 1;
    }
}

main ()
{
  int tab[2];
  tab[0] = tab[1] = 0;
  f (tab);
  if (tab[0] != 2 || tab[1] != 1)
    abort ();
  exit (0);
}
