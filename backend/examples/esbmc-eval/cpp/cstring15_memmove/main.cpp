/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

/* memmove example */
#include <iostream>
#include <cstring>

int main ()
{
  char str[] = "memmove can be very useful......";
  memmove (str+20,str+15,11);
  std::cout << str << std::endl;
  return 0;
}
