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

/* { dg-skip-if "requires alloca" { ! alloca } { "-O0" } { "" } } */
/* Verify that alloca storage is sufficiently aligned.  */
/* ??? May fail if BIGGEST_ALIGNMENT > STACK_BOUNDARY.  Which, I guess
   can only happen on !STRICT_ALIGNMENT targets.  */

typedef __SIZE_TYPE__ size_t;

struct dummy { int x __attribute__((aligned)); };
#define BIGGEST_ALIGNMENT __alignof__(struct dummy)

_Bool foo(void)
{
  char *p = __builtin_alloca(32);
  return ((size_t)p & (BIGGEST_ALIGNMENT - 1)) == 0;
}

int main()
{
  if (!foo())
    abort ();
  return 0;
}
