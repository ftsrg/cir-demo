/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <vector>
#include <cassert>
using namespace std;

int main(){
	vector<int> v1(5);
	vector<int> v2(3);
	v2.push_back(0);
	v2.push_back(0);
	assert(v1 == v2);
	v1.push_back(2);
	assert(v1 != v2);
	assert(v1 >= v2);


	return 0;
}
