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

// PR594

struct X {
  int Q :6;
   int A : 4;
   int Z : 22;
};

void test(struct X *P, int A) {
   P->A = A;
}

extern int printf(const char *str, ...);

int main() {
  union {
    int Y;
    struct X Z;
  } U;
  U.Y = ~0;
  test(&U.Z, 0);
  printf("%x\n", U.Y);
  return 0;
}
