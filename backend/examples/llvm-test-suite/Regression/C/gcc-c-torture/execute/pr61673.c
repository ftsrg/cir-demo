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

/* PR rtl-optimization/61673 */

char e;

__attribute__((noinline, noclone)) void
bar (char x)
{
  if (x != 0x54 && x != (char) 0x87)
    __builtin_abort ();
}

__attribute__((noinline, noclone)) void
foo (const char *x)
{
  char d = x[0];
  int c = d;
  if ((c >= 0 && c <= 0x7f) == 0)
    e = d;
  bar (d);
}

__attribute__((noinline, noclone)) void
baz (const char *x)
{
  char d = x[0];
  int c = d;
  if ((c >= 0 && c <= 0x7f) == 0)
    e = d;
}

int
main ()
{
  const char c[] = { 0x54, 0x87 };
  e = 0x21;
  foo (c);
  if (e != 0x21)
    __builtin_abort ();
  foo (c + 1);
  if (e != (char) 0x87)
    __builtin_abort ();
  e = 0x21;
  baz (c);
  if (e != 0x21)
    __builtin_abort ();
  baz (c + 1);
  if (e != (char) 0x87)
    __builtin_abort ();
  return 0;
}
