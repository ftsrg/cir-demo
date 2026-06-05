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

/* PR tree-optimization/82954 */

__attribute__((noipa)) void
foo (int *__restrict p, int *__restrict q)
{
  p[0] = p[0] ^ 1;
  p[1] = p[1] ^ 2;
  p[2] = p[2] ^ q[2];
  p[3] = p[3] ^ q[3];
}

int
main ()
{
  int p[4] = { 16, 32, 64, 128 };
  int q[4] = { 8, 4, 2, 1 };
  asm volatile ("" : : "g" (p), "g" (q) : "memory");
  foo (p, q);
  if (p[0] != 17 || p[1] != 34 || p[2] != 66 || p[3] != 129)
    __builtin_abort ();
  return 0;
}
