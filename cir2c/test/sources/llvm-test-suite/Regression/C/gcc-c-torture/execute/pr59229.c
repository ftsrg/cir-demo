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

int i;

__attribute__((noinline, noclone)) void
bar (char *p)
{
  if (i < 1 || i > 6)
    __builtin_abort ();
  if (__builtin_memcmp (p, "abcdefg", i + 1) != 0)
    __builtin_abort ();
  __builtin_memset (p, ' ', 7);
}

__attribute__((noinline, noclone)) void
foo (char *p, unsigned long l)
{
  if (l < 1 || l > 6)
    return;
  char buf[7];
  __builtin_memcpy (buf, p, l + 1);
  bar (buf);
}

int
main ()
{
  for (i = 0; i < 16; i++)
    foo ("abcdefghijklmnop", i);
  return 0;
}
