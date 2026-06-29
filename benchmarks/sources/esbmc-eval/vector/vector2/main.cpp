/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// vector assignment
#include <iostream>
#include <vector>
using namespace std;

int main ()
{
  vector<int> first (3,0);
  vector<int> second (5,0);

  second=first;
  first=vector<int>();

  cout << "Size of first: " << int (first.size()) << endl;
  cout << "Size of second: " << int (second.size()) << endl;
  return 0;
}
