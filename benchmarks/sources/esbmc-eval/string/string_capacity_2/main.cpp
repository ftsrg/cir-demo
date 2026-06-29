/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <string>
#include <iostream>
#include <cassert>

using namespace std;

int main(){
	string str;
	str = "Test string";
	assert(str.capacity() >= 11);
	cout << str.capacity();
	str += ": x";
	assert(str.capacity() >= 13);
	cout << str.capacity();
}
