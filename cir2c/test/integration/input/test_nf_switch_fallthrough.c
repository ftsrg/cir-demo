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

// Non-flat test: structured cir.switch with nested cir.case ops.
// Exercises Phase A1 (handleSwitch rewrite to iterate cases) and the
// fallthrough / break yield kinds (Phase A2).

int test_switch_basic(int x) {
    int r = 0;
    switch (x) {
        case 1: r = 10; break;
        case 2: r = 20; break;
        case 3: r = 30; break;
        default: r = -1;
    }
    return r;
}

int test_switch_fallthrough(int x) {
    int r = 0;
    switch (x) {
        case 1:
            r = r + 1;
            // explicit fallthrough into case 2
        case 2:
            r = r + 2;
            break;
        case 3:
            r = r + 100;
            break;
        default:
            r = -1;
    }
    return r;
}

int test_switch_multi_case(int x) {
    // Stacked labels — every CIR backend should fold these into a single
    // case body with multiple labels (Anyof) or two adjacent empty-body
    // cases that fall through.
    int r = 0;
    switch (x) {
        case 1:
        case 2:
        case 3:
            r = 1;
            break;
        case 4:
        case 5:
            r = 2;
            break;
        default:
            r = 0;
    }
    return r;
}

int test_switch_no_default(int x) {
    int r = -42;
    switch (x) {
        case 7: r = 7; break;
        case 8: r = 8; break;
    }
    return r;
}
