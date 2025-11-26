/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <string>
#include <cassert>
#include <iostream>

using namespace std;

int main(){
	string str1, str2, str3;
	
	str1 = string("Test string test");
	str2 = str1.substr(5,6);
	cout << str2;
	assert(str2 == "string");
}
