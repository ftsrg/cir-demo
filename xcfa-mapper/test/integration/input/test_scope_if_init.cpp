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

// cir.scope case 2: C++17 if-init statement.
// `if (int n = f(); n > 0)` scopes n to the whole if; CIR wraps the alloca for
// n and the cir.if in one cir.scope.
int getValue();
int if_init(int a) {
    if (int n = getValue(); n > 0) {
        return n + a;
    }
    return a;
}
