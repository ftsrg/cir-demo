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

extern void reach_error();
extern int __VERIFIER_nondet_int();

int main() {
    int n = __VERIFIER_nondet_int();
    if (n <= 0) n = 3;
    int *arr = new int[n];
    for (int i = 0; i < n; ++i) arr[i] = i;
    int *p = arr + (n/2);
    if (*(p) == 7) reach_error();
    delete [] arr;
    return 0;
}
