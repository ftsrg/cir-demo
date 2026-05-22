/*
 * Copyright 2025 Budapest University of Technology and Economics
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

// Non-flat test: structured cir.try.  Exercises Phase C.
// The unwind path stays unreachable (we don't model C++ exceptions), so
// the catch bodies are dead code in the generated C — only the try body
// must be emitted correctly.

int test_try_no_throw() {
    int x = 0;
    try {
        x = 1;
    } catch (...) {
        x = 2;
    }
    return x;
}

int test_try_with_loop(int n) {
    int sum = 0;
    try {
        for (int i = 0; i < n; i = i + 1) {
            sum = sum + i;
        }
    } catch (...) {
        sum = -1;
    }
    return sum;
}
