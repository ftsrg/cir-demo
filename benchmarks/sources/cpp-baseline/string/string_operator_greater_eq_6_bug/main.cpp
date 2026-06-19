/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

//TEST FAILS
#include <string>
#include <cassert>
using namespace std;

int main(){
  string aux = string("Test");
  string str1, str2;
  str1 = 'D';
  str2 = string(str1);
  assert((str2 >= aux)&&(aux >= str1));
}
