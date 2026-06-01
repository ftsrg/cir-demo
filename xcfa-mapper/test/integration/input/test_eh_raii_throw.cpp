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

// Flat EH: RAII destructor must run when a cir.throw fires.
//
// Fix #4: handleThrow now calls emitPendingCleanups before emitExceptionReturn
//   so mapper-level cleanup regions on cleanupStack_ are drained on the throw
//   path, mirroring what handleReturn already does.  Without the fix the
//   destructor call emitted into the cleanup region would be skipped.

struct Counter {
    int *p;
    Counter(int *pp) : p(pp) { *p += 1; }
    ~Counter() { *p -= 1; }
};

void do_throw(int x) {
    if (x < 0) throw x;
}

// Counter ctor increments *cnt; if the exception unwinds the scope the dtor
// should decrement it back.  The mapper must drain the cleanup stack when
// emitting the throw so that the net change visible to the catch handler is 0.
int raii_unwind(int *cnt) {
    try {
        Counter c(cnt);
        do_throw(-1);
        return *cnt;
    } catch (int) {
        return *cnt;
    }
    return -99;
}

// Two RAII objects in the same scope — both dtors must run.
int raii_two_objects(int *cnt) {
    try {
        Counter a(cnt);
        Counter b(cnt);
        do_throw(-1);
        return *cnt;
    } catch (int) {
        return *cnt;
    }
    return -99;
}

// RAII object in a nested scope inside a try body.
int raii_nested_scope(int *cnt) {
    try {
        {
            Counter c(cnt);
        }
        do_throw(-1);
        return *cnt;
    } catch (int) {
        return *cnt;
    }
    return -99;
}
