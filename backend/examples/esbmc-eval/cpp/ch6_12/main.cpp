/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

class CreateAndDestroy {

public:
   CreateAndDestroy( int, char * );  // constructor
//   ~CreateAndDestroy();              // destructor
}; 

//static CreateAndDestroy first( 1, "(global before main)" );

int main()
{

   static CreateAndDestroy second( 2, "(local automatic in main)" );
   return 0;
}
