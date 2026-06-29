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

/* PR c/37924 */

extern void abort (void);

signed char a;
unsigned char b;

int
test1 (void)
{
  int c = -1;
  return ((unsigned int) (a ^ c)) >> 9;
}

int
test2 (void)
{
  int c = -1;
  return ((unsigned int) (b ^ c)) >> 9;
}

int
main (void)
{
  a = 0;
  if (test1 () != (-1U >> 9))
    abort ();
  a = 0x40;
  if (test1 () != (-1U >> 9))
    abort ();
  a = 0x80;
  if (test1 () != (a < 0) ? 0 : (-1U >> 9))
    abort ();
  a = 0xff;
  if (test1 () != (a < 0) ? 0 : (-1U >> 9))
    abort ();
  b = 0;
  if (test2 () != (-1U >> 9))
    abort ();
  b = 0x40;
  if (test2 () != (-1U >> 9))
    abort ();
  b = 0x80;
  if (test2 () != (-1U >> 9))
    abort ();
  b = 0xff;
  if (test2 () != (-1U >> 9))
    abort ();
  return 0;
}
