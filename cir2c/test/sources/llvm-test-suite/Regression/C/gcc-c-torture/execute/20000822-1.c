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

/* { dg-require-effective-target trampolines } */

int f0(int (*fn)(int *), int *p)
{
  return (*fn) (p);
}

int f1(void)
{
  int i = 0;

  int f2(int *p)
  {
    i = 1;
    return *p + 1;
  }

  return f0(f2, &i);
}

int main()
{
  if (f1() != 2)
    abort ();

  return 0;
}
