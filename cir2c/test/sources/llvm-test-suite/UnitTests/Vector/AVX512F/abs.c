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
 * Test absolute value intrinsics.
 * Here we check for _mm512_abs_ps and _mm512_abs_pd intrinsics.
 */

#include "m512_test_util.h"
#include <stdio.h>

V512 f32;
V512 f64;

void NOINLINE init() {
  volatile int i;

  for (i = 0; i < 16; i++) {
    f32.f32[i] = (i & 1) ? i : -i;
  }

  for (i = 0; i < 8; i++) {
    f64.f64[i] = (i & 1) ? -i : i;
  }
}

void NOINLINE do_abs_ps() {
  V512 res;
  V512 expected;
  volatile int i;

  res.zmm = _mm512_abs_ps(f32.zmm);

  for (i = 0; i < 16; i++) {
    expected.s32[i] = f32.s32[i] & 0x7fffffff;
  }

  check_equal_nd(&res, &expected, 16, "_mm512_abs_ps", __LINE__);
}

void NOINLINE do_abs_pd() {
  V512 res;
  V512 expected;
  volatile int i;

  res.zmmd = _mm512_abs_pd(f64.zmmd);

  for (i = 0; i < 8; i++) {
    expected.s64[i] = f64.s64[i] & 0x7fffffffffffffff;
  }

  check_equal_nd(&res, &expected, 16, "_mm512_abs_pd", __LINE__);
}

int main(int argc, char *argv[]) {
  init();

  do_abs_ps();
  do_abs_pd();

  if (n_errs != 0) {
    printf("FAILED\n");
    return 1;
  }

  printf("PASSED\n");
  return 0;
}
