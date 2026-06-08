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

// Flat EH: basic typed throw / catch.
//
// Fix #1/#11: the generated C must contain `extern void abort(void)` even
//   when the module has no cir.trap, because handleEhTerminate and the
//   zero-successor branch of handleEhDispatch both emit abort().
// Fix #5: __cir_exc_type_id must be declared as uintptr_t (not unsigned) so
//   the 64-bit RTTI address is not truncated; verified by gcc -fsyntax-only
//   accepting the generated C without implicit-conversion warnings.
// Fix #7: the exception-object buffer is declared `static` in the emitted C
//   so that __cir_exc_ptr does not dangle after the throwing function returns.

struct MyError {
    int code;
    MyError(int c) : code(c) {}
};

struct OtherError {
    int extra;
};

// Single typed catch.
int catch_my_error(int x) {
    try {
        if (x < 0)
            throw MyError(x);
        return x;
    } catch (const MyError& e) {
        return e.code;
    }
    return 0;
}

// Two typed catches — exercises the full dispatch chain.
int catch_two_types(int x) {
    try {
        if (x < 0) throw MyError(x);
        if (x > 100) throw OtherError{x};
        return x;
    } catch (const MyError& e) {
        return e.code;
    } catch (const OtherError& e) {
        return e.extra;
    }
    return 0;
}

// Typed catch followed by catch-all — exercises the catch-all fall-through.
int catch_typed_then_all(int x) {
    try {
        if (x < 0)  throw MyError(x);
        if (x == 0) throw OtherError{99};
        return x;
    } catch (const MyError& e) {
        return e.code - 1;
    } catch (...) {
        return -99;
    }
    return 0;
}

// Bare catch-all only.
int catch_all_only(int x) {
    try {
        if (x == 0)
            throw MyError(42);
        return x;
    } catch (...) {
        return -1;
    }
}
