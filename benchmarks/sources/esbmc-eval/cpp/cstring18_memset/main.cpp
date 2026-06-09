/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

/* memset example */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cstring>

int main ()
{
  char str[] = "almost every programmer should know memset!";
  memset (str,'-',6);
  cout << str << endl;
  return 0;
}
