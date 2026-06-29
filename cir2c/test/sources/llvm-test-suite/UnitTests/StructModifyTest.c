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

typedef struct {
  int w;
  float x;
  double y;
  long long z;
} S1Ty;

typedef struct {
  S1Ty A, B;
} S2Ty;

extern int printf(const char *str, ...);
void printS1(S1Ty *V) {
  printf("%d, %f, %f, %lld\n", V->w, V->x, V->y, V->z);
}

int main() {
  S2Ty E;
  E.A.w = 1;
  E.A.x = 123.42f;
  E.A.y = 19.0;
  E.A.z = 123455678902ll;
  E.B.w = 2;
  E.B.x = 23.42f;
  E.B.y = 29.0;
  E.B.z = 23455678902ll;

  printS1(&E.A);
  printS1(&E.B);
  return 0;
}

