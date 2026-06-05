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

/* { dg-add-options ieee } */
/* { dg-skip-if "No Inf/NaN support" { spu-*-* } } */

extern void abort (void);

static inline int __attribute__((always_inline)) testf (float b)
{
  float c = 1.01f * b;

  return __builtin_isinff (c);
}

static inline int __attribute__((always_inline)) test (double b)
{
  double c = 1.01 * b;

  return __builtin_isinf (c);
}

static inline int __attribute__((always_inline)) testl (long double b)
{
  long double c = 1.01L * b;

  return __builtin_isinfl (c);
}

int main()
{
  if (testf (__FLT_MAX__) < 1)
    abort ();

  if (test (__DBL_MAX__) < 1)
    abort ();

  if (testl (__LDBL_MAX__) < 1)
    abort ();

  return 0;
}
