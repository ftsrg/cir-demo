/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

/*
 * Polymorphism:
 *  - derived class contains an overriding method
 *  - the overriding method has `virtual` keyword
 *  - non-trivial dtor
 */
#include <cassert>

int a = 5;

class Bird {
  public:
  virtual int do_something(void) { return 10; }
  virtual ~Bird()
  {
    a = do_something();
    assert(a == 10);
  }
};

class Penguin: public Bird {
  public:
    virtual int do_something(void) { return 15; }
    ~Penguin()
    {
      a = do_something();
      assert(a == 15); // should be calling Penguin::do_something
    }
};

int main(){
  Bird *b = new Bird();
  assert(b->do_something() == 10);
  delete b;
  assert(a == 10);

  Bird *p = new Penguin();
  assert(p->do_something() == 15);
  delete p;
  assert(a == 15); // should be 10, not 15

  return 0;
}

