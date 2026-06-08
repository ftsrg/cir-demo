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

// Several virtual slots, mixed overriding, and a non-overridden inherited
// virtual. Checks that each slot index resolves to the right function through
// the vtable array, and that a base-only virtual still dispatches correctly.

struct Shape {
  virtual int area() { return 0; }
  virtual int sides() { return 0; }
  virtual int id() { return 7; }   // not overridden by Square
};

struct Square : public Shape {
  int s;
  Square(int side) : s(side) {}
  int area() override { return s * s; }
  int sides() override { return 4; }
};

int main() {
  Shape *sh = new Square(5);
  int a = sh->area();    // Square::area() == 25
  int n = sh->sides();   // Square::sides() == 4
  int i = sh->id();      // inherited Shape::id() == 7
  delete sh;
  return (a == 25 && n == 4 && i == 7) ? 0 : 1;
}
