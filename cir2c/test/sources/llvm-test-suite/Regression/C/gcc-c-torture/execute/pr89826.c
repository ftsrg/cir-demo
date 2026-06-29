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

typedef unsigned int u32;
typedef unsigned long long u64;
u64 a;
u32 b;

u64
foo (u32 d)
{
  a -= d ? 0 : ~a;
  return a + b;
}

int
main (void)
{
  u64 x = foo (2);
  if (x != 0)
    __builtin_abort();
  return 0;
}
