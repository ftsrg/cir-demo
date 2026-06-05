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

/* { dg-require-effective-target int32plus } */
struct big
{
  int data[1000000];
};

struct small
{
  int data[10];
};

union both
{
  struct big big;
  struct small small;
};

extern void *calloc (__SIZE_TYPE__, __SIZE_TYPE__);
extern void free (void *);

static int __attribute__((noinline))
foo (int fail, union both *agg)
{
  int r;
  if (fail)
    r = agg->big.data[999999];
  else
    r = agg->small.data[0];
  return r;
}

int main (int argc, char *argv[])
{
  union both *agg = calloc (1, sizeof (struct small));
  int r;

  r = foo ((argc > 2000), agg);

  free (agg);
  return r;
}
