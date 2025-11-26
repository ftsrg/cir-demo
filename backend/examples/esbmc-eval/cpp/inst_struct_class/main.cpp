/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

template <typename T>
class Omega
{
public:
    void foo() {}

};

struct IA
{
    typedef Omega<int> OmegaInt;
    typedef Omega<char> OmegaChar;
};

int main()
{
    return 0;
}

