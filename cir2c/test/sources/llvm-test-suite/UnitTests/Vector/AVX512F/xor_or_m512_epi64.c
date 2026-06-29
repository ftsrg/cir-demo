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

#include "m512_test_util.h"
#include <stdio.h>
#include <string.h>
/* This test was created to check the correctness
 * of the following intrinsics support:
 * _mm512_or_epi64()
 * _mm512_mask_or_epi64()
 * _mm512_xor_epi64()
 * _mm512_mask_xor_epi64()
 */
void __declspec(noinline) do_or_() {
  __mmask16 k8 = 0xAAAA;
  volatile __m512i undef = _mm512_set1_epi64(3);
  volatile __m512i v1 = _mm512_set1_epi64((10));
  volatile __m512i v2 = _mm512_set1_epi64((3));
  volatile __m512i exp1 = _mm512_set1_epi64((11));
  volatile __m512i exp2 = _mm512_set_epi64((11), 3, (11), 3, (11), 3, (11), 3);
  volatile __m512i r = _mm512_or_epi64(v1, v2);
  check_equal_nq(&r, &exp1, 8, "_mm512_or_epi64", __LINE__);
  r = _mm512_mask_or_epi64(undef, k8, v1, v2);
  check_equal_nq(&r, &exp2, 8, "_mm512_mask_or_epi64", __LINE__);
}

void __declspec(noinline) do_xor_() {
  __mmask16 k8 = 0xAAAA;
  volatile __m512i undef = _mm512_set1_epi64(3);
  volatile __m512i v1 = _mm512_set1_epi64((10));
  volatile __m512i v2 = _mm512_set1_epi64((3));
  volatile __m512i exp1 = _mm512_set1_epi64((9));
  volatile __m512i exp2 = _mm512_set_epi64((9), 3, (9), 3, (9), 3, (9), 3);
  volatile __m512i r = _mm512_xor_epi64(v1, v2);
  check_equal_nq(&r, &exp1, 8, "_mm512_xor_epi64", __LINE__);
  r = _mm512_mask_xor_epi64(undef, k8, v1, v2);
  check_equal_nq(&r, &exp2, 8, "_mm512_mask_xor_epi64", __LINE__);
}

int main(int argc, char *argv[]) {
  do_or_();
  do_xor_();

  if (n_errs != 0) {
    printf("FAILED\n");
    return 1;
  }

  printf("PASSED\n");
  return 0;
}
