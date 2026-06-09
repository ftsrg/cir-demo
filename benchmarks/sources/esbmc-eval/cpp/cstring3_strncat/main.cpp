/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

/* strncat example */
#include <iostream>
#include <cstring>

int main ()
{
  char str1[20] = "To be ";
  char str2[20] = "or not to be";
  char *str;
  str = strncat (str1, str2, 6);
  std::cout << str << std::endl;
  return 0;
}
