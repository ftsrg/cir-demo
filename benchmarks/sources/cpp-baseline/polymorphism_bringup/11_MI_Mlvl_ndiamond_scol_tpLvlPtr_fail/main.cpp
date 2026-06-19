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
  File *iofile = new IOFile();
  assert(iofile->File::f() == 1);
  assert(iofile->f() == 10); // this should not pass
  delete iofile;

  return 0;
}
