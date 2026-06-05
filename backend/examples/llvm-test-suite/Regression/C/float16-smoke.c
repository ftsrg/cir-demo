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


// Clang on loongarch and s390x now support _Float16, however the system
// libraries on current distributions do not yet contain the necessary
// conversion routines to actually run binaries using _Float16. Disable
// the test on loongarch and s390x for now.
#if defined(__FLT16_DIG__) && !defined(__loongarch__) && !defined(__s390x__)

typedef _Float16 fp16_t;
__attribute__((noinline))
void printArg(fp16_t a0) {
  printf("printArg: %a\n", (double)a0);
}

fp16_t g_fp16 = 1.0;

int main(int argc, char** argv) {
  printArg((fp16_t)0.0);
  printArg((fp16_t)0x1p0);
  printArg((fp16_t)-0x1p-8);
  printArg(g_fp16 + (fp16_t)0x1p0);

  return 0;
}

#else

int main() {
  printf("printArg: 0x0p+0\n");
  printf("printArg: 0x1p+0\n");
  printf("printArg: -0x1p-8\n");
  printf("printArg: 0x1p+1\n");
  return 0;
}

#endif
