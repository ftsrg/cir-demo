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

/* { dg-require-effective-target mmap } */
/* { dg-skip-if "the executable is at the same position the test tries to remap" { m68k-*-linux* } } */

#include <limits.h>

#include <sys/types.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#ifndef MAP_ANON
#ifdef MAP_ANONYMOUS
#define MAP_ANON MAP_ANONYMOUS
#else
#define MAP_ANON MAP_FILE
#endif
#endif
#ifndef MAP_FILE
#define MAP_FILE 0
#endif
#ifndef MAP_FIXED
#define MAP_FIXED 0
#endif

#define MAP_START (void *)0x7fff8000
#define MAP_LEN 0x10000

#define OFFSET (MAP_LEN/2 - 2 * sizeof (char));

f (int s, char *p)
{
  int i;
  for (i = s; &p[i] < &p[40] && i >= 0; i++)
    {
      p[i] = -2;
    }
}

main ()
{
#ifdef MAP_ANON
  char *p;
  int dev_zero;

  dev_zero = open ("/dev/zero", O_RDONLY);
  /* -1 is OK when we have MAP_ANON; else mmap will flag an error.  */
  if (INT_MAX != 0x7fffffffL || sizeof (char *) != sizeof (int))
    exit (0);
  p = mmap (MAP_START, MAP_LEN, PROT_READ|PROT_WRITE,
	    MAP_ANON|MAP_FIXED|MAP_PRIVATE, dev_zero, 0);
  if (p != (char *)-1)
    {
      p += OFFSET;
      p[39] = 0;
      f (0, p);
      if (p[39] != (char)-2)
	abort ();
      p[39] = 0;
      f (-1, p);
      if (p[39] != 0)
	abort ();
    }
#endif
  exit (0);
}
