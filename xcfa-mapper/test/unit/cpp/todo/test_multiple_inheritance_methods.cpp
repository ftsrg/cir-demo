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

// Benchmark-derived todo example: multiple inheritance method access.
// Origin: backend/examples/esbmc-eval/inheritance_bringup/inheritance01/main.cpp
// This requires base-subobject address computation for non-virtual bases.

#include <cassert>

class Shape {
 public:
  void setWidth(int w) { width = w; }
  void setHeight(int h) { height = h; }

 protected:
  int width;
  int height;
};

class PaintCost {
 public:
  int getCost(int area) { return area * 70; }
};

class Rectangle : public Shape, public PaintCost {
 public:
  int getArea() { return width * height; }
};

int main() {
  Rectangle rect;
  rect.setWidth(5);
  rect.setHeight(7);

  int area = rect.getArea();
  int cost = rect.getCost(area);
  assert(cost == 2450);
  return 0;
}
