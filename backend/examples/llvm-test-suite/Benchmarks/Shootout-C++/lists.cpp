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

// -*- mode: c++ -*-
// $Id$
// http://www.bagley.org/~doug/shootout/
// from Bill Lear

#include <cstdlib>
#include <iostream>
#include <list>
#include <numeric>

using namespace std;

#ifdef SMALL_PROBLEM_SIZE
const size_t SIZE = 1000;
#else
const size_t SIZE = 10000;
#endif

template <class _ForwardIterator, class _Tp>
void 
iota(_ForwardIterator __first, _ForwardIterator __last, _Tp __value)
{
  while (__first != __last)
    *__first++ = __value++;
}

size_t test_lists() {
    std::list<size_t> li1(SIZE);

    ::iota(li1.begin(), li1.end(), 1);

    std::list<size_t> li2(li1);

    std::list<size_t> li3;

    size_t N = li2.size();
    while (N--) {
        li3.push_back(li2.front());
        li2.pop_front();
    }

    N = li3.size();
    while (N--) {
        li2.push_back(li3.back());
        li3.pop_back();
    }

    li1.reverse();

    return (li1.front() == SIZE) && (li1 == li2) ? li1.size() : 0;
}

int main(int argc, char* argv[]) {
#ifdef SMALL_PROBLEM_SIZE
#define LENGTH 300
#else
#define LENGTH 3000
#endif
    size_t ITER = (argc == 2 ? (atoi(argv[1]) < 1 ? 1 : atoi(argv[1])): LENGTH);

    size_t result = 0;
    while (ITER > 0) {
        result = test_lists();
        --ITER;
    }

    std::cout << result << std::endl;
}
