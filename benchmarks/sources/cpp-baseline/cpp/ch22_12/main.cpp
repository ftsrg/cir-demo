/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <iostream>
#include <cassert>

using std::cout;
using std::endl;

int main()
{
   int a = 2;
   int b = 3;

        assert(a and b);
	a=2; b=0;
        assert((a and b)==0);

        a=2; b=3;
        assert(a or b);
	a=0; b=0;
        assert((a or b)==0);

        a=2; b=3;
        assert(a not_eq b);
        a=3; b=3;
        assert((a not_eq b)==0);

        a=3; b=3;
        assert(a bitand b);
        a=3; b=0;
        assert((a bitand b)==0);

        a=2; b=3;
        assert(a bitor b);
        a=0; b=0;
        assert((a bitor b)==0);

        a=2; b=3;
        assert(compl a);
        a=1;
        assert((compl a)<0);

        assert(a xor b);
        a=1; b=1;
        assert((a xor b)==0);

        a=2; b=3;
        assert(a and_eq b);
        a=0; b=0;
        assert((a and_eq b)==0);

        a=2; b=3;
        assert(a or_eq b);
        a=0; b=0;
        assert((a or_eq b)==0);

        a=2; b=3;
        assert(a xor_eq b);
        a=0; b=0;
        assert((a xor_eq b)==0);

#if 0
       << "\n     not a: " << ( not a )
       << "\na xor_eq b: " << ( a xor_eq b ) << endl;
#endif	
   return 0;

}  // end main

