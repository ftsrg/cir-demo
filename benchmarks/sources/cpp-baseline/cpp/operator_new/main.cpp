/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <assert.h>

#define NULL 0
#define TYPE int
#define INTR int

TYPE a;
TYPE *dev_a;
	
int main()
{
	dev_a = (int*) operator new(sizeof(int));
	assert(dev_a != NULL);
	assert(*dev_a == 0);

	return 0;
}
