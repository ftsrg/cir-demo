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

/* PR middle-end/71626 */

typedef __INTPTR_TYPE__ V __attribute__((__vector_size__(sizeof (__INTPTR_TYPE__))));

__attribute__((noinline, noclone)) V
foo ()
{
  V v = { (__INTPTR_TYPE__) foo };
  return v;
}

int
main ()
{
  V v = foo ();
  if (v[0] != (__INTPTR_TYPE__) foo)
    __builtin_abort ();
  return 0;
}
