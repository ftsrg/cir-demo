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

extern int printf(const char*, ...);
void foo( unsigned int i, int array[4]) __attribute__((noinline));
void foo( unsigned int i, int array[4]) {
  unsigned int j=3;
  do {
    array[j] = array[j-1];
    j--;
  }  while (j>i);
  printf("%d %d %d %d %d\n", i, array[0], array[1], array[2], array[3]);
}
main() {
  int array[4], i;
  for (i=0; i<5; i++) {
    array[0] = 5; array[1] = 6; array[2] = 7; array[3] = 8;
    foo(i, array);
  }
  array[0] = 5; array[1] = 6; array[2] = 7; array[3] = 8;
  foo(0xffffffffU, array);
  return 0;
}
