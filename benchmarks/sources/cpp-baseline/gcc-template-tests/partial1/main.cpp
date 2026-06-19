/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>
// { dg-do run }
// Origin: Jo Totland <jototland@hotmail.com>

// PR c++/6620
// Partial specialization involving expression of non-type template
// parameter causes ICE.

extern "C" void abort();

template <int N> struct HoldInt
{
};

template <class A, class B> struct Add
{
};

template <int N> 
struct Add<HoldInt<N>, HoldInt<-N> >
{
  typedef int type;
  int f() { return 0; }
};

template <int N, int M> 
struct Add<HoldInt<N>, HoldInt<M> >
{
  typedef HoldInt<N+M> type;
  int f() { return 1; }
};

int main() {
  Add<HoldInt<1>, HoldInt<-1> > a;
  Add<HoldInt<1>, HoldInt<-2> > b;
  if (a.f() != 0 || b.f() != 1)
    assert(0);
}
