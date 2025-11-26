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

// Integration test: Arithmetic operations (binop)
int test_arithmetic() {
    int a = 10;
    int b = 20;
    int c = a + b;   // add
    int d = c - a;   // sub
    int e = d * 2;   // mul
    int f = e / 5;   // div
    int g = f % 3;   // rem
    return g;
}

int test_bitwise() {
    int a = 15;
    int b = 7;
    int c = a & b;   // and
    int d = a | b;   // or
    int e = a ^ b;   // xor
    return e;
}
