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

/* PR middle-end/13400 */
/* The following test used to fail at run-time with a write to read-only
   memory, caused by if-conversion converting a conditional write into an
   unconditional write.  */

typedef struct {int c, l; char ch[3];} pstr;
const pstr ao = {2, 2, "OK"};
const pstr * const a = &ao;

void test1(void)
{
    if (a->ch[a->l]) {
        ((char *)a->ch)[a->l] = 0;
    }
}

void test2(void)
{
    if (a->ch[a->l]) {
        ((char *)a->ch)[a->l] = -1;
    }
}

void test3(void)
{
    if (a->ch[a->l]) {
        ((char *)a->ch)[a->l] = 1;
    }
}

int main(void)
{
    test1();
    test2();
    test3();
    return 0;
}
