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

/* Assignments via pointers pointing to global variables were being killed
   by SSA-DCE.  Test contributed by Paul Brook <paul@nowt.org>  */

int glob;

void
fn2(int ** q)
{
  *q = &glob;
}

void test()
{
  int *p;

  fn2(&p);

  *p=42;
}

int main()
{
  test();
  if (glob != 42) abort();
  exit (0);
}
