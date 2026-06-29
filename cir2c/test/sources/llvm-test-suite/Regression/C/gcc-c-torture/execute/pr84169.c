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

/* PR rtl-optimization/84169 */

#ifdef __SIZEOF_INT128__
typedef unsigned __int128 T;
#else
typedef unsigned long long T;
#endif

T b;

static __attribute__ ((noipa)) T
foo (T c, T d, T e, T f, T g, T h)
{
  __builtin_mul_overflow ((unsigned char) h, -16, &h);
  return b + h;
}

int
main ()
{
  T x = foo (0, 0, 0, 0, 0, 4);
  if (x != -64)
    __builtin_abort ();
  return 0;
}
