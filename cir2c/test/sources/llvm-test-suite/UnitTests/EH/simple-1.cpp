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

#include <iostream>
#include <string>

#define DECLARE_FUNC(FUNC)                                \
  void throw_ ## FUNC() __attribute__((noinline));        \
  void throw_ ## FUNC()

DECLARE_FUNC(char) {
  char c = 'a';
  std::cout << "Throwing char: " << c << "\n";
  throw c;
}

DECLARE_FUNC(int) {
  int i = 37;
  std::cout << "Throwing int: " << i << "\n";
  throw i;
}

DECLARE_FUNC(float) {
  float f = 37.927;
  std::cout << "Throwing float: " << f << "\n";
  throw f;
}

DECLARE_FUNC(double) {
  double d = 37.927;
  std::cout << "Throwing double: " << d << "\n";
  throw d;
}

DECLARE_FUNC(string) {
  std::string s = "hello world";
  std::cout << "Throwing std::string: " << s << "\n";
  throw s;
}

struct A {};

DECLARE_FUNC(A) {
  std::cout << "Throwing A\n";
  throw A();
}

int main() {
  try {
    throw_char();
  } catch (char e) {
    std::cout << "Caught char: " << e << "\n";
  }

  try {
    throw_int();
  } catch (int e) {
    std::cout << "Caught int: " << e << "\n";
  }

  try {
    throw_float();
  } catch (float e) {
    std::cout << "Caught float: " << e << "\n";
  }

  try {
    throw_double();
  } catch (double e) {
    std::cout << "Caught double: " << e << "\n";
  }

  try {
    throw_string();
  } catch (const std::string &e) {
    std::cout << "Caught std::string: " << e << "\n";
  }

  try {
    throw_A();
  } catch (const A &e) {
    std::cout << "Caught A\n";
  }
}
