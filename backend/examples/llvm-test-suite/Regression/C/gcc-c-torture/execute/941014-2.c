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

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  unsigned short a;
  unsigned short b;
} foo_t;

void a1 (unsigned long offset) {}

volatile foo_t *
f ()
{
  volatile foo_t *foo_p = (volatile foo_t *)malloc (sizeof (foo_t));

  a1((unsigned long)foo_p-30);
  if (foo_p->a & 0xf000)
    printf("%d\n", foo_p->a);
  foo_p->b = 0x0100;
  a1 ((unsigned long)foo_p + 2);
  a1 ((unsigned long)foo_p - 30);
  return foo_p;
}

main ()
{
  volatile foo_t *foo_p;

  foo_p = f ();
  if (foo_p->b != 0x0100)
    abort ();
  exit (0);
}
