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

void bar() throw (int) {
  std::cout << "Throwing in bar(): \"hello world\"\n";
  throw "hello world";
}

void foo() {
  try {
    bar();
  } catch (int i) {
    std::cout << "Caught in foo(): " << i << "\n";
  }
}

void unexpected() {
  std::cout << "Throwing in unexpected(): 42\n";
  throw 42;
}

int main() {
  std::set_unexpected(unexpected);
  foo();
}
