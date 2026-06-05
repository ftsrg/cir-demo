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

/* { dg-require-stack-size "0x10000" } */

/* When generating o32 MIPS PIC, main's $gp save slot was out of range
   of a single load instruction.  */
struct big { int i[sizeof (int) >= 4 && sizeof (void *) >= 4 ? 0x4000 : 4]; };
struct big gb;
int foo (struct big b, int x) { return b.i[x]; }
int main (void) { return foo (gb, 0) + foo (gb, 1); }
