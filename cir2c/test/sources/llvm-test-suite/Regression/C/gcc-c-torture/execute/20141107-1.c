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

#define bool _Bool

bool f(int a, bool c) __attribute__((noinline));
bool f(int a, bool c)
{
  if (!a)
    c = !c;
  return c;
}

void checkf(int a, bool b)
{
  bool c = f(a, b);
  char d;
  __builtin_memcpy (&d, &c, 1);
  if ( d != (a==0)^b)
    __builtin_abort();
}

int main(void)
{
  checkf(0, 0);
  checkf(0, 1);
  checkf(1, 1);
  checkf(1, 0);
  return 0;
}
