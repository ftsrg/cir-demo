// Benchmark-derived todo example: std::includes over sorted arrays.
// Origin: backend/examples/esbmc-eval/algorithm/algorithm110-c++03/main.cpp
// Although the source is simple, the instantiated STL implementation still
// brings in unsupported C++ lowering patterns in CIR.

#include <algorithm>
#include <cassert>
#include <iostream>

bool myfunction(int i, int j) { return i < j; }

int main() {
  int container[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
  int continent[] = {40, 30, 20, 10};

  std::sort(container, container + 10);
  std::sort(continent, continent + 4);

  if (std::includes(container, container + 10, continent, continent + 4)) {
    std::cout << "container includes continent!" << std::endl;
  }
  assert(!(std::includes(container, container + 10, continent, continent + 4)));

  if (std::includes(container, container + 10, continent, continent + 4,
                    myfunction)) {
    std::cout << "container includes continent!" << std::endl;
  }
  assert(!(std::includes(container, container + 10, continent, continent + 4,
                          myfunction)));

  return 0;
}
