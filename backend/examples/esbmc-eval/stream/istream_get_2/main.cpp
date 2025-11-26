/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// istream get
#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main () {
  char c, str[256];
  cin >> str;
  cout << cin.get();
  /*istream is;
  fstream file;
  
  file.open("example.txt", ios::in | ios::out);
  while(file.good()){
  	c = file.get();
  	if(file.good()){
  		file << "texto" << endl;
  	}
  
  }
  */
  return 0;
}
