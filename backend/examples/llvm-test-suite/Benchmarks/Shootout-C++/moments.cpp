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
// $Id
// http://www.bagley.org/~doug/shootout/
// Calculate statistical moments of a region, from Bill Lear
// Modified by Tams Benk
// Further modified by Tom Hyer

#include <vector>
#include <numeric>
#include <iterator>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

template <class T>
struct moments {
public:
    template <class InputIterator>
    moments(InputIterator begin, InputIterator end)
        : median(0.0), mean(0.0), average_deviation(0.0),
          standard_deviation(0.0), variance(0.0),
          skew(0.0), kurtosis(0.0)
        {
            T sum = accumulate(begin, end, 0.0);
            size_t N = end - begin;
            mean = sum / N;
            for (InputIterator i = begin; i != end; ++i) {
                T deviation = *i - mean;
                average_deviation += fabs(deviation);
				T temp = deviation * deviation;
                variance += temp;
				temp *= deviation;
                skew += temp;
                kurtosis += temp * deviation;
            }
            average_deviation /= N;
            variance /= (N - 1);
            standard_deviation = sqrt(variance);

            if (variance) {
                skew /= (N * variance * standard_deviation);
                kurtosis = kurtosis/(N * variance * variance) - 3.0;
            }

            InputIterator mid = begin+N/2;
            nth_element(begin, mid, end);
            if (N % 2 == 0) {
				InputIterator next_biggest = max_element(begin, 
mid);
                median = (*mid+*next_biggest)/2;
            }
			else
				median = *mid;
        }

    T median;
    T mean;
    T average_deviation;
    T standard_deviation;
    T variance;
    T skew;
    T kurtosis;
};

int main(int argc, char**argv) {
#ifdef SMALL_PROBLEM_SIZE
#define LENGTH 500000
#else
#define LENGTH 5000000
#endif
    int n = ((argc == 2) ? atoi(argv[1]) : LENGTH);
    vector<double> v;
    double d;

    for (unsigned i = 0; i != n; ++i) v.push_back(i);
    moments<double> m(v.begin(), v.end());

    printf("n:                  %d\n", v.end() - v.begin());
    printf("median:             %f\n", m.median);
    printf("mean:               %f\n", m.mean);
    printf("average_deviation:  %f\n", m.average_deviation);
    printf("standard_deviation: %f\n", m.standard_deviation);
    printf("variance:           %f\n", m.variance);
    printf("skew:               %f\n", m.skew);
    printf("kurtosis:           %f\n", m.kurtosis);

    return 0;
}
