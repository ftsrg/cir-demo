/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// vector::pop_back
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

int main ()
{
  vector<int> myvector;
  int sum (0);
  myvector.push_back (100);
  myvector.push_back (200);
  myvector.push_back (300);
  int test = 300;

  while (!myvector.empty())
  {
    sum+=myvector.back();
	 cout << test << endl;
	 assert(myvector.back() != test);
	 test += -100;
    myvector.pop_back();
  }

  cout << "The elements of myvector summed " << sum << endl;

  return 0;
}
