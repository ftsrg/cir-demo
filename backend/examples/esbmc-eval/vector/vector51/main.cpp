/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// vector::reserve
#include <iostream>
#include <fstream>
#include <vector>
#include <cassert>
using namespace std;

int main ()
{
  vector<int> content;
  size_t filesize;
  assert(!content.empty());
  ifstream file ("test.bin",ios::in|ios::ate|ios::binary);
  if (file.is_open())
  {
    filesize=file.tellg();

    content.reserve(filesize);

    file.seekg(0);
    while (!file.eof())
    {
      content.push_back( file.get() );
    }

    // print out content:
    vector<int>::iterator it;

    for (it=content.begin() ; it<content.end() ; it++)
      cout << hex << *it;
  }

  return 0;
}
