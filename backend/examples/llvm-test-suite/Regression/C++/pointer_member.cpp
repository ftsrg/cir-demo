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

struct B { int i, j; };
struct D : public B {};
int D::*di = &D::i;
int D::*dj = &D::j;

int main() {
  D d;
  d.i = d.j = 0;
  d.*di = 4;
  d.*dj = 7;

  printf("%d %d\n", d.i, d.j);

  return 0;
}
