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

/* Distilled from try_pre_increment in flow.c.  If-conversion inserted
   new instructions at the wrong place on ppc.  */

int foo(int a)
{
  int x;
  x = 0;
  if (a > 0) x = 1;
  if (a < 0) x = 1;
  return x;
}

int main()
{
  if (foo(1) != 1)
    abort();
  return 0;
}
