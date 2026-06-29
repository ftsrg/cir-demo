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

/* PR tree-optimization/86844 */

__attribute__((noipa)) void
foo (int *p)
{
  *p = 0;
  *((char *)p + 3) = 1;
  *((char *)p + 1) = 2;
  *((char *)p + 2) = *((char *)p + 6);
}

int
main ()
{
  int a[2] = { -1, 0 };
  if (sizeof (int) != 4)
    return 0;
  ((char *)a)[6] = 3;
  foo (a);
  if (((char *)a)[0] != 0 || ((char *)a)[1] != 2
      || ((char *)a)[2] != 3 || ((char *)a)[3] != 1)
    __builtin_abort ();
  return 0;
}
