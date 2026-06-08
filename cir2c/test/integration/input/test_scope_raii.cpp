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

// cir.scope case 3: RAII / destructor on block exit.
// A local with a non-trivial destructor; CIR emits the ctor, then a
// cir.cleanup.scope whose `cleanup` region holds the dtor call. The dtor MUST
// appear in the generated C (it has verifier-observable side effects).
//
// NOTE: C++20 / co_await (cir.await) is intentionally out of scope for the
// mapper for now; coroutine scopes are not handled.
struct Lock {
    int* m;
    Lock(int* mm) : m(mm) { *m = 1; }
    ~Lock() { *m = 0; }
};
void raii(int* mutex) {
    int before = *mutex;
    {
        Lock lk(mutex);
        *mutex = before + 1;
    }
}
