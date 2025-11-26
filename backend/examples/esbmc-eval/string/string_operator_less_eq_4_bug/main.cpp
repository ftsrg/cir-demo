/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

//test fails
#include <string>
#include <cassert>
using namespace std;

int main(){
  string str1, str2;
  str2 = string("Test");
  str1 = string(str2, 2);
  assert(str1 <= str2);
}
