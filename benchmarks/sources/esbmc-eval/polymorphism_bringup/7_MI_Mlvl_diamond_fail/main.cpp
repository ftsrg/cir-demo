/*
 * Copyright 2025 Budapest University of Technology and Economics
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

/*
 * Multi-inheritance diamond problem
 * trivial constructor
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

class OutputFile: virtual public File {
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
  assert(iofile->f() == 51); // FAIL, should be 52
  delete iofile;
  return 0;
}


