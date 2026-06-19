/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>

template <class T>
class mypair
{
    T a, b;
public:
    mypair(T first, T second) { a=first; b=second; }
    T getmax();
};

template <class T>
T mypair<T>::getmax ()
{
    T retval;
    retval = (a>b ? a : b);
    return retval;
}

int main () {
    mypair<int> myobject(100, 75);
    assert(myobject.getmax() == 100);
    return 0;
}
