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

// cir.scope case 5: for-loop with init variable.
// `i` is scoped to the loop, so CIR emits a cir.scope holding the alloca for i
// and the cir.for together.
void body(int);
void for_init() {
    for (int i = 0; i < 10; ++i) {
        body(i);
    }
}
