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

// Integration test: Unary operations (unary)
int test_unary_minus() {
    int x = 42;
    int y = -x;
    return y;
}

int test_unary_plus() {
    int x = 42;
    int y = +x;
    return y;
}

int test_bitwise_not() {
    int x = 0xF0;
    int y = ~x;
    return y;
}

int test_increment() {
    int x = 10;
    int y = ++x;
    int z = x++;
    return x + y + z;
}

int test_decrement() {
    int x = 10;
    int y = --x;
    int z = x--;
    return x + y + z;
}
