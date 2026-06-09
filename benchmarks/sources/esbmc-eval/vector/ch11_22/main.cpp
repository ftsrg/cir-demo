/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// vector assign
#include <iostream>
#include <vector>
using namespace std;

int main ()
{
  vector<int> first;
  vector<int> second;
  vector<int> third;

  first.assign (7,100);             // a repetition 7 times of value 100

  vector<int>::iterator it;
  it=first.begin()+1;

  second.assign (it,first.end()-1); // the 5 central values of first

  int myints[] = {1776,7,4};
  third.assign (myints,myints+3);   // assigning from array.

  cout << "Size of first: " << int (first.size()) << endl;
  cout << "Size of second: " << int (second.size()) << endl;
  cout << "Size of third: " << int (third.size()) << endl;
  return 0;
}
