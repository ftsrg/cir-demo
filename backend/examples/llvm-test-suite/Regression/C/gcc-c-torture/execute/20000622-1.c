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

long foo(long a, long b, long c)
{
  if (a != 12 || b != 1 || c != 11)
    abort();
  return 0;
}
long bar (long a, long b)
{
  return b;
}
void baz (long a, long b, void *c)
{
  long d;
  d = (long)c;
  foo(d, bar (a, 1), b);
}
int main()
{
  baz (10, 11, (void *)12);
  exit(0);
}
