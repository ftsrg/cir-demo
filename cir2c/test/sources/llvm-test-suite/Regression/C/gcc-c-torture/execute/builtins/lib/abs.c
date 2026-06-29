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

extern int inside_main;
extern void abort (void);
#ifdef __OPTIMIZE__
#define ABORT_INSIDE_MAIN do { if (inside_main) abort (); } while (0)
#else
#define ABORT_INSIDE_MAIN do { } while (0)
#endif

typedef __INTMAX_TYPE__ intmax_t;

__attribute__ ((__noinline__))
int
abs (int x)
{
  ABORT_INSIDE_MAIN;
  return x < 0 ? -x : x;
}

__attribute__ ((__noinline__))
long
labs (long x)
{
  ABORT_INSIDE_MAIN;
  return x < 0 ? -x : x;
}

__attribute__ ((__noinline__))
long long
llabs (long long x)
{
  ABORT_INSIDE_MAIN;
  return x < 0 ? -x : x;
}

__attribute__ ((__noinline__))
intmax_t
imaxabs (intmax_t x)
{
  ABORT_INSIDE_MAIN;
  return x < 0 ? -x : x;
}
