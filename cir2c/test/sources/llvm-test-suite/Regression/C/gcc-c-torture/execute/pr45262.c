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

/* PR middle-end/45262 */

/* { dg-require-effective-target int32plus } */

extern void abort (void);

int
foo (unsigned int x)
{
  return ((int) x < 0) || ((int) (-x) < 0);
}

int
bar (unsigned int x)
{
  return x >> 31 || (-x) >> 31;
}

int
main (void)
{
  if (foo (1) != 1)
    abort ();
  if (foo (0) != 0)
    abort ();
  if (foo (-1) != 1)
    abort ();
  if (bar (1) != 1)
    abort ();
  if (bar (0) != 0)
    abort ();
  if (bar (-1) != 1)
    abort ();
  return 0;
}
