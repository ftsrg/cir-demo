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

/* { dg-require-effective-target alloca } */

/* This program tests a data flow bug that would cause constant propagation
   to propagate constants through function calls.  */

foo (int *p)
{
  *p = 10;
}

main()
{
  int *ptr = alloca (sizeof (int));
  *ptr = 5;
  foo (ptr);
  if (*ptr == 5)
    abort ();
  exit (0);
}
