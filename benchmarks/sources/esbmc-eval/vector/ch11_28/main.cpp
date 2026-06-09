/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// clearing vectors
#include <iostream>
#include <vector>
using namespace std;

int main ()
{
  unsigned int i;
  vector<int> myvector;
  myvector.push_back (100);
  myvector.push_back (200);
  myvector.push_back (300);

  cout << "myvector contains:";
  for (i=0; i<myvector.size(); i++) cout << " " << myvector[i];

  myvector.clear();
  myvector.push_back (1101);
  myvector.push_back (2202);

  cout << "\nmyvector contains:";
  for (i=0; i<myvector.size(); i++) cout << " " << myvector[i];

  cout << endl;

  return 0;
}
