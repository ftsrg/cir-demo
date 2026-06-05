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

// Test that we can compile a simple class with members in a custom section.
#if defined(__APPLE__)
#define SECTNAME "__TEXT,__section"
#else
#define SECTNAME "section"
#endif

struct A {
  static int foo() __attribute__((section(SECTNAME)));
  static void bar() __attribute__((section(SECTNAME)));
};

int A::foo() { return 0; }
void A::bar() {}

int main() {
  A::bar();
  return A::foo();
}
