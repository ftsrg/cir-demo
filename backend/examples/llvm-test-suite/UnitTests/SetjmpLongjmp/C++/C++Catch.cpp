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
#include <csetjmp>

class C {
  const char *name;
public:
  C(const char *n) : name(n) {}
  ~C() { printf("Destroying C in function %s\n", name); }
};

jmp_buf buf;

void foo()
{
  C Obj("foo");
  printf("Longjmping from foo() function\n");
  longjmp(buf, 37);
}

int main()
{
  try {
    C Obj("main");
    if (!setjmp(buf)) foo();
    printf("longjmp throw NOT caught in catch(...) block\n");
  } catch(...) {
    printf("Caught longjmp throw in catch(...) block\n");
  }
}

