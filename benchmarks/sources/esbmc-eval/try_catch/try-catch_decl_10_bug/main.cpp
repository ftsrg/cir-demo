/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

class X {
  public:
    X() throw() { throw 5; }
};

int main()
{
  try {
    X x;
  }
  catch(int e) {
    return 1;
  }
  return 0;
}
