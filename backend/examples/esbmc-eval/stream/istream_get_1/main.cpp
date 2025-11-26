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
  ifstream is;

//  cout << "Enter the name of an existing text file (like example.txt): ";

  cin.get (str, 256);

    
//  is.open ("example.txt");        
/*  is.open (str);		// open file

  assert(!is.fail());
  assert(!is.bad());
  assert(!is.eof());
  
  assert(is.good());
    
  while (is.good())     // loop while extraction from file is possible
  {
    c = is.get();       // get character from file
    if (is.good())
      cout << c;
//    usleep(3000);	
  }

  is.close();           // close file
*/
  return 0;
}
