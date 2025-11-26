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
extern bool __VERIFIER_nondet_bool();
extern char __VERIFIER_nondet_char();
extern short __VERIFIER_nondet_short();
extern long __VERIFIER_nondet_long();

int main() {
    bool b = __VERIFIER_nondet_bool();
    char c = __VERIFIER_nondet_char();
    short s = __VERIFIER_nondet_short();
    long l = __VERIFIER_nondet_long();
    if (b && (c == 'X') && (s > 100) && (l % 2 == 0)) reach_error();
    return 0;
}
