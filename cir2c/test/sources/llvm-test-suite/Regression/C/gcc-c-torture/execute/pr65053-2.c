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

/* PR tree-optimization/65053 */

int i;
unsigned int x;

int
main ()
{
  asm volatile ("" : "+g" (x));
  unsigned int n = x;
  unsigned int u = 32;
  if (n >= 32)
    __builtin_abort ();
  if (n != 0)
    u = n + 32;

  while (u != 32)
    {
      asm ("" : : "g" (u));
      u = 32;
      i = 1;
    }

  if (i)
    __builtin_abort ();
  return 0;
}
