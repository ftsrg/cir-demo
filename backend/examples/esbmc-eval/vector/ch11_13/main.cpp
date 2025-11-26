/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// comparing size, capacity and max_size
#include <iostream>
#include <vector>
using namespace std;

int main ()
{
  vector<int> myvector;

  // set some content in the vector:
  for (int i=0; i<100; i++) myvector.push_back(i);

  cout << "size: " << myvector.size() << "\n";
  cout << "capacity: " << myvector.capacity() << "\n";
  cout << "max_size: " << myvector.max_size() << "\n";
  return 0;
}
