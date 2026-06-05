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

/*
    The test targets function Value::dropDroppableUse(Use &U) in Value.cpp.
*/
#include <stdint.h>
#include <stdio.h>
#include <inttypes.h>
char a;
short b = 1, d = 5, h = 1;
char c[6];
int32_t e = 1, f = 20, g = 1, j = 1;
int32_t main() {
  int32_t i = 8;
  for (; f; f = a) {
    g = (5);
    for (; g <= 32; ++g) {
      i = 6;
      for (; i < -4; i++)
        while (7 > d)
          if (c[b]) {
            break;
          }
    L:
      if (j) {
        break;
      }
    }
  }
  e = 0;
  for (; e; e = 900) {
    d++;
    for (; h;)
      goto L;
  }
  printf("%" PRId32, e);
  return 0;
}
