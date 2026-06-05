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

/* { dg-require-effective-target int32plus } */
struct X {
    char fill0[800000];
    int a;
    char fill1[900000];
    int b;
};

int __attribute__((noinline,noclone))
Avg(struct X *p, int s)
{
    return (s * (long long)(p->a + p->b)) >> 17;
}

struct X x;

int main()
{
    x.a = 1 << 17;
    x.b = 2 << 17;
    if (Avg(&x, 1) != 3)
	__builtin_abort();
    return 0;
}
