/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// vector::back
#include <iostream>
#include <vector>
using namespace std;

int main ()
{
  vector<int> myvector;

  myvector.push_back(10);

  while (myvector.back() != 0)
  {
    myvector.push_back ( myvector.back() -1 );
  }

  cout << "myvector contains:";
  for (unsigned i=0; i<myvector.size() ; i++)
    cout << " " << myvector[i];

  cout << endl;

  return 0;
}
