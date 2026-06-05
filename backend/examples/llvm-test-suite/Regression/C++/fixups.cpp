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

#include "stdlib.h"

// PR8175

int count = 0;

struct L {
  int n;
  L(int n) : n(n) { count += n; }
  ~L() { count -= n; }
};

void test0(int n) {
  {
    L b(n);
    if (n) goto l;
  }

 l: if (count) abort();
}

void test1(int n) {
  {
    L a(n);
    L b(n);
    if (n) goto l;
  }

 l: if (count) abort();
}

void test2(int n) {
  {
    L a(n);
    {
      L b(n);
      if (n) goto l1;
    }

  l1: goto l2;
  }
 l2: if (count) abort();
}

void test3(int n) {
  {
    L a(n);
    if (n) goto l1;
    goto l1;
  }

 l1: if (count) abort();
}

int main(int argc, char *argv[]) {
  test0(1);
  test1(1);
  test2(1);
  test3(1);
  return 0;
}
