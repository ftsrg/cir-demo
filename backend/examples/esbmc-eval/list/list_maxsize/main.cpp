/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// list::max_size
#include <iostream>
#include <list>
using namespace std;

int main ()
{
  unsigned int i;
  list<int> mylist;

  cout << "Enter number of elements: ";
  cin >> i;

  if (i<mylist.max_size()) mylist.resize(i);
  else cout << "That size exceeds the limit.\n";

  return 0;
}
