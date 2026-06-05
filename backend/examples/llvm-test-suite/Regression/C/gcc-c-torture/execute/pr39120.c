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

struct X { int *p; } x;

struct X __attribute__((noinline))
foo(int *p) { struct X x; x.p = p; return x; }

void __attribute((noinline))
bar() { *x.p = 1; }

extern void abort (void);
int main()
{
  int i = 0;
  x = foo(&i);
  bar();
  if (i != 1)
    abort ();
  return 0;
}
