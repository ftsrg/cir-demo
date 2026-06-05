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

/* PR middle-end/40057 */

extern void abort (void);

__attribute__((noinline)) int
foo (unsigned long long x)
{
  unsigned long long y = (x >> 31ULL) & 1ULL;
  if (y == 0ULL)
    return 0;
  return -1;
}

__attribute__((noinline)) int
bar (long long x)
{
  long long y = (x >> 31LL) & 1LL;
  if (y == 0LL)
    return 0;
  return -1;
}

int
main (void)
{
  if (sizeof (long long) != 8)
    return 0;
  if (foo (0x1682a9aaaULL))
    abort ();
  if (!foo (0x1882a9aaaULL))
    abort ();
  if (bar (0x1682a9aaaLL))
    abort ();
  if (!bar (0x1882a9aaaLL))
    abort ();
  return 0;
}
