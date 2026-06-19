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
	
	string S = string("Te");
	string S1 = string("st");
	string T = string("Testing", 4);
	cout << S << endl << S1 << endl << T << endl;
	assert(T == S + S1);
}
