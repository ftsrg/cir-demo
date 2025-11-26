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

// Integration test: Shift operations (shift)
int test_left_shift() {
    int x = 1;
    int y = x << 3;  // 1 << 3 = 8
    return y;
}

int test_right_shift() {
    int x = 16;
    int y = x >> 2;  // 16 >> 2 = 4
    return y;
}

int test_shift_operations() {
    int a = 4;
    int b = a << 1;  // 8
    int c = b >> 1;  // 4
    int d = c << 2;  // 16
    return d;
}
