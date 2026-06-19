/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// bad_typeid example
#include <cassert>
#include <typeinfo>
using namespace std;

class Polymorphic {virtual void Member(){}};

int main () {
  try
  {
    Polymorphic * pb = 0;
    const char* name = typeid(*pb).name();
  }
  catch (bad_typeid& bt)
  {
    assert(0);
  }
  return 0;
}
