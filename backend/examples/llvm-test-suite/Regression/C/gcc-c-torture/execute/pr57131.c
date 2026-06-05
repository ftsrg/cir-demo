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

/* PR rtl-optimization/57131 */

extern void abort (void);

int
main ()
{
  volatile int x1 = 0;
  volatile long long x2 = 0;
  volatile int x3 = 0;
  volatile int x4 = 1;
  volatile int x5 = 1;
  volatile long long x6 = 1;
  long long t = ((x1 * (x2 << x3)) / (x4 * x5)) + x6;

  if (t != 1)
    abort ();
  return 0;
}
