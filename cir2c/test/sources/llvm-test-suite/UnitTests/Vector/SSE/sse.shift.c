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

#include <emmintrin.h>
#include <stdio.h>

typedef union {
  __m128i V;
  int A[4];
} IV;

static void printIV(IV *F) {
  printf("%08x %08x %08x %08x\n", F->A[0], F->A[1], F->A[2], F->A[3]);
}

int main() {
  __m128i allones = _mm_set1_epi32(0);
  __m128i zeroones, onezeros;
  allones = _mm_cmpeq_epi32(allones, allones);
  zeroones = _mm_srli_epi16(allones, 8);
  printIV((IV*)&zeroones);
  onezeros = _mm_slli_epi16(allones, 8);
  printIV((IV*)&onezeros);
  return 0;
}
