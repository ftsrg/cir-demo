/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>
// { dg-do run }
// { dg-options "-O2" }

// Copyright (C) 2004 Free Software Foundation, Inc.
// Contributed by Nathan Sidwell 2 Dec 2004 <nathan@codesourcery.com>

// PR 18318. ICE with template new[]
// Origin:Elliot Hughes <enh@jessies.org>
// Andrew Pinski <pinskia@gcc.gnu.org>

struct Aint
{
  ~Aint ();
  Aint ();
};

Aint::Aint () {}
Aint::~Aint () {}

static int count;

template <class T>
struct A
{
  unsigned Blksize() const;
  
  void f()
  {
    new T[Blksize()];
  }
};

template <class T> unsigned A<T>::Blksize () const
{
  count++;
  return 1;
}

int main ()
{
  A<Aint> a;
  a.f();
  
  assert(0 == ( count != 1));
}
