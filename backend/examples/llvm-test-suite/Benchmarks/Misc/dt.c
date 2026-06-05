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

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

enum {
  ITERATIONS = 131072,
  size = 2048
};

static inline void
double_array_divs_variable(double * __restrict dvec1,
                           double * __restrict dvec2){
  long i, j;
  for(j = 0; j < ITERATIONS; j++)
    for(i = 0; i < size; i++)
      dvec1[i] /= dvec2[i];
  
// Can use loop interchange to turn this into:
//  for(i = 0; i < size; i++) {
//    double tmp1 = dvec1[i];
//    double tmp2 = dvec2[i];
//    for(j = 0; j < ITERATIONS; j++)
//      tmp1 /= tmp2;
//    dvec1[i] = tmp1;
//  }

// Can then hoist 1/tmp2 out of the loop if -ffast-math is enabled.
}

int main(int argc, char *argv[]) {
  double	*dvec1, *dvec2;
  long i;

  posix_memalign((void**)&dvec1, 16, size * sizeof(double));
  posix_memalign((void**)&dvec2, 16, size * sizeof(double));

  printf( " %i iterations of each test. ", ITERATIONS );
  printf( " inner loop / array size %i.\n", size );

  // With better alias analysis of posix_memalign, we'd avoid reloading
  // dvec1/dvec2 each time through the loop.
  for( i = 0; i < size; i++ ) {
          dvec1[i] = 1.0000001 * cosf((float)(size - i));
          dvec2[i] = 1.0  + 0.0000000001 * sinf((float)i);
  }

  double_array_divs_variable( dvec1, dvec2 );
  printf("%f\n", dvec1[0]);
  return 0;
}

