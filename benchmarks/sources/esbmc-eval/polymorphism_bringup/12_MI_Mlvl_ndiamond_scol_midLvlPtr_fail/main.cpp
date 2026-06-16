/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

/*
 * multi-level inheritance, single column
 * polymorphism using top-level pointer
 */
#include <cassert>

class File {
  public:
  virtual int f(void) { return 1; }
};

class InputFile: public File {
  public:
    virtual int f(void) { return 10; }
};

class IOFile: public InputFile {
  public:
    virtual int f(void) { return 100; }
};

int main(){
  InputFile *iofile2 = new IOFile();
  assert(iofile2->File::f() == 1);
  assert(iofile2->InputFile::f() == 10);
  assert(iofile2->f() != 1);   // make sure it's not calling the top-level base function
  assert(iofile2->f() != 10);  // make sure it's not calling the second-level base function
  assert(iofile2->f() != 100); // should be 100
  delete iofile2;

  return 0;
}
