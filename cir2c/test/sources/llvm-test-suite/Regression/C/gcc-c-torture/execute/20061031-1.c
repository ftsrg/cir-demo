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

/* PR rtl-optimization/29631 */
/* Origin: Falk Hueffner <falk@debian.org> */

const signed char nunmap[] = { 17, -1, 1 };

__attribute__((noinline))
void ff(int i) {
    asm volatile("");
}

__attribute__((noinline))
void f(short delta)
{
    short p0 = 2, s;
    for (s = 0; s < 2; s++)
    {
        p0 += delta;
        ff(s);
        if (nunmap[p0] == 17)
            asm volatile("");
    }
}

int main(void)
{
    f(-1);
    return 0;
}
