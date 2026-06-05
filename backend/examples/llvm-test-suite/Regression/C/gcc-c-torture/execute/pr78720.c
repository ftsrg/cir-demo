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

/* PR tree-optimization/78720 */

__attribute__((noinline, noclone)) long int
foo (signed char x)
{
  return x < 0 ? 0x80000L : 0L;
}

__attribute__((noinline, noclone)) long int
bar (signed char x)
{
  return x < 0 ? 0x80L : 0L;
}

__attribute__((noinline, noclone)) long int
baz (signed char x)
{
  return x < 0 ? 0x20L : 0L;
}

int
main ()
{
  if (foo (-1) != 0x80000L || bar (-1) != 0x80L || baz (-1) != 0x20L
      || foo (0) != 0L || bar (0) != 0L || baz (0) != 0L
      || foo (31) != 0L || bar (31) != 0L || baz (31) != 0L)
    __builtin_abort ();
  return 0;
}
