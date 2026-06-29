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

extern void abort (void);

long long
f (long long a, long long b)
{
  return ((a + b) << 32) >> 32;
}

long long a = 0x1234567876543210LL;
long long b = 0x2345678765432101LL;
long long c = ((0x1234567876543210LL + 0x2345678765432101LL) << 32) >> 32;

int
main ()
{
  if (f (a, b) != c)
    abort ();
  return 0;
}
