/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>

class Vehicle
{
public:
  int data;
  Vehicle() { data = 1; }
};

class Motorcycle: public Vehicle
{
public:
  Motorcycle() : Vehicle() {}
};

int main()
{
  Motorcycle m;
  bool res1;
  res1 = (m.data == 1); // PASS
  assert(res1);
  return 0;
}

