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

/* PR middle-end/37780.  */

#define VAL (8 * sizeof (int))

int __attribute__ ((noinline, noclone))
fooctz (int i)
{
  return (i == 0) ? VAL : __builtin_ctz (i);
}

int __attribute__ ((noinline, noclone))
fooctz2 (int i)
{
  return (i != 0) ? __builtin_ctz (i) : VAL;
}

unsigned int __attribute__ ((noinline, noclone))
fooctz3 (unsigned int i)
{
  return (i > 0) ?  __builtin_ctz (i) : VAL;
}

int __attribute__ ((noinline, noclone))
fooclz (int i)
{
  return (i == 0) ? VAL : __builtin_clz (i);
}

int __attribute__ ((noinline, noclone))
fooclz2 (int i)
{
  return (i != 0) ? __builtin_clz (i) : VAL;
}

unsigned int __attribute__ ((noinline, noclone))
fooclz3 (unsigned int i)
{
  return (i > 0) ? __builtin_clz (i) : VAL;
}

int
main (void)
{
  if (fooctz (0) != VAL || fooctz2 (0) != VAL || fooctz3 (0) != VAL
      || fooclz (0) != VAL || fooclz2 (0) != VAL || fooclz3 (0) != VAL)
    __builtin_abort ();

  return 0;
}