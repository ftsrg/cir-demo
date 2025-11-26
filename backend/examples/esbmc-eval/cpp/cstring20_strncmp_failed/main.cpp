/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

/* strncmp example */
/*
#include <iostream>
#include <cstring>

int main ()
{
  char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
  int n;
  std::cout << "Looking for R2 astromech droids...";
  for (n=0 ; n<3 ; n++)
    if (strncmp (str[n],"R2xx",2) == 0)
    {
      std::cout <<"found" << str[n] << std::endl;
    }
  return 0;
}
*/

#include <iostream>
#include <cstring>
#include <assert.h>

int main ()
{
  char str[] = "R2D2";
	char str2[] = "R2PO";
	int n;
  std::cout << "Looking for R2 astromech droids...";
  for (n=0 ; n<3 ; n++)
    if (strncmp (str2,"R2xx",2) == 0)
    {
      std::cout <<"found" << str[n] << std::endl;
    }

	assert(strncmp(str, str2, 4) == 0);
  return 0;
}
