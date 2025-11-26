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
extern void* __VERIFIER_nondet_ptr();

int main() {
    int val = __VERIFIER_nondet_int();
    void *p = __VERIFIER_nondet_ptr();
    int *ip = nullptr;
    if (p) ip = reinterpret_cast<int*>(p);
    if (ip) {
        if (*ip == val) reach_error();
    } else {
        // null path
        if (val == 0) reach_error();
    }
    return 0;
}
