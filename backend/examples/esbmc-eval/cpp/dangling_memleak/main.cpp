/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <iostream>

class Foo {
  public:
    Foo() {value = 0;};
    void Execute();
    void Increment();
  private:
    int value;
};

void Foo::Execute() {
        printf("Executing...");
}

void Foo::Increment() {
    value++;
}

int main()
{
  Foo *foo = new Foo();

  foo->Increment();  // Incrementing the value

  foo->Execute(); // Executing

  delete foo;

  return 0;
}
