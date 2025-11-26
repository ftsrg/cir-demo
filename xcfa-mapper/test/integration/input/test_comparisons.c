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

// Integration test: Comparison operations (cmp)
int test_comparisons() {
    int a = 10;
    int b = 20;
    
    if (a < b) {   // lt
        return 1;
    }
    return 0;
}

int test_equality() {
    int x = 5;
    int y = 5;
    
    if (x == y) {  // eq
        return 1;
    }
    if (x != y) {  // ne
        return 0;
    }
    return 2;
}

int test_all_comparisons() {
    int a = 10;
    int b = 20;
    int result = 0;
    
    if (a < b) result = result + 1;   // lt
    if (a <= b) result = result + 2;  // le
    if (a > b) result = result + 4;   // gt
    if (a >= b) result = result + 8;  // ge
    if (a == b) result = result + 16; // eq
    if (a != b) result = result + 32; // ne
    
    return result;
}
