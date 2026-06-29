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

/* Verify that the CALL sideeffect isn't optimized away.  */
/* Contributed by Greg Parker  25 Jan 2005  <gparker@apple.com> */

#include <stdlib.h>
#include <stdio.h>

struct parse {
  char *next;
  char *end;
  int error;
};

int seterr(struct parse *p, int err)
{
  p->error = err;
  return 0;
}

void bracket_empty(struct parse *p)
{
  if (((p->next < p->end) && (*p->next++) == ']')  ||  seterr(p, 7)) { }
}

int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
  struct parse p;
  p.next = p.end = (char *)0x12345;

  p.error = 0;
  bracket_empty(&p);
  if (p.error != 7)
    abort ();

  return 0;
}
