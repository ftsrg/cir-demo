/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>
// PR c++/14032
// { dg-do run }

template <bool compare>
struct outer
{
  template <bool compare_with, bool second>
  struct inner           // unspecialized compare != compare_with
  {
    static inline bool test()
    {
      return false;
    }
  };

  template <bool second> // specialization compare == compare_with
  struct inner<compare,second>
  {
    static inline bool test()
    {
      return true;
    }
  };
};
int main ()
{
  bool b = outer<true>::inner<true,false>::test();

  assert(0 == ( b != true));
}
