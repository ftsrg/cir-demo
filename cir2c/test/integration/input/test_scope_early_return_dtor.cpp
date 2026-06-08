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

// cir.scope early-return case: a function-scoped RAII object with an early
// `return` inside the cleanup region. The dtor must run on BOTH return paths;
// in CIR the cir.return ops sit inside the cir.cleanup.scope body, so the
// cleanup must be threaded before each return.
struct Res { int* p; Res(int* x):p(x){*p=1;} ~Res(){*p=0;} };
int early(int* flag, int cond) {
    Res r(flag);
    if (cond) {
        return 1;   // dtor must run on this path
    }
    return 0;       // and on this path
}
