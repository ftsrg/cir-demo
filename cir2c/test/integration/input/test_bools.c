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

// Integration test: Boolean operations (bool)
int test_bool_logic() {
    int a = 1;
    int b = 0;
    int c = a && b;  // logical and
    int d = a || b;  // logical or
    int e = !a;      // logical not
    return c + d + e;
}

int test_bool_comparison() {
    int x = 10;
    int y = 20;
    int less = x < y;
    int greater = x > y;
    int equal = x == y;
    return less + greater + equal;
}
