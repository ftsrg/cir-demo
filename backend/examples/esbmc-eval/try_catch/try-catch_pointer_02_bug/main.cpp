/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include<cassert>

int main()
{
  try {
    int x = 5;
    int *py = &x;

    throw py;
  }
  catch(void*) { assert(0); }
  return 0;
}
