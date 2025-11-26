/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// istream::unget example
#include <iostream>
#include <cassert>
using namespace std;

int main () {
  char c;
  int n;
  char str[256];

  cout << "Enter a number or a word: ";
  c = cin.get();

  if ( (c >= '0') && (c <= '9') )
  {
    cin.unget();
    assert((int)cin.gcount() == 0);
    cin >> n;
    cout << "You have entered number " << n << endl;
  }
  else
  {
    cin.unget();
    assert((int)cin.gcount() == 0);
    cin >> str;
    cout << " You have entered word " << str << endl;
  }

  return 0;
}
