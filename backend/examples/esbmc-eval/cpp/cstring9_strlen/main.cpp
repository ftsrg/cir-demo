/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

/* strlen example */
#include <iostream>
#include <cstring>
#include <cassert>

int main ()
{
  char szInput[256] = "test of the string";
  std::cout << "The sentence entered is " << (unsigned)strlen(szInput) << " characters long" << std::endl;
  assert((unsigned)strlen(szInput)==18);

  return 0;
}
