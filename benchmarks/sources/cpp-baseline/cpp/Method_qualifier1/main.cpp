/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <assert.h>

class my_class
{
public:
  int my_method() { return 1; }
  int my_method() const { return 2; }
  int my_method() volatile { return 3; }
  int my_method() const volatile { return 4; }
};

int main()
{
  my_class zz;
  const my_class &zz_const=zz;
  volatile my_class &zz_volatile=zz;
  const volatile my_class &zz_const_volatile=zz;
  
  assert(zz.my_method()==1);
  assert(zz_const.my_method()==2);
  assert(zz_volatile.my_method()==3);
  assert(zz_const_volatile.my_method()==4);
}
