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

// Issue #3: C++ demangling collapses distinct symbols to the same identifier
// (the default/copy/move constructors all demangle to `Box::Box`, and the two
// `add` overloads to `add`). The mapper must give each a unique, readable name
// rather than emitting two functions with the same name.
struct Box {
    int x;
    Box() : x(0) {}
    Box(const Box &o) : x(o.x) {}
    Box(Box &&o) : x(o.x) {}
};

int add(int a, int b) { return a + b; }
double add(double a, double b) { return a + b; }

int main() {
    Box a;
    Box b(a);
    Box c(static_cast<Box &&>(a));
    return add(b.x, c.x) + (int)add(1.0, 2.0);
}
