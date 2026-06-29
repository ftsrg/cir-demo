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

/* { dg-add-options stack_size } */

#if defined (STACK_SIZE)
#define DUMMY_SIZE 9
#else
#define DUMMY_SIZE 399999
#endif

double g()
{
  return 1.0;
}

f()
{
  char dummy[DUMMY_SIZE];
  double f1, f2, f3;
  f1 = g();
  f2 = g();
  f3 = g();
  return f1 + f2 + f3;
}

main()
{
  if (f() != 3.0)
    abort();
  exit(0);
}
