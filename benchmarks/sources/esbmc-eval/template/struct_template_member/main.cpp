/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

struct Foo {
    template<class T>
    T bar() {
       return T();
    }
};

int main(void) {
  Foo f;
  f.bar<int>();
  return 0;
}
