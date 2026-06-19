/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// generate algorithm example
#include <cassert>
#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

// function generator:
int RandomNumber () { return (rand()%100); }

// class generator:
struct c_unique {
  int current;
  c_unique() {current=0;}
  int operator()() {return ++current;}
} UniqueNumber;


int main () {
  srand ( unsigned ( time(NULL) ) );

  vector<int> myvector (8);
  vector<int>::iterator it;

  generate (myvector.begin(), myvector.end(), RandomNumber);

  cout << "myvector contains:";
  for (it=myvector.begin(); it!=myvector.end(); ++it)
    cout << " " << *it;

  generate (myvector.begin(), myvector.end(), UniqueNumber);
  
  assert(myvector[2] == NULL);

  cout << "\nmyvector contains:";
  for (it=myvector.begin(); it!=myvector.end(); ++it)
    cout << " " << *it;

  cout << endl;
 
  return 0;
}
