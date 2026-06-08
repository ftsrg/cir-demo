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

// cir.scope value-yielding case: GNU statement expression ({ ...; expr; }).
// The cir.scope yields a value via `cir.yield %v`; the mapper must propagate
// that value to the scope's SSA result.
int stmt_expr(int x) {
    int v = ({ int t = x * 2; t + 1; });
    return v;
}
