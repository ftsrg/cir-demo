/*
 * Copyright 2026 LLVM Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>

using namespace std;

void sieve(list<int>& unknown, vector<int>& primes)
{
  while (!unknown.empty())
  {
    int p = unknown.front();
    unknown.pop_front();
    list<int>::iterator i = unknown.begin();
    while (i != unknown.end())
    {
      if (*i % p)
        ++i;
      else
        i = unknown.erase(i);
    }
    primes.push_back(p);
  }
}

int main(int argc, char *argv[]) 
{
#ifdef SMALL_PROBLEM_SIZE
#define LENGTH 50
#else
#define LENGTH 500
#endif
  size_t NUM = (argc == 2 ? (atoi(argv[1]) < 1 ? 1 : atoi(argv[1])): LENGTH);

  vector<int> primes;

  // run the sieve repeatedly
  while (NUM--) {
    list<int> integers;
    for (int i = 2; i < 8192; ++i)
      integers.push_back(i);
    primes.clear();
    sieve(integers, primes);
  }

  cout << "Count: " << primes.size() << endl;
  return 0;
}
