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

// Non-flat EH: nested cir.try structures exercise the tryLandingPadStack_
// push/pop mechanics directly.
//
// Fix #3: with the per-function reset in place, even if a nested push/pop
//   sequence goes wrong, the next function always starts with a clean stack.
// The inner try's dispatch label must be on top of the stack while the inner
// try body executes, and the outer label must be visible again once the inner
// try has been exited.

struct Inner { int n; };
struct Outer { int n; };

// Inner throw caught by inner handler; outer try sees no exception.
int nested_inner_caught(int x) {
    int r = 0;
    try {
        r += 1;
        try {
            if (x < 0) throw Inner{x};
            r += 10;
        } catch (const Inner& e) {
            r = e.n;
        }
        r += 100;
    } catch (...) {
        r = -1;
    }
    return r;
}

// Inner throw not caught by inner handler; propagates to outer handler.
int nested_propagate(int x) {
    int r = 0;
    try {
        try {
            if (x < 0) throw Outer{x};
            r = 1;
        } catch (const Inner&) {
            r = 2;
        }
    } catch (const Outer& e) {
        r = e.n;
    }
    return r;
}

// Three levels of nesting.
int triple_nested(int x) {
    int r = 0;
    try {
        r += 1000;
        try {
            r += 100;
            try {
                r += 10;
                if (x == 2) throw Inner{x};
                r += 1;
            } catch (const Inner& e) {
                r += e.n;
            }
        } catch (...) {
            r = -100;
        }
    } catch (...) {
        r = -1000;
    }
    return r;
}

// Throw inside the catch handler of an inner try — the outer catch must
// intercept it.
int throw_from_catch(int x) {
    try {
        try {
            if (x < 0) throw Inner{x};
        } catch (const Inner& e) {
            if (e.n < -5) throw Outer{e.n};
            return e.n;
        }
        return 0;
    } catch (const Outer& e) {
        return e.n * 2;
    }
    return -1;
}
