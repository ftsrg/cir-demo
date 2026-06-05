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

/*
    Copyright 2007-2008 Adobe Systems Incorporated
    Distributed under the MIT License (see accompanying file LICENSE_1_0_0.txt
    or a copy at http://stlab.adobe.com/licenses.html)
    
    Shared source file for timing, used by all the benchmarks
*/

/******************************************************************************/

#include <time.h>

/******************************************************************************/

/* Yes, this would be easier with a class or vector
 but it needs to work for both C and C++ code
*/

/*  simple timer functions */
clock_t start_time, end_time;

void start_timer() { start_time = clock(); }

double timer() {
  end_time = clock();
  return (end_time - start_time)/ (double)(CLOCKS_PER_SEC);
}

/******************************************************************************/
