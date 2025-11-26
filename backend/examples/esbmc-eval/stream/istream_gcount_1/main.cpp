/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// basic_istream_gcount.cpp
// compile with: /EHsc
#include <iostream>
#include <cassert>
using namespace std;

int main( ) 
{
   cout << "Type the letter 'a': ";

   ws( cin );
   char c[10];

   cin.get( &c[0],9 );
   cout << c << endl;
   assert((int)cin.gcount() >= 0 || (int)cin.gcount() < 10);
   cout << cin.gcount( ) << endl;
}
