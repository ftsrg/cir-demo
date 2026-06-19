/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>
#include <queue>

int main()
{
    std::queue<int> s;

    for (int i = 0; i < 10; ++i) {
        s.push(i);
    }

    for (int i = 0; i < 10; ++i) {
        assert(s.front() == i);
        s.pop();
    }

    return 0;
}
