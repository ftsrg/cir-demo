/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

/* strcmp example */
#include <iostream>
#include <cstring>

int main ()
{
  char szKey[] = "apple";
  char szInput[80] = "appla";
  
	while (strcmp (szKey,szInput) != 0){
     std::cout << "Guess my favourite fruit? " <<
     szInput << std::endl;
		 szInput[4] = 'e';
  }
  return 0;
}
