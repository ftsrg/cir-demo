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
	string tmp("esbmc");
	string str(tmp, 7);
	cout << str << endl;
   assert(str.size() == 10);
	return 0;
}
