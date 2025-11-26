/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>
#include <vector>
using namespace std;

int main() {
    vector<int> vectorOne(10,5);
    vector<int> vectorTwo(vectorOne);
	 assert(vectorTwo.front() == 10);
    return 0;
}

