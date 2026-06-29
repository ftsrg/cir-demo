/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */


// For "int, int" calls
template<typename T>
T mul(int i, int j)
{
   // If you get a compile error, it's because you did not use
   // one of the authorized template specializations
   const int k = 25 ; k = 36 ;
}

template<>
int mul<int>(int i, int j)
{
   return i * j ;
}

int main() {

int n = mul<int>(6, 3); // n = 18

}
