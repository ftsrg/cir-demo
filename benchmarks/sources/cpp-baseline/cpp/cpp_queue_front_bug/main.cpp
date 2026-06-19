/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// queue::front
#include <cassert>
#include <queue>
using namespace std;

int nondet_int();
int N = nondet_int();

int main ()
{
  queue<int> myqueue;
  int myint;

  __ESBMC_assume(N>0);

  int i;
  for(i = N; i >= 0; --i)
    myqueue.push(i);

  assert(myqueue.front() != N);

  return 0;
}
