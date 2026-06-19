/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <iostream>
#include <new>          // C++ standard new operator
#include <cstring>      // strcpy and strlen prototypes
#include <cassert>

int main()
{
 char first[10];
 strcpy(first, "test");
 
 char* firstName = new char[ strlen( first ) + 1 ];
 strcpy( firstName, first );
 
 assert(strcmp(first,"test")==0);
 return 0;
}
