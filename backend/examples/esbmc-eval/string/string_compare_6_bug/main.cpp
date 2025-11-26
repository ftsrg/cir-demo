/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

//TEST FAILS

#include <string>
#include <cassert>
using namespace std;

int main(){
	string str1, str2;
	int i, j, k;
	str1 = string("Test");
	str2 = str1;

	i = str2.compare(str1);
	str1 = 'T';
	j = str2.compare(str1);
	str1 = "Testing";
	k = str2.compare(str1);
	assert( ( i != 0 ) && ( j <= 0 ) && ( k >= 0 ) );

}
