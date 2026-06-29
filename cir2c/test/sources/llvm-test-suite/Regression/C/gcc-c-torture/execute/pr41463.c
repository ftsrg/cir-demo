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

#include <stdlib.h>

union tree_node;

struct tree_common
{
  int a;
  long b;
  long c;
  void *p;
  int d;
};

struct other_tree
{
  struct tree_common common;
  int arr[14];
};

struct tree_vec
{
  struct tree_common common;
  int length;
  union tree_node *a[1];
};

union tree_node
{
  struct other_tree othr;
  struct tree_vec vec;
};

union tree_node global;

union tree_node * __attribute__((noinline))
foo (union tree_node *p, int i)
{
  union tree_node **q;
  p->vec.a[i] = (union tree_node *) 0;
  q = &p->vec.a[1];
  *q = &global;
  return p->vec.a[i];
}

extern void abort (void);
extern void *malloc (__SIZE_TYPE__);

int
main()
{
  union tree_node *p = malloc (sizeof (union tree_node));
  if (foo (p, 1) != &global)
    abort ();
  return 0;
}
