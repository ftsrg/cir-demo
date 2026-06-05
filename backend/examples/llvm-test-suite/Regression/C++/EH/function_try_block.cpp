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


#include <stdio.h>

static unsigned NumAs = 0;

struct A {
  unsigned ANum;
  A() : ANum(NumAs++) { printf("Created A #%d\n", ANum); }
  A(const A &a) : ANum(NumAs++) { printf("Copy Created A #%d\n", ANum); }
  ~A() { printf("Destroyed A #%d\n", ANum); }
};

static bool ShouldThrow = false;

int throws()
  try
{
  if (ShouldThrow) throw 7; return 123;
} catch (...) {
  printf("'throws' threw an exception: rethrowing!\n");
  throw;
}

struct B {
  A a0, a1, a2;
  int i;
  A a3, a4;

  B();
  ~B() { printf("B destructor!\n"); }
};

B::B()
try 
: i(throws())
{
  printf("In B constructor!\n");
}
catch (int i) {
  printf("In B catch block with int %d: auto rethrowing\n", i);
}


int main() {
  {
    B b;   // Shouldn't throw.
  }

  try {
    ShouldThrow = true;
    B b;
  } catch (...) {
    printf("Caught exception!\n");
  }
}
