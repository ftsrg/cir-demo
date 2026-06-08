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

// Issue #7: by default, std::ostream insertions (cout << ...) are externalized
// to __VERIFIER_log(...) calls so verifiers need not reason about iostream.
#include <iostream>

int main() {
    int x = 21;
    std::cout << "value=" << x << std::endl;
    return x + x;
}
