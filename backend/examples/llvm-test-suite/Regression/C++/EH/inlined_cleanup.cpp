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

#include <cstdio>
#include <cstring>

class Cleanup {
  char name[10];
public:
  Cleanup(const char* n) {
    strcpy(name, n);
  }
  ~Cleanup() {
    printf("Cleanup for %s!\n", name);
  }
};

static void foo() {
  Cleanup C("num");
  throw 3;
}

int main(void) {
  try {
    foo();
  } catch (int i) {
    printf("Caught %d!\n", i);
  }
  try {
    Cleanup a("a");
    throw Cleanup("c");
    Cleanup b("b");
  } catch (Cleanup &c) {
    printf("Caught cleanup!\n");
  }
  try {
    Cleanup a("ap");
    throw new Cleanup("cp");
    Cleanup b("bp");
  } catch (Cleanup *c) {
    printf("Caught cleanup!\n");
    delete c;
  }
  return 0;
}
