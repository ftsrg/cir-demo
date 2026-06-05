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

typedef struct
{
  unsigned short b0, b1, b2, b3;
} four_quarters;

four_quarters x;
int a, b;

void f (four_quarters j)
{
  b = j.b2;
  a = j.b3;
}

main ()
{
  four_quarters x;
  x.b0 = x.b1 = x.b2 = 0;
  x.b3 = 38;
  f(x);
  if (a != 38)
    abort();
  exit (0);
}
