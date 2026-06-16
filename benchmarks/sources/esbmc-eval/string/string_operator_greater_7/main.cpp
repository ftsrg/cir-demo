/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <string>
#include <cassert>
using namespace std;

int main(){
  string str1, str2, str3, str4;
  str1 = string("AAAA");
  str2 = string(str1, 3);
  str3 = string("AA", 6);
  str4 = string('A',12);
  assert( (str2 > str1) && (str3 > str1) && (str4 > str1) );
}
