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

// Non-flat test: deeply nested structured ops to validate the region
// nesting chain (for → if → switch → break/continue) emits structured
// C and that SSA temps declared inside region bodies remain in scope.

int test_nested(int n) {
    int sum = 0;
    for (int i = 0; i < n; i = i + 1) {
        if ((i % 2) == 0) {
            switch (i % 4) {
                case 0:
                    sum = sum + 1;
                    break;
                case 2:
                    sum = sum + 2;
                    break;
                default:
                    sum = sum + 100;
            }
        } else {
            // Nested loop in else branch.
            for (int j = 0; j < i; j = j + 1) {
                if (j == 3) break;
                sum = sum + 5;
            }
        }
    }
    return sum;
}

int test_nested_loops_with_early_return(int n) {
    for (int i = 0; i < n; i = i + 1) {
        for (int j = 0; j < n; j = j + 1) {
            if (i * j > 42) {
                return i * j;
            }
        }
    }
    return -1;
}
