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

void abort (void);

int j;

void bla (int *r)
{
  int *p, *q;

  p = q = r;
  if (!p)
    p = &j;

  if (p != q)
    j = 1;
}

int main (void)
{
  bla (0);
  if (!j)
    abort ();
  return 0;
}
