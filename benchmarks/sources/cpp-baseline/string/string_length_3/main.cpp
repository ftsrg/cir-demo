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
	string str1, str2, str3;
	str1 = "Test ";
	str2 = "string";
	str3 = str1 + str2;
	assert(str3.length() == 11);

}
