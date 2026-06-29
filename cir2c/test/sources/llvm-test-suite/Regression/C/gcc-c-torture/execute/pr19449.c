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

/* PR c/19449 */

extern void abort (void);

int y;
int z = __builtin_choose_expr (!__builtin_constant_p (y), 3, 4);

int
foo (int x)
{
  return __builtin_choose_expr (!__builtin_constant_p (x), 3, y++);
}

int
main ()
{
  if (y || z != 3 || foo (4) != 3)
    abort ();
  return 0;
}
