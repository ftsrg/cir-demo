/*
 * Copyright 2026 LLVM Project
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

int abs(int j);
extern void abort(void);

__attribute__((noinline)) int lisp_atan2(long dy, long dx) {
    if (dx <= 0)
        if (dy > 0)
            return abs(dx) <= abs(dy);
    return 0;
}

int main() {
    volatile long dy = 63, dx = -77;
    if (lisp_atan2(dy, dx))
        abort();
    return 0;
}
