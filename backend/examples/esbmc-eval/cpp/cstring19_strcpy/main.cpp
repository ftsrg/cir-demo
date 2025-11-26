/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

/* strcpy example */
#include <cstring>
#include <iostream>

int main ()
{
  char str1[]="Sample string";
  char str2[40];
  char str3[40];
  strncpy (str2,str1,6);
  strncpy (str3,"copy successful",15);
  std::cout << "\nstr1: " << str1 << "\nstr2: " << str2 << "\nstr3: " << str3 << std::endl;
  return 0;
}
