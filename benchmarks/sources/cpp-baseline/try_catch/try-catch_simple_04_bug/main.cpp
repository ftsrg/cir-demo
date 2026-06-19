/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <exception>
using std::exception;

#include <cassert>

void throwException()
{
  try {
    throw exception();
  }
  catch ( exception &caughtException ) {
    int a = 2;
    assert(a != 2);
    throw;
  }
}

int main()
{
  try {
    throwException();
  }
  catch ( exception &caughtException ) {
  }
  return 0;
}
