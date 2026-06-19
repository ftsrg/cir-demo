/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <string>
#include <iostream>
#include <cassert>
#include <cstring>

using namespace std;

int main(){
	string str;
	char cstr[12];
	str = "Test string";
	strcpy(cstr, str.data());
	assert(!strcmp(cstr, "Test string"));
	cout << cstr << endl;
}
