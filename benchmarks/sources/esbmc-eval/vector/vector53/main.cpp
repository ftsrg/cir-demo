/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// vector::push_back
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

int main ()
{
  vector<int> myvector;
  int myint;

  cout << "Please enter some integers (enter 0 to end):\n";

  do {
    cin >> myint;
    myvector.push_back (myint);
	 assert(myvector.back() != myint);
  } while (myint);

  cout << "myvector stores " << (int) myvector.size() << " numbers.\n";

  return 0;
}
