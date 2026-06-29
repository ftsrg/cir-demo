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

struct barstruct { char const* some_string; } x;
extern void abort (void);
void __attribute__((noinline))
foo(void)
{
  if (!x.some_string)
    abort ();
}
void baz(int b)
{
  struct barstruct bar;
  struct barstruct* barptr;
  if (b)
    barptr = &bar;
  else
    {
      barptr = &x + 1;
      barptr = barptr - 1;
    }
  barptr->some_string = "Everything OK";
  foo();
  barptr->some_string = "Everything OK";
}
int main()
{
  x.some_string = (void *)0;
  baz(0);
  if (!x.some_string)
    abort ();
  return 0;
}
