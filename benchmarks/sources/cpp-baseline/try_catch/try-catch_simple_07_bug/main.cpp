/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <exception>
#include <cassert>

int main (void) {
  try {
    throw 'a';   // throws char
  }
  catch (int) { return 1; }
  catch (char) { assert(0); return 2; }
  return 0;
}
