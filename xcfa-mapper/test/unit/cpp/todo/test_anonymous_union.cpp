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

// Limitation example: nested/anonymous union in a struct.
// Anonymous member naming and exact reconstruction may be incomplete.

struct Outer {
  union {
    int i;
    float f;
  };
};

int main() {
  Outer o{};
  o.i = 1065353216; // bit pattern for ~1.0f on IEEE-754
  return (o.f > 0.9f && o.f < 1.1f) ? 0 : 1;
}
