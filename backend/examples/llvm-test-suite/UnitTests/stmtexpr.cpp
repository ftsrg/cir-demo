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

// rdar: //8540501
extern "C" void abort();

struct A
{
  int i;
  A (int j) : i(j) {}
  A (const A &j) : i(j.i) {}
  A& operator= (const A &j) { i = j.i; abort(); return *this; }
  ~A() { }
};

struct B
{
  int i;
  B (const A& a) { i = a.i; }
  B() {}
  B (const B &j) : i(j.i) {}
  ~B() { }
};

A foo(int j)
{
  return ({ j ? A(1) : A(0); });
}


void foo2()
{
  A b = ({ A a(1); A a1(2); A a2(3); a1; a2; a; });
  if (b.i != 1)
    abort(); 
  A c = ({ A a(1); A a1(2); A a2(3); a1; a2; a; A a3(4); a2; a3; });
  if (c.i != 4)
    abort(); 
}

void foo3()
{
  const A &b = ({ A a(1); a; });
  if (b.i != 1)
    abort();
}

void foo4()
{
  const B &b = ({ A a(1); a; });
  if (b.i != 1)
    abort();
}

int main()
{
  foo2();
  foo3();
  foo4();
  return foo(1).i-1;
}
