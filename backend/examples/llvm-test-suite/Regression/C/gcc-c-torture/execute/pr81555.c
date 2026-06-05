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

/* PR tree-optimization/81555 */

unsigned int a = 1, d = 0xfaeU, e = 0xe376U;
_Bool b = 0, f = 1;
unsigned char g = 1;

void
foo (void)
{
  _Bool c = a != b;
  if (c)
    f = 0;
  if (e & c & (unsigned char)d & c)
    g = 0;
}

int
main ()
{
  foo ();
  if (f || g != 1)
    __builtin_abort ();
  return 0;
}
