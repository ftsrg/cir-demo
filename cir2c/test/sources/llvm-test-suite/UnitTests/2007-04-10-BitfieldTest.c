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

#include <stdio.h>
#include <stdlib.h>

union u {
        struct {
                unsigned int a : 8;
                unsigned int b : 3;
                unsigned int c : 3;
                unsigned int d : 3;
                unsigned int e : 3;
                unsigned int f : 3;
                unsigned int g : 3;
                unsigned int h : 3;
                unsigned int i : 3;

                unsigned int n : 8;
                unsigned int o : 8;
                unsigned int p : 8;
                unsigned int q : 8;
        } s;
        unsigned long long token;
};

int main(int argc, char *argv[])
{
        union u uu;
        uu.token = 0x012492490000FFFFULL;
        printf("p = 0x%02X\n", uu.s.p);
        return 0;
}

