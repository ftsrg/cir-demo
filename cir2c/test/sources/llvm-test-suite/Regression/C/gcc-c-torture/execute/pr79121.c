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

#if __SIZEOF_INT__ < 4
  __extension__ typedef __UINT32_TYPE__ uint32_t;
  __extension__ typedef __INT32_TYPE__ int32_t;
#else
  typedef unsigned uint32_t;
  typedef int int32_t;
#endif

extern void abort (void);

__attribute__ ((noinline, noclone)) unsigned long long f1 (int32_t x)
{
  return ((unsigned long long) x) << 4;
}

__attribute__ ((noinline, noclone)) long long f2 (uint32_t x)
{
  return ((long long) x) << 4;
}

__attribute__ ((noinline, noclone)) unsigned long long f3 (uint32_t x)
{
  return ((unsigned long long) x) << 4;
}

__attribute__ ((noinline, noclone)) long long f4 (int32_t x)
{
  return ((long long) x) << 4;
}

int main ()
{
  if (f1 (0xf0000000) != 0xffffffff00000000)
    abort ();
  if (f2 (0xf0000000) != 0xf00000000)
    abort ();
  if (f3 (0xf0000000) != 0xf00000000)
    abort ();
  if (f4 (0xf0000000) != 0xffffffff00000000)
    abort ();
  return 0;
}
