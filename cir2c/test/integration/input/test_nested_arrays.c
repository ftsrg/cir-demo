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

// Integration test: Nested arrays in structs
#include <stddef.h>

struct Inner {
    char c;
    int arr[2][3];
    double d;
};

struct Outer {
    struct Inner inners[4];
    float f;
    signed long l;
};

int test_nested_arrays() {
    struct Outer o;
    o.inners[2].arr[1][1] = 42;
    o.inners[2].c = 'A';
    o.inners[2].d = 3.14;
    o.f = 2.71f;
    o.l = 123456789L;
    return o.inners[2].arr[1][1] + (int)o.f + (int)o.l + (int)o.inners[2].d + o.inners[2].c;
}
