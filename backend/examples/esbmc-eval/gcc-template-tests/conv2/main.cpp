/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>
// { dg-do run }

// Copyright (C) 2001 Free Software Foundation, Inc.
// Contributed by Nathan Sidwell 29 Dec 2001 <nathan@codesourcery.com>

// PR 4361. Template conversion operators were not overloaded.

class C
{
public:

  operator float () {return 2;}
  
  operator int () 
  {
    return 0;
  }
  
  template<typename T>
  operator int ()
  { return 1;
  }
};

int main ()
{
  C p;
  int r;

  r = p.operator int ();
  if (r)
    assert(0 == r);
  r = static_cast <int> (p);

  if (r)
    assert(0 == ( r + 2));
  return 0;
}
