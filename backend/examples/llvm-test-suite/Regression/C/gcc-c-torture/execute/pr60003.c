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

/* PR tree-optimization/60003 */
/* { dg-require-effective-target indirect_jumps } */

extern void abort (void);

unsigned long long jmp_buf[5];

__attribute__((noinline, noclone)) void
baz (void)
{
  __builtin_longjmp (&jmp_buf, 1);
}

void
bar (void)
{
  baz ();
}

__attribute__((noinline, noclone)) int
foo (int x)
{
  int a = 0;

  if (__builtin_setjmp (&jmp_buf) == 0)
    {
      while (1)
	{
	  a = 1;
	  bar ();  /* OK if baz () instead */
	}
    }
  else
    {
      if (a == 0)
	return 0;
      else
	return x;
    }
}

int
main ()
{
  if (foo (1) == 0)
    abort ();

  return 0;
}
