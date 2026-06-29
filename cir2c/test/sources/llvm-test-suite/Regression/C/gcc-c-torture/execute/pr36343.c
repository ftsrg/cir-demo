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

void __attribute__((noinline))
bar (int **p)
{
  float *q = (float *)p;
  *q = 0.0;
}

float __attribute__((noinline))
foo (int b)
{
  int *i = 0;
  float f = 1.0;
  int **p;
  if (b)
    p = &i;
  else
    p = (int **)&f;
  bar (p);
  if (b)
    return **p;
  return f;
}

int main()
{
  if (foo(0) != 0.0)
    abort ();
  return 0;
}
