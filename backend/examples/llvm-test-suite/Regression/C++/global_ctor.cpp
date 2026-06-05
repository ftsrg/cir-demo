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
//extern int printf(const char *, ...);

int CN = 0;
int DN = 0;

struct foo {
  int Num;
  foo(int num) : Num(num) {
    printf("Foo ctor %d %d\n", Num, CN++);
  }
  ~foo() {
    printf("Foo dtor %d %d\n", Num, DN++);
  }
} Constructor1(7);     // Global with ctor to be called before main
foo Constructor2(12);

struct bar {
  ~bar() {
    printf("bar dtor\n");
  }
} Destructor1;     // Global with dtor

int main() {
  printf("main\n");
  return 0;
}
