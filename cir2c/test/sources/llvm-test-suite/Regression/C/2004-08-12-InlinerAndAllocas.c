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

// A compiler cannot inline Callee into main unless it is prepared to reclaim
// the stack memory allocated in it.

#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
#include <stdlib.h>
#else
#include <alloca.h>
#endif
#include <stdio.h>

static int Callee(int i) {
  if (i != 0) {
    char *X = alloca(1000);
    sprintf(X, "%d\n", i);
    return X[0];
  }
  return 0;
}

int main() {
  int i, j = 0;
  for (i = 0; i < 10000; ++i)
    j += Callee(i);
  printf("%d\n", j);
  return 0;
}
