/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <vector>
#include <iostream>
using namespace std;   

int main( )
{
   vector <int> v1;

   v1.push_back( 1 );
   cout << "Current capacity of v1 = " 
      << v1.capacity( ) << endl;
   v1.reserve( 20 );
   cout << "Current capacity of v1 = " 
      << v1.capacity( ) << endl;
}
