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
  string aux;
  aux = 'D';
  string str1, str2;
  str1 = string("Test");
  str2 = string(str1, 2);
  assert(aux < str2);
}
