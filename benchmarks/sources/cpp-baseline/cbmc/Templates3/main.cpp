/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include<cassert>

template<unsigned int size>
class int_array
{
public:
  int array[size];

  int read(unsigned int x)
  {
    assert(x<size);
    return array[x];
  }
};

int main()
{
  int_array<3> a;
  a.array[2]=1;

  assert(a.read(2)==1);
}
