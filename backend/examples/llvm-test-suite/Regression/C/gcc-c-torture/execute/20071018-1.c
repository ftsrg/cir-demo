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

extern void abort(void);

struct foo {
  int rank;
  char *name;
};

struct mem {
  struct foo *x[4];
};

void __attribute__((noinline)) bar(struct foo **f)
{
  *f = __builtin_malloc(sizeof(struct foo));
}
struct foo * __attribute__((noinline, noclone)) foo(int rank)
{
  void *x = __builtin_malloc(sizeof(struct mem));
  struct mem *as = x;
  struct foo **upper = &as->x[rank * 8 - 5];
  *upper = 0;
  bar(upper);
  return *upper;
}

int main()
{
  if (foo(1) == 0)
    abort ();
  return 0;
}
