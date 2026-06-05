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
//  float x;
//  double y;
//  long long z;
} S1Ty;

typedef struct {
  S1Ty A, B;
} S2Ty;

void takeS1(S1Ty *V) {}
void takeVoid(void *P) {}

int main() {
  S2Ty E;
  takeS1(&E.B);
  takeVoid(&E);
  return 0;
}

