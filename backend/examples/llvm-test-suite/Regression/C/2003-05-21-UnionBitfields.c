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
#include <math.h>

int target_isinf(double x) {
  union {
    double d;
    struct {
      unsigned mantissa2;
      unsigned mantissa1 : 20;
      unsigned exponent  : 11;
      unsigned sign      :  1;
    } big_endian;
  } u;

  u.d = x;
  return (u.big_endian.exponent == 2047 && u.big_endian.mantissa1 == 0 && u.big_endian.mantissa2 == 0);
}

int main() {
  printf("%d %d\n", target_isinf(1234.42), target_isinf(1.0/5.0e-324));
  return 0;
}
