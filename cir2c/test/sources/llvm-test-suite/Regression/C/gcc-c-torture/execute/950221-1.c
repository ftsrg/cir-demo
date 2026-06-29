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

/* { dg-add-options stack_size } */

struct parsefile
{
  long fd;
  char *buf;
};
struct parsefile basepf;
struct parsefile *parsefile = &basepf;
#ifdef STACK_SIZE
int filler[STACK_SIZE / (2*sizeof(int))];
#else
int filler[0x3000];
#endif
int el;

char *
g1 (a, b)
     int a;
     int *b;
{
}

g2 (a)
     long a;
{
  if (a != 0xdeadbeefL)
    abort ();
  exit (0);
}

f ()
{
  register char *p, *q;
  register int i;
  register int something;

  if (parsefile->fd == 0L && el)
    {
      const char *rl_cp;
      int len;
      rl_cp = g1 (el, &len);
      strcpy (p, rl_cp);
    }
  else
    {
    alabel:
      i = g2 (parsefile->fd);
    }
}

main ()
{
  el = 0;
  parsefile->fd = 0xdeadbeefL;
  f ();
}
