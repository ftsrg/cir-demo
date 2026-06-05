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

/* PR target/60062 */

int a;

static void
foo (const char *p1, int p2)
{
  if (__builtin_strcmp (p1, "hello") != 0)
    __builtin_abort ();
}

static void
bar (const char *p1)
{
  if (__builtin_strcmp (p1, "hello") != 0)
    __builtin_abort ();
}

__attribute__((optimize (0))) int
main ()
{
  foo ("hello", a);
  bar ("hello");
  return 0;
}
