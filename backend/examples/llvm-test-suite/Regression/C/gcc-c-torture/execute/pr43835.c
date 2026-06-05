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

struct PMC {
    unsigned flags;
};

typedef struct Pcc_cell
{
    struct PMC *p;
    long bla;
    long type;
} Pcc_cell;

extern void abort ();
extern void Parrot_gc_mark_PMC_alive_fun(int * interp, struct PMC *pmc)
     __attribute__((noinline));

void Parrot_gc_mark_PMC_alive_fun (int * interp, struct PMC *pmc)
{
  abort ();
}

static void mark_cell(int * interp, Pcc_cell *c)
        __attribute__((__nonnull__(1)))
        __attribute__((__nonnull__(2)))
        __attribute__((noinline));

static void
mark_cell(int * interp, Pcc_cell *c)
{
            if (c->type == 4 && c->p
		&& !(c->p->flags & (1<<18)))
	      Parrot_gc_mark_PMC_alive_fun(interp, c->p);
}

void foo(int * interp, Pcc_cell *c);

void
foo(int * interp, Pcc_cell *c)
{
  mark_cell(interp, c);
}

int main()
{
  int i;
  Pcc_cell c;
  c.p = 0;
  c.bla = 42;
  c.type = 4;
  foo (&i, &c);
  return 0;
}
