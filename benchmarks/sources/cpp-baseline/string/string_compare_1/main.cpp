/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <string>
#include <cassert>
using namespace std;


int main(){
	string str1;
	int i, j, k;
	str1 = "Testing";
	i = str1.compare("Testing");
	j = str1.compare("Test");
	k = str1.compare("Testing this");
	assert( ( i == 0 ) && ( j > 0 ) && ( k < 0 ) );
	

}
