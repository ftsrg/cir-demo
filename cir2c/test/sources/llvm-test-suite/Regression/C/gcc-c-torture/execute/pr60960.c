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

/* PR tree-optimization/60960 */

typedef unsigned char v4qi __attribute__ ((vector_size (4)));

__attribute__((noinline, noclone)) v4qi
f1 (v4qi v)
{
  return v / 2;
}

__attribute__((noinline, noclone)) v4qi
f2 (v4qi v)
{
  return v / (v4qi) { 2, 2, 2, 2 };
}

__attribute__((noinline, noclone)) v4qi
f3 (v4qi x, v4qi y)
{
  return x / y;
}

int
main ()
{
  v4qi x = { 5, 5, 5, 5 };
  v4qi y = { 2, 2, 2, 2 };
  v4qi z = f1 (x);
  if (__builtin_memcmp (&y, &z, sizeof (y)) != 0)
    __builtin_abort ();
  z = f2 (x);
  if (__builtin_memcmp (&y, &z, sizeof (y)) != 0)
    __builtin_abort ();
  z = f3 (x, y);
  if (__builtin_memcmp (&y, &z, sizeof (y)) != 0)
    __builtin_abort ();
  return 0;
}
