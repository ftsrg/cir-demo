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

int test1 (int b, int c)
{
  char x;
  if (b)
    return x / c;
  else
    return 1;
}
int test2 (int b, int c)
{
  int x;
  if (b)
    return x * c;
  else
    return 1;
}
int test3 (int b, int c)
{
  int x;
  if (b)
    return x % c;
  else
    return 1;
}
int test4 (int b, int c)
{
  char x;
  if (b)
    return x == c;
  else
    return 1;
}

extern void abort (void);
int main()
{
  if (test1(1, 1000) != 0)
    abort ();
  if (test2(1, 0) != 0)
    abort ();
  if (test3(1, 1) != 0)
    abort ();
  if (test4(1, 1000) != 0)
    abort ();
  return 0;
}
