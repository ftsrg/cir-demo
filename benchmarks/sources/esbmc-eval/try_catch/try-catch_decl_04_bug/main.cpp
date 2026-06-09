/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

void myfunction () throw () {
  throw 5.0;
}

int main (void) {
  try {
    myfunction();
  }
  catch (int) { return 3; }
  catch (char) { return 2; }
  catch (...) { return 1; }
  return 0;
}
