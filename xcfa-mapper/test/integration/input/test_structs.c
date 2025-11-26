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

// Integration test: Structures (record, get_member)
struct Point {
    int x;
    int y;
};

int test_struct_access() {
    struct Point p;
    p.x = 10;
    p.y = 20;
    return p.x + p.y;
}

struct Rectangle {
    struct Point top_left;
    struct Point bottom_right;
};

int test_nested_struct() {
    struct Rectangle r;
    r.top_left.x = 0;
    r.top_left.y = 0;
    r.bottom_right.x = 100;
    r.bottom_right.y = 50;
    return r.bottom_right.x + r.bottom_right.y;
}
