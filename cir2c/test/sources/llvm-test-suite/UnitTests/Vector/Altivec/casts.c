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

#include <altivec.h>
#include <stdio.h>

typedef union {
 float f[4];
 vector float v;
} floatToVector;


void test(float F, vector float *R) {
   floatToVector FTV;
   FTV.f[0] = F;
   *R = (vector float) vec_splat((vector unsigned int)FTV.v, 0);
}

void test2(float F, vector float *R) {
   *R = (vector float){F,F,F,F};
}
void test2a(float F, vector float *X, vector float *R) {
   *R = (vector float){F,F,F,F} + *X;
}


int main() {
  floatToVector X;
  int i;
  test(12.34, &X.v);

  printf("%f %f %f %f\n", X.f[0], X.f[1], X.f[2], X.f[3]);
  return 0;
}
