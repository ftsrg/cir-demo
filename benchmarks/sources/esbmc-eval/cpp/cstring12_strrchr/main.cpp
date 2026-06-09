/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

/* strrchr example */
#include <iostream>
#include <cstring>

int main ()
{
  char str[] = "This is a sample string";
  char * pch;
  pch=strrchr(str,'s');
  std::cout << "Last occurence of 's' found at " << pch-str+1 << std::endl;
  return 0;
}
