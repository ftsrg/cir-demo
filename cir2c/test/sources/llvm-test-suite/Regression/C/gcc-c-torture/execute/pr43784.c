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

struct s {
  unsigned char a[256];
};
union u {
  struct { struct s b; int c; } d;
  struct { int c; struct s b; } e;
};

static union u v;
static struct s *p = &v.d.b;
static struct s *q = &v.e.b;

static struct s __attribute__((noinline)) rp(void)
{
  return *p;
}

static void qp(void)
{
  *q = rp();
}

int main()
{
  int i;
  for (i = 0; i < 256; i++)
    p->a[i] = i;
  qp();
  for (i = 0; i < 256; i++)
    if (q->a[i] != i)
      __builtin_abort();
  return 0;
}
