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

#include <exception>
#include <iostream>

void unexpected_float() {
  std::cout << "Throwing in unexpected(): 927.37\n";
  throw 927.37f;
}

void unexpected_int() {
  std::set_unexpected(unexpected_float);
  std::cout << "Throwing in unexpected(): 42\n";
  throw 42;
}

void qux() __attribute__((always_inline));
void qux() {
  std::cout << "Throwing in qux(): \"hello world\"\n";
  throw "hello world";
}

void bar() throw (int) __attribute__((always_inline));
void bar() throw (int) {
  std::set_unexpected(unexpected_int);
  try {
    qux();
  } catch (int i) {
    std::cout << "Caught in bar(): " << i << "\n";
    exit(EXIT_FAILURE);
  }
}

void foo() throw (float) {
  try {
    bar();
  } catch (const char *s) {
    std::cout << "Caught in foo(): " << s << "\n";
    exit(EXIT_FAILURE);
  }
}

int main() {
  try {
    foo();
  } catch (float f) {
    std::cout << "Caught in main(): " << f << "\n";
  } catch (...) {
    std::cout << "Caught in main(): catch all\n";
    exit(EXIT_FAILURE);
  }
}
