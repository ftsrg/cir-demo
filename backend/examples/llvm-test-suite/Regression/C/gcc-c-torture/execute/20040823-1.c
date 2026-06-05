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

/* Ensure that we create VUSE operands also for noreturn functions.  */

#include <stdlib.h>
#include <string.h>

int *pwarn;

void bla (void) __attribute__ ((noreturn));

void bla (void)
{
  if (!*pwarn)
    abort ();

  exit (0);
}

int main (void)
{
  int warn;

  memset (&warn, 0, sizeof (warn));

  pwarn = &warn;

  warn = 1;

  bla ();
}
