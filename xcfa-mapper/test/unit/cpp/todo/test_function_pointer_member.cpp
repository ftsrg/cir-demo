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

// Limitation example: function-pointer members.
// Mapper currently simplifies pointer-to-function types to void*.

using Fn = int(*)(int);

int inc(int x) { return x + 1; }

struct Cb {
  Fn fn;
};

int apply(Cb cb, int v) {
  return cb.fn(v);
}

int main() {
  Cb cb{&inc};
  return apply(cb, 10);
}
