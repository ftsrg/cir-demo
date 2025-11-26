/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// vector::begin
#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

int main ()
{
  vector<int> myvector;
  for (int i=1; i<=5; i++) myvector.push_back(i);

  vector<int>::iterator it;

  cout << "myvector contains:";
  it=myvector.begin();
  assert(*it != 1);
  for ( it=myvector.begin() ; it < myvector.end(); it++ )
    cout << " " << *it;

  cout << endl;

  return 0;
}
