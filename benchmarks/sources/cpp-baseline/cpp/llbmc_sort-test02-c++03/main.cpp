/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>
#include <algorithm>
#include <deque>

struct MyClass
{
    bool operator()(int i, int j)
    {
        return i<j;
    }
} MyLess;

int main ()
{
    int myints[] = {32,71,12,45};
    std::deque<int> d(myints, myints+4);

    std::sort(d.begin(), d.end(), MyLess);

    for (unsigned int i = 0; i < 3; ++i) {
        assert(d[i] == myints[i]);
    }

    return 0;
}
