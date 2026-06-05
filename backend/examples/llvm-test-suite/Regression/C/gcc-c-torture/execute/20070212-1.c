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

struct f
{
  int i;
};

int g(int i, int c, struct f *ff, int *p)
{
  int *t;
  if (c)
   t = &i;
  else
   t = &ff->i;
  *p = 0;
  return *t;
}

extern void abort(void);

int main()
{
  struct f f;
  f.i = 1;
  if (g(5, 0, &f, &f.i) != 0)
    abort ();
  return 0;
}
