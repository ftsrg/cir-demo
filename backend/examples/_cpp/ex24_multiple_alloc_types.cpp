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
    int *pi = new int[__VERIFIER_nondet_int() > 0 ? 3 : 1];
    double *pd = new double[2];
    pi[0] = __VERIFIER_nondet_int();
    pd[1] = __VERIFIER_nondet_double();
    if (pi[0] == (int)pd[1]) reach_error();
    delete [] pi;
    delete [] pd;
    return 0;
}
