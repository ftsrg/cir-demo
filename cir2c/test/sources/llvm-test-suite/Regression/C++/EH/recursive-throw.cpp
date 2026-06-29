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

// Testcase for <rdar://problem/13360379> / PR15555
#include <cstdlib>

bool thrown = false;
bool caught = false;

class TestException {
public:
    TestException() {}
};

struct Z {
  Z() {}
  ~Z() {}
};

void thr(int n) {
  if( --n <= 0 ) {
    thrown = true;
    throw TestException();
    abort();
  }

  Z z;
  thr(n - 1);
}

__attribute__((noinline))
void run() {
  try {
    thr(10);
    abort();
  } catch(const TestException &e) {
    caught = true;
  }
}

int main(int argc, char* argv[]) {
  try {
    run();
  } catch(...) {
    abort();
  }

  if (thrown && caught)
    return EXIT_SUCCESS;

  return EXIT_FAILURE;
}
