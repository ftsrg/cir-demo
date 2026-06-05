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

/* PR tree-optimization/19060 */

void abort (void);

static
long long min ()
{
  return -__LONG_LONG_MAX__ - 1;
}

void
foo (long long j)
{
  if (j > 10 || j < min ())
    abort ();
}

int
main (void)
{
  foo (10);
  return 0;
}
