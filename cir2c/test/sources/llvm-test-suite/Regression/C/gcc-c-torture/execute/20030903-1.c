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

/* Test that we don't let stmt.c think that the enumeration's values are
   the entire set of possibilities.  Such an assumption is false for C,
   but true for other languages.  */

enum X { X1 = 1, X2, X3, X4 };
static volatile enum X test = 0;
static void y(int);

int main()
{
  switch (test)
    {
    case X1: y(1); break;
    case X2: y(2); break;
    case X3: y(3); break;
    case X4: y(4); break;
    }
  return 0;
}

static void y(int x) { abort (); }
