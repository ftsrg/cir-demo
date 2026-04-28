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

// Limitation example: bit-fields and packing semantics.
// Mapper does not preserve bit widths/packing in reconstructed C structs.

struct Flags {
  unsigned a : 1;
  unsigned b : 3;
  unsigned c : 4;
};

unsigned read_flags(const Flags& f) {
  return (f.a << 0) | (f.b << 1) | (f.c << 4);
}

int main() {
  Flags f{};
  f.a = 1;
  f.b = 5; // truncated to 3 bits in real C++ layout/semantics
  f.c = 7;
  return static_cast<int>(read_flags(f));
}
