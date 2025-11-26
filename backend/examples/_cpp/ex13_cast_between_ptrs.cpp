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
extern void* __VERIFIER_nondet_ptr();

struct S { int a; double b; };

int main() {
    void *p = __VERIFIER_nondet_ptr();
    if (!p) return 0;
    S *sp = reinterpret_cast<S*>(p);
    if (sp->a == 0 && sp->b == 0.0) reach_error();
    return 0;
}
