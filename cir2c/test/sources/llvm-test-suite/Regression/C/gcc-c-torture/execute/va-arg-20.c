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

#include <stdarg.h>

void foo(va_list v)
{
    unsigned long long x = va_arg (v, unsigned long long);
    if (x != 16LL)
	abort();
}

void bar(char c, char d, ...)
{
    va_list v;
    va_start(v, d);
    foo(v);
    va_end(v);
}

int main(void)
{
    bar(0, 0, 16LL);
    exit(0);
}
