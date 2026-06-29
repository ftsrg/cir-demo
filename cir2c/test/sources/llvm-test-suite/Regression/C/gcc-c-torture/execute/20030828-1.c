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

const int *p;

int bar (void)
{
  return *p + 1;
}

main ()
{
  /* Variable 'i' is never used but it's aliased to a global pointer.  The
     alias analyzer was not considering that 'i' may be used in the call to
     bar().  */
  const int i = 5;
  p = &i;
  if (bar() != 6)
    abort ();
  exit (0);
}
