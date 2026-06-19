/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

//TEST FAILS
// swap strings
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main ()
{
  string buyer ("money");
  string seller ("goods");

  cout << "Before swap, buyer has " << buyer;
  cout << " and seller has " << seller << endl;

  seller.swap (buyer);
  
  assert(seller != "money");
  assert(buyer != "goods");

  cout << " After swap, buyer has " << buyer;
  cout << " and seller has " << seller << endl;

  return 0;
}
