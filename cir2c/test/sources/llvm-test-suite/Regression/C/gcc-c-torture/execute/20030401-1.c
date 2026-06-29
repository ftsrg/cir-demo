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

/* Testcase for PR fortran/9974.  This was a miscompilation of the g77
   front-end caused by the jump bypassing optimizations not handling
   instructions inserted on CFG edges.  */

extern void abort ();

int bar ()
{
  return 1;
}

void foo (int x)
{
  unsigned char error = 0;

  if (! (error = ((x == 0) || bar ())))
    bar ();
  if (! error)
    abort ();
}

int main()
{
  foo (1);
  return 0;
}
