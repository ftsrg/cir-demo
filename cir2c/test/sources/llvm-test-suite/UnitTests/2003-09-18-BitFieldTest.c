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

struct rtx_def {
  unsigned int jump : 1;
  unsigned int call : 1;
};

void i2(struct rtx_def *d) {
  d->jump = 0;
}

int main() {
  struct rtx_def D;
  D.call = 1;
  i2(&D);
  printf("%d %d\n", D.jump, D.call);
  return 0;
}


