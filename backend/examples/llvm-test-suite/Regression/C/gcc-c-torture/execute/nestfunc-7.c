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

struct A
{
  int one;
  int two;
  int three;
  int four;
  int five;
  int six;
};

static int test (void)
{
  int base;

  struct A Foo (void)
    {
      struct A a;

      a.one = base + 1;
      a.two = base + 2;
      a.three = base + 3;
      a.four = base + 4;
      a.five = base + 5;
      a.six = base + 6;

      return a;
    }

  base = 10;
  struct A a = Foo ();

  return (a.one == 11
	  && a.two == 12
	  && a.three == 13
	  && a.four == 14
	  && a.five == 15
	  && a.six == 16);
}

int main (void)
{
  return !test ();
}
