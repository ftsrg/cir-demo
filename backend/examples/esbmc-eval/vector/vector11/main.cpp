/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <vector>
#include <cassert>
#include <iostream>
using namespace std;

int main( )
{
	 int i;
    std::vector<int> c;
	 c.push_back(0);
	 c.push_back(1);
	 c.push_back(2);
	 c.push_back(3);
	 c.push_back(4);
	 c.push_back(5);
	 c.push_back(6);
	 c.push_back(7);
	 c.push_back(8);
	 c.push_back(9);
	 assert(c.front() == 0);
    c.erase(c.begin());
	 assert(c.front() == 1);
    c.erase(c.begin()+2, c.begin()+5);
	 return 0;
}
