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

#define VALUE 0x123456789abcdefLL
#define AFTER 0x55

void
test1 (int a, long long value, int after)
{
  if (a != 1
      || value != VALUE
      || after != AFTER)
    abort ();
}

void
test2 (int a, int b, long long value, int after)
{
  if (a != 1
      || b != 2
      || value != VALUE
      || after != AFTER)
    abort ();
}

void
test3 (int a, int b, int c, long long value, int after)
{
  if (a != 1
      || b != 2
      || c != 3
      || value != VALUE
      || after != AFTER)
    abort ();
}

void
test4 (int a, int b, int c, int d, long long value, int after)
{
  if (a != 1
      || b != 2
      || c != 3
      || d != 4
      || value != VALUE
      || after != AFTER)
    abort ();
}

void
test5 (int a, int b, int c, int d, int e, long long value, int after)
{
  if (a != 1
      || b != 2
      || c != 3
      || d != 4
      || e != 5
      || value != VALUE
      || after != AFTER)
    abort ();
}

void
test6 (int a, int b, int c, int d, int e, int f, long long value, int after)
{
  if (a != 1
      || b != 2
      || c != 3
      || d != 4
      || e != 5
      || f != 6
      || value != VALUE
      || after != AFTER)
    abort ();
}

void
test7 (int a, int b, int c, int d, int e, int f, int g, long long value, int after)
{
  if (a != 1
      || b != 2
      || c != 3
      || d != 4
      || e != 5
      || f != 6
      || g != 7
      || value != VALUE
      || after != AFTER)
    abort ();
}

void
test8 (int a, int b, int c, int d, int e, int f, int g, int h, long long value, int after)
{
  if (a != 1
      || b != 2
      || c != 3
      || d != 4
      || e != 5
      || f != 6
      || g != 7
      || h != 8
      || value != VALUE
      || after != AFTER)
    abort ();
}

int
main ()
{
  test1 (1, VALUE, AFTER);
  test2 (1, 2, VALUE, AFTER);
  test3 (1, 2, 3, VALUE, AFTER);
  test4 (1, 2, 3, 4, VALUE, AFTER);
  test5 (1, 2, 3, 4, 5, VALUE, AFTER);
  test6 (1, 2, 3, 4, 5, 6, VALUE, AFTER);
  test7 (1, 2, 3, 4, 5, 6, 7, VALUE, AFTER);
  test8 (1, 2, 3, 4, 5, 6, 7, 8, VALUE, AFTER);
  exit (0);
}
