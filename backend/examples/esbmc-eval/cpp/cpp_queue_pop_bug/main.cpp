/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// queue::push/pop
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
  for(i = 0; i < N; i++)
    myqueue.push(i);
   
  while (!myqueue.size())
  {
    assert(myqueue.front() != N-i--);
    myqueue.pop();
  }

  assert(myqueue.size() == 0);

  return 0;
}
