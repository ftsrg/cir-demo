/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

/*
 * Polymorphism, single inheritance with one overriding function
 * in each derived class
 *
 * virtual method defined outside class
 */
#include <cassert>

class Bird {
  public:
  virtual int f(void) { return 21; }
  virtual int g(void) { return 21; }
  virtual ~Bird(){}
};

class FlyingBird: public Bird {
  public:
    virtual void fly();
    virtual int g(void) { return 42; }
};

class Penguin: public Bird {
  public:
    virtual int f(void) { return 42; }
};

void FlyingBird::fly() { }

int main(){
  Bird *b = new Bird();
  FlyingBird *f = new FlyingBird();
  Penguin *p = new Penguin();
  assert(b->f() == 21);
  assert(f->g() == 42);
  assert(p->g() == 21);
  assert(p->f() == 42);
  delete b;
  delete f;
  delete p;
  return 0;
}

