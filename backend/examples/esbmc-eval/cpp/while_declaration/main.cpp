/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>

int main()
{
  int a=0;

  while(int* x=new int)
  {
    ++a;

    if(a==5)
      break;
  }

  assert(a==5);

  return 0;
}
