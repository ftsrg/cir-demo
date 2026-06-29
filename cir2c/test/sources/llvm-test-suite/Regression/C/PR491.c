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

static int assert_fail(const char* s, unsigned l)
{
    fprintf(stderr, "assertion failed in line %u: '%s'\n", l, s);
    return 0;
}
#define ASSERT(expr)    ((expr) ? 1 : assert_fail(#expr,__LINE__))

int test(int r) {
#if !defined(__i386__) && !defined(__x86_64__)
  #if !defined(BYTE_ORDER) || !defined(LITTLE_ENDIAN)
     return r;
  #else
     if (BYTE_ORDER != LITTLE_ENDIAN) return r;
  #endif
#endif

    /* little endian */
    union { long l; unsigned char c[sizeof(long)]; } u;
    u.l = 0; u.c[0] = 0x80;
    r &= ASSERT(u.l == 128);
    u.l = 0; u.c[sizeof(long)-1] = 0x80;
    r &= ASSERT(u.l < 0);
    return r;
}

int main() {
    return test(1) != 1;
}

