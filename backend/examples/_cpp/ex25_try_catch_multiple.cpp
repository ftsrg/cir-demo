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

struct MyEx { int code; };

int may(int x) {
    if (x == 0) throw MyEx{42};
    if (x < 0) throw -1;
    return x;
}

int main() {
    int v = __VERIFIER_nondet_int();
    try {
        int r = may(v);
        if (r == 999) reach_error();
    } catch (MyEx &e) {
        if (e.code == 42) reach_error();
    } catch (...) {
        // generic catch
    }
    return 0;
}
