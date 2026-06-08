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

// Integration test: Global variables (global, get_global)
int global_var = 100;
int global_array[5] = {1, 2, 3, 4, 5};

int test_global_read() {
    return global_var;
}

int test_global_write() {
    global_var = 200;
    return global_var;
}

int test_global_array() {
    int sum = 0;
    int i = 0;
    while (i < 5) {
        sum = sum + global_array[i];
        i = i + 1;
    }
    return sum;
}
