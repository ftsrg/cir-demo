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


int * foo (int *x, int b)
{

  *(x++) = 55;
  if (b)
    *(x++) = b;

  return x;
}

main()
{
  int a[5];

  memset (a, 1, sizeof (a));

  if (foo(a, 0) - a != 1 || a[0] != 55 || a[1] != a[4])
    abort();

  memset (a, 1, sizeof (a));

  if (foo(a, 2) - a != 2 || a[0] != 55 || a[1] != 2)
    abort();

  exit (0);
}
