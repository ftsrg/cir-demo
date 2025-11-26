/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// string::copy
#include <iostream>
#include <string>
#include <cstring>
#include <cassert>
using namespace std;

int main ()
{
  size_t length;
  char buffer[20];
  string str ("Test string...");
  length=str.copy(buffer,6,5);
  buffer[length]='\0';
  string aux;
  aux = string(buffer);
  assert(aux == "string");
  
  cout << "buffer contains: " << buffer << "\n"; 
  
  return 0;
}
