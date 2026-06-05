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

/* Used to be miscompiled at -O0 due to incorrect choice of sign extension
   vs. zero extension.  __attribute__ ((noinline)) added to try to make it
   fail at higher optimization levels too.  */

extern void abort (void);

long long __attribute__ ((noinline))
div (long long val)
{
  return val / 32768;
}

int main (void)
{
  long long d1 = -990000000;
  long long d2 = div(d1);
  if (d2 != -30212)
    abort ();
  return 0;
}
