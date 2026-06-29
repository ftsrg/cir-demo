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

long long a;
unsigned b;
int c[70];
int d[70][70];
int e;

__attribute__ ((noinline)) void f(long long *g, int p2) {
  *g = p2;
}

__attribute__ ((noinline)) void fn2() {
  for (int j = 0; j < 70; j++) {
    for (int i = 0; i < 70; i++) {
      if (b)
        c[i] = 0;
      for (int l = 0; l < 70; l++)
        d[i][1] = d[l][i];
    }
    for (int k = 0; k < 70; k++)
      e = c[0];
  }
}

int main() {
  b = 5;
  for (int j = 0; j < 70; ++j)
    c[j] = 2075593088;
  fn2();
  f(&a, e);
  if (a)
    __builtin_abort();
  return 0;
}
