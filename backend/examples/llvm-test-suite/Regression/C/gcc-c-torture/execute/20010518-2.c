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

/* Mis-aligned packed structures.  */

typedef struct
{
  char b0;
  char b1;
  char b2;
  char b3;
  char b4;
  char b5;
} __attribute__ ((packed)) b_struct;


typedef struct
{
  short a;
  long b;
  short c;
  short d;
  b_struct e;
} __attribute__ ((packed)) a_struct;


int
main(void)
{
  volatile a_struct *a;
  volatile a_struct b;

  a = &b;
  *a = (a_struct){1,2,3,4};
  a->e.b4 = 'c';

  if (a->a != 1 || a->b != 2 || a->c != 3 || a->d != 4 || a->e.b4 != 'c')
    abort ();

  exit (0);
}
