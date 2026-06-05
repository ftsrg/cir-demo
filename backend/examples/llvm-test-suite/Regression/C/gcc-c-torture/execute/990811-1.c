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

struct s {long a; int b;};

int foo(int x, void *y)
{
  switch(x) {
    case 0: return ((struct s*)y)->a;
    case 1: return *(signed char*)y;
    case 2: return *(short*)y;
  }
  abort();
}

int main ()
{
  struct s s;
  short sh[10];
  signed char c[10];
  int i;

  s.a = 1;
  s.b = 2;
  for (i = 0; i < 10; i++) {
    sh[i] = i;
    c[i] = i;
  }

  if (foo(0, &s) != 1) abort();
  if (foo(1, c+3) != 3) abort();
  if (foo(2, sh+3) != 3) abort();
  exit(0);
}
