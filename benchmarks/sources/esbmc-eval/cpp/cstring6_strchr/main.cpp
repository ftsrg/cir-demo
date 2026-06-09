/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

/* strchr example */
#include <iostream>
#include <cstring>

int main ()
{
  char str[] = "This is a sample string";
  char * pch;
  pch=strchr(str,'s');
  while (pch!=0)
  {
    pch=strchr(pch+1,'s');
  }
  return 0;
}



