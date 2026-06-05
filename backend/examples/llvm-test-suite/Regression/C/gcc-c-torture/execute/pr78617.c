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

int a = 0;
int d = 1;
int f = 1;

int fn1() {
  return a || 1 >> a;
}

int fn2(int p1, int p2) {
  return p2 >= 2 ? p1 : p1 >> 1;
}

int fn3(int p1) {
  return d ^ p1;
}

int fn4(int p1, int p2) {
  return fn3(!d > fn2((f = fn1() - 1000) || p2, p1));
}

int main() {
  if (fn4(0, 0) != 1)
    __builtin_abort ();
  return 0;
}
