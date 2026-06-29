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
 * Exercise a very simple inline asm sequence.
 */

#include "m512_test_util.h"
#include <stdio.h>
#include <string.h>

__m512d a;
__m512d b;
__m512d c;

void NOINLINE foo() {
  void *pa, *pb;

  pa = &a;
  pb = &b;

  __asm {
        mov         FULL_IREG(ax), [pa]
        mov         FULL_IREG(dx), [pb]
        vmovapd     zmm0, ZMMWORD PTR [FULL_IREG(ax)]
        vaddpd      zmm2, zmm0, ZMMWORD PTR [FULL_IREG(dx)]
        vmovapd     ZMMWORD PTR [FULL_IREG(ax)], zmm2
  }
}

static void NOINLINE init() {
  int i;
  double *pa, *pb, *pc;

  pa = (double *)&a;
  pb = (double *)&b;
  pc = (double *)&c;

  for (i = 0; i < sizeof(a) / sizeof(double); i++) {
    *pa++ = i * i;
    *pb++ = (i + 8) * (i + 8);
    *pc++ = i * i + (i + 8) * (i + 8);
  }
}

int main() {
  init();
  foo();

  if (memcmp(&a, &c, sizeof(a)) != 0) {
    printf("FAILED\n");
    return 1;
  }

  printf("PASSED\n");
  return 0;
}
