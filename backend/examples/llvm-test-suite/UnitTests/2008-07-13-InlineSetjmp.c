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

// PR2486

#include <setjmp.h>      
#include <stdio.h>
jmp_buf g;
static int a() {longjmp(g,1);}
static void b(int* x) {if (setjmp(g))return;*x = 10;a();}
int main() {int a = 1; b(&a); printf("%d\n", a); return 0;}

