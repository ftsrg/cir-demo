/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// vector::size
#include <iostream>
#include <vector>
using namespace std;

int main ()
{
  vector<int> myints;
  cout << "0. size: " << (int) myints.size() << endl;

  for (int i=0; i<10; i++) myints.push_back(i);
  cout << "1. size: " << (int) myints.size() << endl;

  myints.insert (myints.end(),10,100);
  cout << "2. size: " << (int) myints.size() << endl;

  myints.pop_back();
  cout << "3. size: " << (int) myints.size() << endl;

  return 0;
}
