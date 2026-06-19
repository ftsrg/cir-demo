/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// vector::end
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

int main ()
{
  vector<int> myvector;
  for (int i=1; i<=5; i++) myvector.insert(myvector.end(),i);

  cout << "myvector contains:";
  vector<int>::iterator it;
  it=myvector.end();
  assert(*it == 0);
  for ( it=myvector.begin() ; it < myvector.end(); it++ )
    cout << " " << *it;

  cout << endl;

  return 0;
}
