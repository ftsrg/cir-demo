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

struct T
{
  int b : 1;
} t;

void __attribute__((noinline)) foo (int f)
{
  t.b = (f & 0x10) ? 1 : 0;
}

int main (void)
{
  foo (0x10);
  if (!t.b)
    abort ();
  return 0;
}
