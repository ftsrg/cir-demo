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

class foo
{
public:
  int a;
  int b;
  int c;
  int d;

  foo(void) : a(0), b(0) {}

  foo(int aa, int bb) : a(aa), b(bb) {}

  const foo operator+(const foo& in) const;

  foo operator+=(const foo& in);
};

const foo foo::operator+(const foo& in) const {
  foo Out;
  Out.a = a + in.a;
  Out.b = b + in.b;
  return Out;
}

foo foo::operator+=(const foo& in) {
  *this = *this + in;
  return *this;
}

int main() {
  foo x(1, 2);
  foo y(3, 4);
  x += y;
  printf("%d %d\n", x.a, x.b);
  return 0;
}
