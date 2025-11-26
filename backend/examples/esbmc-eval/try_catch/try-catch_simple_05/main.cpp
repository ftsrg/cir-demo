/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <iostream>
using namespace std;

#include <exception>
using std::exception;

#include <cassert>

void throwException()
{
  int numerador = 2;
  int denominador = 0;

  try {
    if (denominador == 0)
      throw 1;
  }
  catch ( int ) {
    denominador = 1;
  }

  int result = numerador/denominador;
  cout << result << endl;
}

int main()
{
  throwException();
  return 0;
}
