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

/* Verify that calls to fprintf don't get eliminated even if their
   result on success can be computed at compile time (they can fail).
   The calls can still be transformed into those of other functions.
   { dg-skip-if "requires io" { freestanding } } */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
  char *tmpfname = tmpnam (0);
  FILE *f = fopen (tmpfname, "w");
  if (!f)
    {
      perror ("fopen for writing");
      return 1;
    }

  fprintf (f, "1");
  fprintf (f, "%c", '2');
  fprintf (f, "%c%c", '3', '4');
  fprintf (f, "%s", "5");
  fprintf (f, "%s%s", "6", "7");
  fprintf (f, "%i", 8);
  fprintf (f, "%.1s\n", "9x");
  fclose (f);

  f = fopen (tmpfname, "r");
  if (!f)
    {
      perror ("fopen for reading");
      remove (tmpfname);
      return 1;
    }

  char buf[12] = "";
  if (1 != fscanf (f, "%s", buf))
    {
      perror ("fscanf");
      fclose (f);
      remove (tmpfname);
      return 1;
    }

  fclose (f);
  remove (tmpfname);

  if (strcmp (buf, "123456789"))
    abort ();

  return 0;
}
