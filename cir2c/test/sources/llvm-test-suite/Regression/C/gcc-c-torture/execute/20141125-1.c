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

int f(long long a) __attribute__((noinline,noclone));
int f(long long a)
{
  if (a & 0x3ffffffffffffffull)
    return 1;
  return 1024;
}

int main(void)
{
  if(f(0x48375d8000000000ull) != 1)
    __builtin_abort ();
  if (f(0xfc00000000000000ull) != 1024)
    __builtin_abort ();
  return 0;
}
