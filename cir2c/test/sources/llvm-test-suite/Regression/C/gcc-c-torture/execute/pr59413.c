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

/* PR tree-optimization/59413 */

typedef unsigned int uint32_t;

uint32_t a;
int b;

int
main ()
{
  uint32_t c;
  for (a = 7; a <= 1; a++)
    {
      char d = a;
      c = d;
      b = a == c;
    }
  if (a != 7)
    __builtin_abort ();
  return 0;
}
