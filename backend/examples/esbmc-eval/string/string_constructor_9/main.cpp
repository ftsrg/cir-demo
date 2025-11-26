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
	
	string S = string("Testing", 2);
	string S1 = string("Testing", 2);
	string T = string("Testing", 5);
	assert(T != S + S1);
}
