/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

/*
 * dynamic cast, check address
 * Contains virtual, but doesn't check polymorhism
 */
#include <cassert>
using namespace std;

struct A {
  virtual ~A() { };
};

struct B : A { };

int main() {
  B bobj;
  A* ap = &bobj;
  void * vp = dynamic_cast<void *>(ap);
  assert(vp == &bobj);
}

