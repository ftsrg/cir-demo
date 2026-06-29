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

/* PR target/49281 */

extern void abort (void);

__attribute__((noinline, noclone)) int
foo (int x)
{
  return (x << 2) | 4;
}

__attribute__((noinline, noclone)) int
bar (int x)
{
  return (x << 2) | 3;
}

int
main ()
{
  if (foo (43) != 172 || foo (1) != 4 || foo (2) != 12)
    abort ();
  if (bar (43) != 175 || bar (1) != 7 || bar (2) != 11)
    abort ();
  return 0;
}
