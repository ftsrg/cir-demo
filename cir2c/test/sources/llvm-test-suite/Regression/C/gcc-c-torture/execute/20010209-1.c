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

/* { dg-require-effective-target alloca } */
int b;
int foo (void)
{
  int x[b];
  int bar (int t[b])
  {
    int i;
    for (i = 0; i < b; i++)
      t[i] = i + (i > 0 ? t[i-1] : 0);
    return t[b-1];
  }
  return bar (x);
}

int main ()
{
  b = 6;
  if (foo () != 15)
    abort ();
  exit (0);
}
