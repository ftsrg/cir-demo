/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

class Test {
  public:
    Test(char *p)
    {
      ptr = p;
    }
    char *ptr;
};

int main()
{
  char *tmp, tmp2='a';
  unsigned int addr;
  tmp = &tmp2;
  Test test(tmp);
  addr = (unsigned int) test.ptr;
}
