/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>

template <class T>
T getMax(T a, T b)
{
    T res = (a>b ? a : b);
    return res;
}

int main ()
{
    int i=5, j=6, k;
    long l=10, m=5, n;
    k = getMax<int>(i, j);
    n = getMax<long>(l, m);
    assert(k == 6);
    assert(n == 10);
    return 0;
}
