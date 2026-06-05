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

#define NULL 0

struct stuff
{
    int a;
    int b;
    int c;
    int d;
    int e;
    char *f;
    int g;
};

void __attribute__ ((noinline))
bar (struct stuff *x)
{
  if (x->g != 2)
    __builtin_abort ();
}

int
main (int argc, char** argv)
{
  struct stuff x = {0, 0, 0, 0, 0, NULL, 0};
  x.a = 100;
  x.d = 100;
  x.g = 2;
  /* Struct should now look like {100, 0, 0, 100, 0, 0, 0, 2}.  */
  bar (&x);
  return 0;
}
