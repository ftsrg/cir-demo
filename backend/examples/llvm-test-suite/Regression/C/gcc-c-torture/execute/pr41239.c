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

/* PR rtl-optimization/41239 */

struct S
{
  short nargs;
  unsigned long arg[2];
};

extern void abort (void);
extern void exit (int);
extern char fn1 (int, const char *, int, const char *, const char *);
extern void fn2 (int, ...);
extern int fn3 (int);
extern int fn4 (const char *fmt, ...) __attribute__ ((format (printf, 1, 2)));

unsigned long
test (struct S *x)
{
  signed int arg1 = x->arg[0];
  long int arg2 = x->arg[1];

  if (arg2 == 0)
    (fn1 (20, "foo", 924, __func__, ((void *) 0))
     ? (fn2 (fn3 (0x2040082), fn4 ("division by zero")))
     : (void) 0);

  return (long int) arg1 / arg2;
}

int
main (void)
{
  struct S s = { 2, { 5, 0 } };
  test (&s);
  abort ();
}

__attribute__((noinline)) char
fn1 (int x, const char *y, int z, const char *w, const char *v)
{
  asm volatile ("" : : "r" (w), "r" (v) : "memory");
  asm volatile ("" : "+r" (x) : "r" (y), "r" (z) : "memory");
  return x;
}

__attribute__((noinline)) int
fn3 (int x)
{
  asm volatile ("" : "+r" (x) : : "memory");
  return x;
}

__attribute__((noinline)) int
fn4 (const char *x, ...)
{
  asm volatile ("" : "+r" (x) : : "memory");
  return *x;
}

__attribute__((noinline)) void
fn2 (int x, ...)
{
  asm volatile ("" : "+r" (x) : : "memory");
  if (x)
    /* Could be a longjmp or throw too.  */
    exit (0);
}
