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

// Non-flat test: cir.break and cir.continue inside structured loops.
// Exercises Phase B4 plus interaction with cir.while / cir.for.

int test_break_in_for(int n) {
    int sum = 0;
    for (int i = 0; i < n; i = i + 1) {
        if (i == 5) break;
        sum = sum + i;
    }
    return sum;
}

int test_continue_in_for(int n) {
    int sum = 0;
    for (int i = 0; i < n; i = i + 1) {
        if ((i % 2) == 0) continue;
        sum = sum + i;
    }
    return sum;
}

int test_break_in_while(int n) {
    int i = 0;
    while (1) {
        if (i >= n) break;
        i = i + 1;
    }
    return i;
}

int test_break_continue_combined(int n) {
    int sum = 0;
    for (int i = 0; i < n; i = i + 1) {
        if (i == 7) break;
        if ((i % 3) == 0) continue;
        sum = sum + i;
    }
    return sum;
}
