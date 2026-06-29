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

// This tests hard situations for throwing, including the case where an
// exception is active in more than one handler at a time (ie, it needs
// refcounting)
#include <cstdio>

struct foo {
  int i;
  foo() : i(1) { }
  foo(const foo&) : i(2) {}
};

int callee(unsigned i) {
  if (i < 3) throw (int)i;
  if (i < 6) throw 1.0;
  if (i < 9) throw foo();
  return 0;
}

void rethrow() {
  throw;
}

int main() {
  for (unsigned i = 0; i < 10; ++i) {
    try {
      return callee(i);
    } catch (foo &F) {
      try {
	rethrow();
      } catch (foo &F) {
        std::printf("%d: 3\n", i);
      }
    } catch (int) {
      std::printf("%d: 1\n", i);
    } catch (...) {
      std::printf("%d: 2\n", i);
    }
  }
}

