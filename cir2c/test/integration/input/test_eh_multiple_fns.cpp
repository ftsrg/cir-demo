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

// Flat EH: multiple functions with independent try/throw blocks.
//
// Fix #3: tryLandingPadStack_ must be cleared at the start of mapFunc.
//   Before the fix, a stale landing-pad label left on the stack by a
//   previous function (e.g. due to an early return in best-effort mode)
//   would be picked up by the next function's emitExceptionReturn, causing
//   it to emit `goto <stale_label>` — a jump to a nonexistent label.
//   With the fix, each function starts with a clean stack.

struct Err { int v; };

// Each function below uses a completely independent try/catch.  The mapper
// must not carry any state from one function into the next.

int fn_a(int x) {
    try {
        if (x == 0) throw Err{1};
        return x;
    } catch (const Err& e) {
        return e.v;
    }
    return -1;
}

int fn_b(int x) {
    try {
        if (x < 0) throw Err{2};
        return x * 2;
    } catch (const Err& e) {
        return -e.v;
    }
    return -1;
}

int fn_c(int x) {
    try {
        if (x > 10) throw Err{3};
        return x + 1;
    } catch (const Err& e) {
        return e.v * 10;
    }
    return -1;
}

// Function with no exception handling — mapped between the EH functions to
// ensure the per-function reset does not disturb plain functions.
int fn_plain(int x) {
    return x * x;
}

int fn_d(int x) {
    try {
        if (x % 2 == 0) throw Err{4};
        return x;
    } catch (const Err& e) {
        return e.v * 100;
    }
    return -1;
}

// Function whose try body exits via an early return — the landing-pad must
// still be popped before the next function is mapped.
int fn_early_return(int x) {
    try {
        if (x > 0) return x;
        throw Err{5};
    } catch (const Err& e) {
        return -e.v;
    }
    return -1;
}

int fn_e(int x) {
    try {
        if (x == 42) throw Err{6};
        return x - 1;
    } catch (const Err& e) {
        return e.v;
    }
    return -1;
}
