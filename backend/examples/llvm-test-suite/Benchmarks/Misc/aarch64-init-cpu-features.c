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

extern struct {
  unsigned long long features;
} __aarch64_cpu_features;

#if HAS_DARWIN_FMV
# define RUNTIME_INIT __init_cpu_features_resolver
#elif HAS_LINUX_FMV
# define RUNTIME_INIT __init_cpu_features
#endif

void RUNTIME_INIT(void);

int main() {
    RUNTIME_INIT();
    const unsigned long long first = __aarch64_cpu_features.features;

    // Manually reset it, so we can check that the result is consistent.
    __aarch64_cpu_features.features = 0;
    RUNTIME_INIT();

    if (__aarch64_cpu_features.features != first) {
        printf("FAILED consistency test: 0x%llx != 0x%llx\n", first,
               __aarch64_cpu_features.features);
        return 1;
    }

    // At 1,000,000 iterations, the reported exec_time doubles as a
    // per-iteration measurement in microseconds.
    for (int i = 0; i < 1000000; i++) {
        __aarch64_cpu_features.features = 0;
        RUNTIME_INIT();
    }
}
