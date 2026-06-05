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

int foo(volatile *mem, int val, int c) {
  int oldval = __sync_fetch_and_add(mem, val);
  return oldval + c;
}

volatile int x = 0;
int main() {
  long long test = 0;
  int i;
  int y = foo(&x, 1, 2);
  printf("%d, %d\n", y, x);
  y = __sync_val_compare_and_swap(&x, 1, 2);
  printf("%d, %d\n", y, x);
  y = __sync_lock_test_and_set(&x, 1);
  printf("%d, %d\n", y, x);

  for (i = 0; i < 5; i++) {
    __sync_add_and_fetch(&test, 1);
    printf("test = %d\n", (int)test);
  }

  for (i = 0; i < 5; i++) {
    __sync_fetch_and_sub(&test,1);
    printf("test = %d\n", (int)test);
  }

  return 0;
}
