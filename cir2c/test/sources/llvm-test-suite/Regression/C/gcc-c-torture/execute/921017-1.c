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

/* { dg-skip-if "requires alloca" { ! alloca } { "-O0" } { "" } } */
/* { dg-require-effective-target trampolines } */

f(n)
{
  int a[n];
  int g(i)
    {
      return a[i];
    }
  a[1]=4711;
  return g(1);
}
main()
{
  if(f(2)!=4711)abort();

  exit(0);
}
