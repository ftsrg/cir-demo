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

/* PR tree-optimization/86231 */

#define ONE ((void *) 1)
#define TWO ((void *) 2)

__attribute__((noipa)) int
foo (void *p, int x)
{
  if (p == ONE) return 0;
  if (!p)
    p = x ? TWO : ONE;
  return p == ONE ? 0 : 1;
}

int v[8];

int
main ()
{
  if (foo ((void *) 0, 0) != 0
      || foo ((void *) 0, 1) != 1
      || foo (ONE, 0) != 0
      || foo (ONE, 1) != 0
      || foo (TWO, 0) != 1
      || foo (TWO, 1) != 1
      || foo (&v[7], 0) != 1
      || foo (&v[7], 1) != 1)
    __builtin_abort ();
  return 0;
}
