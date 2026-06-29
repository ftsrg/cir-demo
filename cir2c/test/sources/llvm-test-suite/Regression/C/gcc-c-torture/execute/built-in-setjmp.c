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
/* { dg-require-effective-target alloca } */

extern int strcmp(const char *, const char *);
extern char *strcpy(char *, const char *);
extern void abort(void);
extern void exit(int);

void *buf[20];

void __attribute__((noinline))
sub2 (void)
{
  __builtin_longjmp (buf, 1);
}

int
main ()
{
  char *p = (char *) __builtin_alloca (20);

  strcpy (p, "test");

  if (__builtin_setjmp (buf))
    {
      if (strcmp (p, "test") != 0)
	abort ();

      exit (0);
    }

  {
    int *q = (int *) __builtin_alloca (p[2] * sizeof (int));
    int i;

    for (i = 0; i < p[2]; i++)
      q[i] = 0;

    while (1)
      sub2 ();
  }
}
