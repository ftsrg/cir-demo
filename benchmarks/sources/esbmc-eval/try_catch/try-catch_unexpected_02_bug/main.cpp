/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <iostream>
#include <exception>
using namespace std;

void myunexpected () {
  cerr << "unexpected handler called\n";
  throw;
}

void myfunction () throw (int e,bad_exception) {
  throw 'x';
}

int main (void) {
  set_unexpected (myunexpected);
  try {
    myfunction();
  }
  catch (int) { cerr << "caught int\n"; }
  catch (bad_exception be) { cerr << "caught bad_exception\n"; }
  catch (...) { cerr << "caught other exception (non-compliant compiler?)\n"; }
  return 0;
}
