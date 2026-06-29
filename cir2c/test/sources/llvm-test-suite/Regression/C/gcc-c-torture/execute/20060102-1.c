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

extern void abort ();

int f(int x)
{
  return (x >> (sizeof (x) * __CHAR_BIT__ - 1)) ? -1 : 1;
}

volatile int one = 1;
int main (void)
{
  /* Test that the function above returns different values for
     different signs.  */
  if (f(one) == f(-one))
    abort ();
  return 0;
}
