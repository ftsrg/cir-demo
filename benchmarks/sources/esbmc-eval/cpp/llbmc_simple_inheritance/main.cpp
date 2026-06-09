/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>

class Base
{
public:
    int f(void) { return 21; }
};

class Derived: public Base
{
public:
    int f(void) { return 42; }
    int x;
};

int main()
{
    Base *o = new Derived();
    int r = o->f();
    delete o;
    assert(r == 21);
    return r;
}
