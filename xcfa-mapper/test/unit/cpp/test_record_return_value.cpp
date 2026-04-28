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

// Record return/value-flow example.
// This exercises struct reconstruction, zero-initialization, and return-by-value.

struct S {
  int a;
  double b;
};

S make_s();

S make_s() {
  S s{};
  s.a = 1;
  s.b = 2.0;
  return s;
}

int main() {
  S s = make_s();
  return (s.a == 1 && s.b > 1.5) ? 0 : 1;
}
