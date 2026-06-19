/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>

#define size_t int

void *memcpy(void *dst, const void *src, size_t n) {
        char *cdst = static_cast<char *>(dst);
        const char *csrc = static_cast<const char *>(src);
        for (size_t i = 0; i < n; i++)
		cdst[i] = csrc[i];
	return dst;
}

int main ()
{
   const char src[3] = "ht";
   char dest[3];

   memcpy(dest, src, 3);

   assert(dest[1]=='t');
   
   return 0;
}
