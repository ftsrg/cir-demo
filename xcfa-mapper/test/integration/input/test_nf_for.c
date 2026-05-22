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

// Non-flat test: cir.for (3 regions: cond, body, step).
// Exercises Phase B3.

int test_for_simple(int n) {
    int sum = 0;
    for (int i = 0; i < n; i = i + 1) {
        sum = sum + i;
    }
    return sum;
}

int test_for_nested(int n) {
    int total = 0;
    for (int i = 0; i < n; i = i + 1) {
        for (int j = 0; j < n; j = j + 1) {
            total = total + (i * j);
        }
    }
    return total;
}

int test_for_step_expr(int n) {
    int acc = 1;
    for (int i = 1; i <= n; i = i * 2) {
        acc = acc + i;
    }
    return acc;
}
