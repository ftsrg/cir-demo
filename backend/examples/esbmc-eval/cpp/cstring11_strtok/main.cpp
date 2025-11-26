/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

/* strtok example */
#include <iostream>
#include <cstring>

int main ()
{
  char str[] ="- This, a sample string.";
  char * pch;
  std::cout << "Splitting string " << str << " into tokens:" << std::endl;
  pch = strtok (str," ,.-");
  while (pch != NULL)
  {
    std::cout << pch << std::endl;
    pch = strtok (NULL, " ,.-");
  }
  return 0;
}
