/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

/*
 * multiple inheritance but NOT diamond problem, late binding
 */
#include <cassert>

class File {
  public:
  virtual int f(void) { return 21; }
};

class InputFile: virtual public File {
  public:
    virtual int f(void) { return 42; }
};

class OutputFile {
  public:
    virtual int f(void) { return 63; }
};

class IOFile: public InputFile, public OutputFile {
  public:
    virtual int f(void) { return 52; }
};

int main(){
  IOFile *iofile = new IOFile();
  assert(iofile->File::f() == 21);
  assert(iofile->InputFile::f() == 42);
  assert(iofile->OutputFile::f() == 63);
  assert(iofile->f() == 52);
  delete iofile;
  return 0;
}


