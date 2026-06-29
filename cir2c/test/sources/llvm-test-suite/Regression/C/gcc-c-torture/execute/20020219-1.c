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

/* PR c/4308
   This testcase failed because 0x8000000000000000 >> 0
   was incorrectly folded into 0xffffffff00000000.  */

extern void abort (void);
extern void exit (int);

long long foo (void)
{
  long long C = 1ULL << 63, X;
  int Y = 32;
  X = C >> (Y & 31);
  return X;
}

int main (void)
{
  if (foo () != 1ULL << 63)
    abort ();
  exit (0);
}
