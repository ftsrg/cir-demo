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

// Integration test: Arrays and pointers (ptr_stride, ptr_diff, get_element)
int test_array_access() {
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    return arr[2];
}

int test_pointer_arithmetic() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;
    int *q = p + 3;  // ptr_stride
    return *q;
}

int test_pointer_difference() {
    int arr[10];
    int *p = &arr[2];
    int *q = &arr[7];
    long diff = q - p;  // ptr_diff
    return (int)diff;
}
