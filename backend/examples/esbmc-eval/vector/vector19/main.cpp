/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// vector_at.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>
using namespace std;

int main( )
{
   vector <int> v1;
   
   v1.push_back( 10 );
   v1.push_back( 20 );

   const int &i = v1.at( 0 );
   int &j = v1.at( 1 );
	int &k = v1.at( 2 );
   cout << "The first element is " << i << endl;
   cout << "The second element is " << j << endl;
}
