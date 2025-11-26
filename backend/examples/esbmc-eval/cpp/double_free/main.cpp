/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <iostream>
#include <new>
using namespace std;

struct myclass {
  myclass() {cout <<"myclass constructed\n";}
  ~myclass() {cout <<"myclass destroyed\n";}
};

void my_delete(myclass *q)
{
  delete[] q;
}

int main () {
  myclass * pt;

  pt = new myclass[3];
  delete[] pt;

  my_delete(pt);

  return 0;
}


