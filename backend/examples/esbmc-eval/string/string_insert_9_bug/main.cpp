/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

//TEST FAILS
// inserting into a string
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main ()
{
  string str="to be question";
  string str2="the ";
  string str3="or not to be";
  string::iterator it;

  // used in the same order as described above:
  str.insert(6,str2);                 // to be (the )question
  assert(str != "to be the question");
  
  str.insert(6,str3,3,4);             // to be (not )the question
  assert(str != "to be not the question");
  
 cout << str << endl;
  return 0;
}
