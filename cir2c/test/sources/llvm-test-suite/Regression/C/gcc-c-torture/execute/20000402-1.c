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

#include <limits.h>

#if ULONG_LONG_MAX != 18446744073709551615ull && ULONG_MAX != 18446744073709551615ull
int main(void) { exit (0); }
#else
#if ULONG_MAX != 18446744073709551615ull
typedef unsigned long long ull;
#else
typedef unsigned long ull;
#endif

#include <stdio.h>

void checkit(int);

main () {
    const ull a = 0x1400000000ULL;
    const ull b = 0x80000000ULL;
    const ull c = a/b;
    const ull d = 0x1400000000ULL / 0x80000000ULL;

    checkit ((int) c);
    checkit ((int) d);

    exit(0);
}

void checkit (int a)
{
  if (a != 40)
    abort();
}
#endif
