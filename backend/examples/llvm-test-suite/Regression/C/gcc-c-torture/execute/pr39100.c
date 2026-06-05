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

/* Bad PTA results (incorrect store handling) was causing us to delete
   *na = 0 store.  */

typedef struct E
{
  int p;
  struct E *n;
} *EP;

typedef struct C
{
  EP x;
  short cn, cp;
} *CP;

__attribute__((noinline)) CP
foo (CP h, EP x)
{
  EP pl = 0, *pa = &pl;
  EP nl = 0, *na = &nl;
  EP n;

  while (x)
    {
      n = x->n;
      if ((x->p & 1) == 1)
        {
          h->cp++;
          *pa = x;
          pa = &((*pa)->n);
        }
      else
        {
          h->cn++;
          *na = x;
          na = &((*na)->n);
        }
      x = n;
    }
  *pa = nl;
  *na = 0;
  h->x = pl;
  return h;
}

int
main (void)
{
  struct C c = { 0, 0, 0 };
  struct E e[2] = { { 0, &e[1] }, { 1, 0 } };
  EP p;

  foo (&c, &e[0]);
  if (c.cn != 1 || c.cp != 1)
    __builtin_abort ();
  if (c.x != &e[1])
    __builtin_abort ();
  if (e[1].n != &e[0])
    __builtin_abort ();
  if (e[0].n)
    __builtin_abort ();
  return 0;
}
