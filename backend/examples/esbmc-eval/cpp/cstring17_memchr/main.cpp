/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

/* memchr example */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cstring>

int main ()
{
  char * pch;
  char str[] = "Example string";
  pch = (char*) memchr (str, 'p', 14);
  if (pch!=NULL)
    cout << "'p' found at position " << pch-str+1 << "." << endl;
  else
    cout << "'p' not found." << endl;
  return 0;
}
