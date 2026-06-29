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
   The test targets function operator<(const PHIUsageRecord &RHS) in
   InstCombinePHI.cpp.
*/
#include <stdint.h>
#include <stdio.h>
#pragma pack(1)
struct S {
  int32_t a : 18;
  int32_t b : 1;
  int32_t c : 24;
  int32_t d : 15;
  int32_t e : 14;
} h;
int f;
int main(void) {
  for (; f; f++) {
    struct S m = {5, 0, -5, 9, 5};
    h = m;
  }
  if (h.d != (long)0 - h.d * h.d)
    printf("1");
  return 0;
}
