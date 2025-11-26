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
extern double __VERIFIER_nondet_double();

int main() {
    int a = __VERIFIER_nondet_int();
    double d = __VERIFIER_nondet_double();
    int b = (d > 0.0) ? (int)d : a;
    // static_cast example
    int c = static_cast<int>(d) + b;
    if (c == 1337) reach_error();
    return 0;
}
