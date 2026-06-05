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

/* PR middle-end/77718 */

char a[64] __attribute__((aligned (8)));

__attribute__((noinline, noclone)) int
foo (void)
{
  return __builtin_memcmp ("bbbbbb", a, 6);
}

__attribute__((noinline, noclone)) int
bar (void)
{
  return __builtin_memcmp (a, "bbbbbb", 6);
}

int
main ()
{
  __builtin_memset (a, 'a', sizeof (a));
  if (((foo () < 0) ^ ('a' > 'b'))
      || ((bar () < 0) ^ ('a' < 'b')))
    __builtin_abort ();
  return 0;
}
