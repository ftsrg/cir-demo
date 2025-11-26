/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include<cassert>

struct Base {};
struct Base1 {};
struct Base2 {};
struct Derived : Base2, Base, Base1  {};

int main()
{
  try {
    throw Derived();
  }
  catch(Base2) {  }
  catch(Base1) {  }
  catch(Base) { assert(0); }
  return 0;
}
