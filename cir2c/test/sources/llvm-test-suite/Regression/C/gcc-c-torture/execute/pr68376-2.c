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

/* PR rtl-optimization/68376 */

extern void abort (void);

__attribute__((noinline, noclone)) int
f1 (int x)
{
  return x < 0 ? ~x : x;
}

__attribute__((noinline, noclone)) int
f2 (int x)
{
  return x < 0 ? x : ~x;
}

__attribute__((noinline, noclone)) int
f3 (int x)
{
  return x <= 0 ? ~x : x;
}

__attribute__((noinline, noclone)) int
f4 (int x)
{
  return x <= 0 ? x : ~x;
}

__attribute__((noinline, noclone)) int
f5 (int x)
{
  return x >= 0 ? ~x : x;
}

__attribute__((noinline, noclone)) int
f6 (int x)
{
  return x >= 0 ? x : ~x;
}

__attribute__((noinline, noclone)) int
f7 (int x)
{
  return x > 0 ? ~x : x;
}

__attribute__((noinline, noclone)) int
f8 (int x)
{
  return x > 0 ? x : ~x;
}

int
main ()
{
  if (f1 (5) != 5 || f1 (-5) != 4 || f1 (0) != 0)
    abort ();
  if (f2 (5) != -6 || f2 (-5) != -5 || f2 (0) != -1)
    abort ();
  if (f3 (5) != 5 || f3 (-5) != 4 || f3 (0) != -1)
    abort ();
  if (f4 (5) != -6 || f4 (-5) != -5 || f4 (0) != 0)
    abort ();
  if (f5 (5) != -6 || f5 (-5) != -5 || f5 (0) != -1)
    abort ();
  if (f6 (5) != 5 || f6 (-5) != 4 || f6 (0) != 0)
    abort ();
  if (f7 (5) != -6 || f7 (-5) != -5 || f7 (0) != 0)
    abort ();
  if (f8 (5) != 5 || f8 (-5) != 4 || f8 (0) != -1)
    abort ();
  return 0;
}
