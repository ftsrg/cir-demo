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

extern void abort (void);

__attribute ((noinline)) void
broken_longjmp (void *p)
{
  void *buf[32];
  __builtin_memcpy (buf, p, 5 * sizeof (void*));
  __builtin_memset (p, 0, 5 * sizeof (void*));
  /* Corrupts stack pointer...  */
  __builtin_longjmp (buf, 1);
}

volatile int x = 0;
char *volatile p;
char *volatile q;

int
main ()
{
  void *buf[5];
  p = __builtin_alloca (x);
  q = __builtin_alloca (x);
  if (!__builtin_setjmp (buf))
    broken_longjmp (buf);

  /* Compute expected next alloca offset - some targets don't align properly
     and allocate too much.  */
  p = q + (q - p);

  /* Fails if stack pointer corrupted.  */
  if (p != __builtin_alloca (x))
    abort ();

  return 0;
}
