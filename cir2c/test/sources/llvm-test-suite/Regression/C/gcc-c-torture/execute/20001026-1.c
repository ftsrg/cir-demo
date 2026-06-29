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

typedef struct {
  long r[(19 + sizeof (long))/(sizeof (long))];
} realvaluetype;

typedef void *tree;

static realvaluetype
real_value_from_int_cst (tree x, tree y)
{
  realvaluetype r;
  int i;
  for (i = 0; i < sizeof(r.r)/sizeof(long); ++i)
    r.r[i] = -1;
  return r;
}

struct brfic_args
{
  tree type;
  tree i;
  realvaluetype d;
};

static void
build_real_from_int_cst_1 (data)
     void * data;
{
  struct brfic_args *args = (struct brfic_args *) data;
  args->d = real_value_from_int_cst (args->type, args->i);
}

int main()
{
  struct brfic_args args;

  __builtin_memset (&args, 0, sizeof(args));
  build_real_from_int_cst_1 (&args);

  if (args.d.r[0] == 0)
    abort ();
  return 0;
}
