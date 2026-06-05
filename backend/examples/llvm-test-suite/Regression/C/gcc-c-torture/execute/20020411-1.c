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

/* PR optimization/6177
   This testcase ICEd because expr.c did not expect to see a CONCAT
   as array rtl.  */

extern void abort (void);
extern void exit (int);

__complex__ float foo (void)
{
  __complex__ float f[1];
  __real__ f[0] = 1.0;
  __imag__ f[0] = 1.0;
  f[0] = __builtin_conjf (f[0]);
  return f[0];
}

int main (void)
{
  __complex__ double d[1];
  d[0] = foo ();
  if (__real__ d[0] != 1.0
      || __imag__ d[0] != -1.0)
    abort ();
  exit (0);
}
