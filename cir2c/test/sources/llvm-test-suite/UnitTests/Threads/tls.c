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
#include <pthread.h>
#include <inttypes.h>

void *f(void *a){
  static __thread intptr_t i = 1;
  i++;
  return (void *)i;
}

int main() {
  pthread_t t;
  intptr_t ret;
  pthread_create(&t, NULL, f, NULL);
  pthread_join(t, (void **) &ret);
  printf("Thread 1: %d\n", (int) ret);
  pthread_create(&t, NULL, f, NULL);
  pthread_join(t, (void **) &ret);
  printf("Thread 2: %d\n", (int) ret);
  return 0;
}
