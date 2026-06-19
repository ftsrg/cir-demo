/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <iostream>
#include <cassert>

int nondet_int();

int main()
{
   int a,b,c;
   a=nondet_int();
   b=nondet_int();
   c=a+b;
   assert(c!=a+b);
   return 0; 
}


