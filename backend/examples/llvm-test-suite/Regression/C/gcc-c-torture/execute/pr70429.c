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

/* PR rtl-optimization/70429 */

__attribute__((noinline, noclone)) int
foo (int a)
{
  return (int) (0x14ff6e2207db5d1fLL >> a) >> 4;
}

int
main ()
{
  if (sizeof (int) != 4 || sizeof (long long) != 8 || __CHAR_BIT__ != 8)
    return 0;
  if (foo (1) != 0x3edae8 || foo (2) != -132158092)
    __builtin_abort ();
  return 0;
}
