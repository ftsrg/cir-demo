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

/* PR target/30185 */

extern void abort (void);

typedef struct S { char a; long long b; } S;

S
foo (S x, S y)
{
  S z;
  z.b = x.b / y.b;
  return z;
}

int
main (void)
{
  S a, b;
  a.b = 32LL;
  b.b = 4LL;
  if (foo (a, b).b != 8LL)
    abort ();
  a.b = -8LL;
  b.b = -2LL;
  if (foo (a, b).b != 4LL)
    abort ();
  return 0;
}
