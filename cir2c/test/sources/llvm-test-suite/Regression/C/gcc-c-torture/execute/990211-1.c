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

/* Copyright (C) 1999 Free Software Foundation, Inc.
  Contributed by Nathan Sidwell 20 Jan 1999 <nathan@acm.org> */

/* check range combining boolean operations work */

extern void abort();

#define N 77

void func(int i)
{
  /* fold-const does some clever things with range tests. Make sure
     we get (some of) them right */

  /* these must fail, regardless of the value of i */
  if ((i < 0) && (i >= 0))
    abort();
  if ((i > 0) && (i <= 0))
    abort();
  if ((i >= 0) && (i < 0))
    abort();
  if ((i <= 0) && (i > 0))
    abort();

  if ((i < N) && (i >= N))
    abort();
  if ((i > N) && (i <= N))
    abort();
  if ((i >= N) && (i < N))
    abort();
  if ((i <= N) && (i > N))
    abort();

  /* these must pass, regardless of the value of i */
  if (! ((i < 0) || (i >= 0)))
    abort();
  if (! ((i > 0) || (i <= 0)))
    abort();
  if (! ((i >= 0) || (i < 0)))
    abort();
  if (! ((i <= 0) || (i > 0)))
    abort();

  if (! ((i < N) || (i >= N)))
    abort();
  if (! ((i > N) || (i <= N)))
    abort();
  if (! ((i >= N) || (i < N)))
    abort();
  if (! ((i <= N) || (i > N)))
    abort();

  return;
}

int main()
{
  func(0);
  func(1);
  return 0;
}
