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

/* PR rtl-optimization/85925 */
/* { dg-require-effective-target int32plus } */
/* Testcase by <sudi@gcc.gnu.org> */

int a, c, d;
volatile int b;
int *e = &d;

union U1 {
  unsigned f0;
  unsigned f1 : 15;
};
volatile union U1 u = { 0x4030201 };

int main (void)
{
  for (c = 0; c <= 1; c++) {
    union U1 f = {0x4030201};
    if (c == 1)
      b;
    *e = f.f1;
  }

  if (d != u.f1)
    __builtin_abort ();

  return 0;
}
