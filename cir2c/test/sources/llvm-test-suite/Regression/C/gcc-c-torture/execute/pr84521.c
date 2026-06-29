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

/* { dg-require-effective-target indirect_jumps } */
/* { dg-additional-options "-fomit-frame-pointer -fno-inline" }  */

extern void abort (void);

void
broken_longjmp (void *p)
{
  __builtin_longjmp (p, 1);
}

volatile int x = 256;
void *volatile p = (void*)&x;
void *volatile p1;

void
test (void)
{
  void *buf[5];
  void *volatile q = p;

  if (!__builtin_setjmp (buf))
    broken_longjmp (buf);

  /* Fails if stack pointer corrupted.  */
  if (p != q)
    abort ();
}

void
test2 (void)
{
  void *volatile q = p;
  p1 = __builtin_alloca (x);
  test ();

  /* Fails if frame pointer corrupted.  */
  if (p != q)
    abort ();
}

int
main (void)
{
  void *volatile q = p;
  test ();
  test2 ();
  /* Fails if stack pointer corrupted.  */
  if (p != q)
    abort ();

  return 0;
}
