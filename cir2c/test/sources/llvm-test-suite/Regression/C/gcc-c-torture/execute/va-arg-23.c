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

/* PR 9700 */
/* Alpha got the base address for the va_list incorrect when there was
   a structure that was passed partially in registers and partially on
   the stack.  */

#include <stdarg.h>

struct two { long x, y; };

void foo(int a, int b, int c, int d, int e, struct two f, int g, ...)
{
  va_list args;
  int h;

  va_start(args, g);
  h = va_arg(args, int);
  if (g != 1 || h != 2)
    abort ();
}

int main()
{
  struct two t = { 0, 0 };
  foo(0, 0, 0, 0, 0, t, 1, 2);
  return 0;
}
