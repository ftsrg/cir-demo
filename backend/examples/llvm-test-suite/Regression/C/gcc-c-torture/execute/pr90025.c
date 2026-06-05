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

/* PR middle-end/90025 */

__attribute__((noipa)) void
bar (char *p)
{
  int i;
  for (i = 0; i < 6; i++)
    if (p[i] != "foobar"[i])
      __builtin_abort ();
  for (; i < 32; i++)
    if (p[i] != '\0')
      __builtin_abort ();
}

__attribute__((noipa)) void
foo (unsigned int x)
{
  char s[32] = { 'f', 'o', 'o', 'b', 'a', 'r', 0 };
  ((unsigned int *) s)[2] = __builtin_bswap32 (x);
  bar (s);
}

int
main ()
{
  foo (0);
  return 0;
}
