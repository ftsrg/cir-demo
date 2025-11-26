/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <pthread.h>
#include <assert.h>

void *thread1()
{
  assert(0);
  return NULL;
}

int main()
{
  pthread_t t1;
  pthread_create(&t1, 0, thread1, 0);
  return 0;
}
