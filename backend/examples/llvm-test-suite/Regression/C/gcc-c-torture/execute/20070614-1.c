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

extern void abort (void);

_Complex v = 3.0 + 1.0iF;

void
foo (_Complex z, int *x)
{
  if (z != v)
    abort ();
}

_Complex bar (_Complex z) __attribute__ ((pure));
_Complex
bar (_Complex z)
{
  return v;
}

int
baz (void)
{
  int a, i;
  for (i = 0; i < 6; i++)
    foo (bar (1.0iF * i), &a);
  return 0;
}

int
main ()
{
  baz ();
  return 0;
}
