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

// Non-flat test: cir.do (do-while). Exercises Phase B2.
// The body region runs first, then the cond region — opposite of cir.while.

int test_do_while(int n) {
    int sum = 0;
    int i = 0;
    do {
        sum = sum + i;
        i = i + 1;
    } while (i < n);
    return sum;
}

int test_do_while_always_once() {
    // The body runs at least once even when the condition is false initially.
    int x = 0;
    do {
        x = x + 1;
    } while (0);
    return x;
}

int test_do_while_nested(int n) {
    int total = 0;
    int i = 0;
    do {
        int j = 0;
        do {
            total = total + 1;
            j = j + 1;
        } while (j < n);
        i = i + 1;
    } while (i < n);
    return total;
}
