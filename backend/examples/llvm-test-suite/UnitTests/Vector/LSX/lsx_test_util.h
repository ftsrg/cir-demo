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

#ifndef LSX_TEST_UTIL_H
#define LSX_TEST_UTIL_H

#include <math.h>
#include <stdio.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

__attribute__((noinline)) void check_lsx_out(void *expected, void *got, int len,
                                             const char *fname, int line) {
  int i = 0;
  int num = MIN(len, 16);
  if (memcmp(expected, got, num) != 0) {
    printf("%s:%d: \n", fname, line);
    printf("0x");
    for (i = 0; i < num; i++) {
      printf(" %02x", ((char *)expected)[i] & 0xff);
    }
    printf(" != \n");
    printf("0x");
    for (i = 0; i < num; i++) {
      printf(" %02x", ((char *)got)[i] & 0xff);
    }
    printf("\n");
  }
}

// Used for comparing floating-point results when the result is NAN, but the
// bitwise comparison with the expected NAN differs.
__attribute__((noinline)) void check_lsx_fp_out(_Bool IsDouble, void *expected,
                                                void *got, int len,
                                                const char *fname, int line) {
  // num of elements
  int N = IsDouble == 1 ? 8 : 4;
  for (int i = 0; i < 16; i += N) {
    if (!memcmp(expected + i, got + i, N))
      continue;
    if (IsDouble && isnan(*(double *)(expected + i)) &&
        isnan(*(double *)(got + i)))
      continue;
    if (!IsDouble && isnan(*(float *)(expected + i)) &&
        isnan(*(float *)(got + i)))
      continue;
    check_lsx_out(expected, got, len, fname, line);
    return;
  }
}

#endif
