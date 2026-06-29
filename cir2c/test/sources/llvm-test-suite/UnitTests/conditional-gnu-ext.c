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

// rdar://8453812
extern void abort();

_Complex int getComplex(_Complex int val) {
  static int count;
  if (count++)
    abort();
  return val;
}

_Complex int doo() {
    _Complex int cond;
    _Complex int rhs;

    return getComplex(1+2i) ? : rhs;
}

int main() {
  doo();
  return 0;
}

