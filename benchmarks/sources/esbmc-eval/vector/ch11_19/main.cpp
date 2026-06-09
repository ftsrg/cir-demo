/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// vector::at
#include <iostream>
#include <vector>
using namespace std;

int main ()
{
  vector<int> myvector (10);   // 10 zero-initialized ints
  unsigned int i;

  // assign some values:
  for (i=0; i<myvector.size(); i++)
    myvector.at(i)=i;

  cout << "myvector contains:";
  for (i=0; i<myvector.size(); i++)
    cout << " " << myvector.at(i);

  cout << endl;

  return 0;
}
