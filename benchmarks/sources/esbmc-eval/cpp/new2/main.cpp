/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>

#define NULL 0
#define TYPE int
#define INTR int

TYPE a;
TYPE *dev_a;
	
int main()
{
	dev_a = new int();
	assert(dev_a != NULL);
	assert(*dev_a == 0);

	int a = 10;
	dev_a = &a;
	assert(*dev_a == 10);

	return 0;
}
