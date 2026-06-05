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

extern void abort (void);
extern void exit (int);
struct s { unsigned char a[256]; };
union u { struct { struct s b; int c; } d; struct { int c; struct s b; } e; };
static union u v;
static union u v0;
static struct s *p = &v.d.b;
static struct s *q = &v.e.b;

static inline struct s rp (void) { return *p; }
static inline struct s rq (void) { return *q; }
static void pq (void) { *p = rq(); }
static void qp (void) { *q = rp(); }

static void
init (struct s *sp)
{
  int i;
  for (i = 0; i < 256; i++)
    sp->a[i] = i;
}

static void
check (struct s *sp)
{
  int i;
  for (i = 0; i < 256; i++)
    if (sp->a[i] != i)
      abort ();
}

void
main_test (void)
{
  v = v0;
  init (p);
  qp ();
  check (q);
  v = v0;
  init (q);
  pq ();
  check (p);
  exit (0);
}
