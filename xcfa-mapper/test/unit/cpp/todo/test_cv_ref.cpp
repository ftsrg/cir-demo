/*
 * Copyright 2025 Budapest University of Technology and Economics
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

// Limitation example: const/volatile/reference-rich signatures.
// Mapper mostly erases cv/ref qualifiers in type lowering.

struct T {
  int value;
};

int g(const T& t, volatile int* p) {
  int v = t.value;
  if (p) {
    *const_cast<int*>(p) = v;
  }
  return v;
}

int main() {
  T t{42};
  volatile int out = 0;
  return g(t, &out) - static_cast<int>(out);
}
