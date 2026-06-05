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

static int a[199];

static void
foo ()
{
  int i;
  for (i = 198; i >= 0; i--)
    a[i] = i;
}

int
main ()
{
  int i;
  foo ();
  for (i = 0; i < 199; i++)
    if (a[i] != i)
      abort ();
  return 0;
}
