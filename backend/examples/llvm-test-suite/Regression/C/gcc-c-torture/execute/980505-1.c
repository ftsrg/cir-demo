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

static int f(int) __attribute__((const));
int main()
{
   int f1, f2, x;
   x = 1; f1 = f(x);
   x = 2; f2 = f(x);
   if (f1 != 1 || f2 != 2)
     abort ();
   exit (0);
}
static int f(int x) { return x; }
