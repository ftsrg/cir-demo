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

void __attribute__((mips16)) foo (void) {
  printf("in foo: mips16\n");
}
void __attribute__((nomips16)) nofoo (void) {
  printf("in foo: mips32\n");
}

int __attribute__((mips16)) main() {
  foo();
  nofoo();
  printf("in main: mips16\n");
}


