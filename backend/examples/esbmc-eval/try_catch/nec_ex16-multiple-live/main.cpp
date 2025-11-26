/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <stdio.h>
#include <stdlib.h>

int nondet_int();

int
hrandom ()
{
  return nondet_int() % 2; /*random() % 2;*/
}

class ExceptionA
{
public:
  ExceptionA ()
  {
    goto ERROR;
    ERROR:
    ;
  }
};

class ExceptionB
{
public:
  ExceptionB ()
  {
    goto ERROR;
    ERROR:
    ;
  }
};

class A
{

public:
  A ()
  {
  }

  void logError ()
  {
    throw ExceptionA ();
  }

  ~A ()
  {
    try
    {
      if (hrandom ())
        logError ();
    }
    catch (ExceptionA e2)
    {
      printf ("Caught ExceptionA\n");
    }
  }
};

class B
{
public:
  void append (int x)
  {
    throw ExceptionB ();
  }
};

int
main ()
{
  try
  {
    B b;
    A a;
    b.append (2);
  }
  catch (ExceptionB e1)
  {
    printf ("Caught ExceptionB\n");
  }
}
