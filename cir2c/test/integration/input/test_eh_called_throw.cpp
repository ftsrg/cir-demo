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

// Flat EH: calling functions that can throw.
//
// After -cir-flatten-cfg the call site becomes a cir.try_call with a normal
// and an unwind successor.  The unwind block begins with cir.eh.inflight_exception
// (EhInflightOp) and may reference catch-type RTTI symbols in its catch_type_list.
//
// Fix #2: the pre-scan ehScan lambda must register those symbols before the
//   EH preamble is written; otherwise __cir_eh_type_* string literals for
//   types referenced only in EhInflightOp would be missing from the output.
// Fix #12: forwardEhToken loops over all (operand, block-argument) pairs so
//   the eh_token placeholder is forwarded correctly to every dispatch successor.

struct Fault {
    int code;
};

struct BadInput {
    int value;
};

// May throw either type depending on the input.
void may_throw(int x) {
    if (x < 0)   throw Fault{x};
    if (x > 100) throw BadInput{x};
}

// Caller catches one of the types.
int call_catch_fault(int x) {
    try {
        may_throw(x);
        return 1;
    } catch (const Fault& f) {
        return f.code;
    }
    return 0;
}

// Caller catches the other type.
int call_catch_bad_input(int x) {
    try {
        may_throw(x);
        return 1;
    } catch (const BadInput& b) {
        return b.value;
    }
    return 0;
}

// Caller catches both typed exceptions.
int call_catch_both(int x) {
    try {
        may_throw(x);
        return 0;
    } catch (const Fault& f) {
        return f.code;
    } catch (const BadInput& b) {
        return b.value;
    }
    return -1;
}

// Multiple calls in the same try body — exercises multiple EhInflightOp
// RTTI registrations from the same function's flat CIR.
int call_twice(int x, int y) {
    int r = 0;
    try {
        may_throw(x);
        r += 10;
        may_throw(y);
        r += 20;
    } catch (const Fault& f) {
        return f.code;
    } catch (...) {
        return -1;
    }
    return r;
}

// Call inside a loop — the loop body can throw on every iteration.
int call_in_loop(int n) {
    int sum = 0;
    try {
        for (int i = 0; i < n; ++i) {
            may_throw(i - 5);
            sum += i;
        }
    } catch (const Fault&) {
        return -1;
    }
    return sum;
}

// Catch-all on a call that can throw typed exceptions — ensures the
// default_destination path in handleEhDispatch is exercised.
int call_catch_all(int x) {
    try {
        may_throw(x);
        return 0;
    } catch (...) {
        return -99;
    }
}
