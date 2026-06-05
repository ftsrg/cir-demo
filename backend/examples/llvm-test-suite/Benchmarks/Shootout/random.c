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

/* -*- mode: c -*-
 * $Id$
 * http://www.bagley.org/~doug/shootout/
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define inline static

#define IM 139968
#define IA 3877
#define IC 29573

inline double gen_random(double max) {
  static long last = 42;
    
  last = (last * IA + IC) % IM;
  return( max * last / IM );
}

int main(int argc, char *argv[]) {
#ifdef SMALL_PROBLEM_SIZE
#define LENGTH 40000000
#else
#define LENGTH 400000000
#endif
  int N = ((argc == 2) ? atoi(argv[1]) : LENGTH) - 1;
    
  while (N--) {
    gen_random(100.0);
  }
  printf("%.9f\n", gen_random(100.0));
  return(0);
}
