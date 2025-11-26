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

enum Color { RED, GREEN, BLUE };

int main() {
    int x = __VERIFIER_nondet_int();
    Color c = static_cast<Color>(x % 3);
    switch (c) {
        case RED: if (x == 7) reach_error(); break;
        case GREEN: if (x == 8) reach_error(); break;
        case BLUE: if (x == 9) reach_error(); break;
    }
    return 0;
}
