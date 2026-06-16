/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// binary_search example
#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
using namespace std;

bool myfunction (int i,int j) { return (i<j); }

int main () {
  int myints[] =  {1,2,3,4,5,4,3,2,1};
  int myints1[] = {1,1,2,2,3,3,4,4,5};
  vector<int> v(myints,myints+9);                         // 1 2 3 4 5 4 3 2 1
  vector<int>::iterator it;

  // using default comparison:
  v.assign(myints1,myints1+9);

  cout << "looking for a 3... ";
//  if (binary_search (v.begin(), v.end(), 3))
//    cout << "found!\n"; else cout << "not found.\n";

  assert(binary_search (v.begin(), v.end(), 3));/*
  // using myfunction as comp:
  cout << "looking for a 6... ";
  if (binary_search (v.begin(), v.end(), 6, myfunction))
    cout << "found!\n"; else cout << "not found.\n";

  assert(!binary_search (v.begin(), v.end(), 6, myfunction)); */
  return 0;
}
