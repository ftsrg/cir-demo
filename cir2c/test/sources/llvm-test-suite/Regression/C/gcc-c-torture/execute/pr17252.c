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

/* PR 17252.  When a char * pointer P takes its own address, storing
   into *P changes P itself.  */

char *a;

main ()
{
  /* Make 'a' point to itself.  */
  a = (char *)&a;

  /* Change what 'a' is pointing to.  */
  a[0]++;

  /* If a's memory tag does not contain 'a' in its alias set, we will
     think that this predicate is superfluous and change it to
     'if (1)'.  */
  if (a == (char *)&a)
    abort ();

  return 0;
}
