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

#include "helpers.h"

union Array {
  v8sd  Vectors[100];
  double Floats[800];
};

union Array TheArray;

int main() {
  int i;
  v8sd sum = { 0, 0, 0, 0, 0, 0, 0, 0};
  D8V sumV;
  for (i = 0; i < 800; ++i)
    TheArray.Floats[i] = i*12.345;

  for (i = 0; i < 100; ++i)
    sum += TheArray.Vectors[i];

  sumV.V = sum;
  printD8V(&sumV);
  return 0;
}
