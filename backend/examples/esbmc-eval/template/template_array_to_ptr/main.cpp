/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// A test checking that when one passes an array to a template, it's implicitly
// converted to a pointer type. This doesn't just require argument conversion
// to occur, the template resolution code must build an instantiation of lala
// that takes a pointer, not an array.

template <typename foobar>
void lala(foobar wuwuwuwu)
{
	wuwuwuwu++;
}

int
main()
{
	int fgasdf[2];
	lala(fgasdf);
	return 0;
}
