/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

//TEST FAILS

#include <string>
#include <iostream>
#include <cassert>
using namespace std;
int main(){
	string str;
	str = string("A",12);
	assert(str.capacity() < 12);
	cout << str.capacity() ;	
}

