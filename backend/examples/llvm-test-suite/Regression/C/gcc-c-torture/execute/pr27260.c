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

/* PR middle-end/27260 */

extern void abort (void);
extern void *memset (void *, int, __SIZE_TYPE__);

char buf[65];

void
foo (int x)
{
  memset (buf, x != 2 ? 1 : 0, 64);
}

int
main (void)
{
  int i;
  buf[64] = 2;
  for (i = 0; i < 64; i++)
    if (buf[i] != 0)
      abort ();
  foo (0);
  for (i = 0; i < 64; i++)
    if (buf[i] != 1)
      abort ();
  foo (2);
  for (i = 0; i < 64; i++)
    if (buf[i] != 0)
      abort ();
  if (buf[64] != 2)
    abort ();
  return 0;
}
