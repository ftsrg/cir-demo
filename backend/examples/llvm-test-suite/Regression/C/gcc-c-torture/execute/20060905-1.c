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

/* PR rtl-optimization/28386 */
/* Origin: Volker Reichelt <reichelt@gcc.gnu.org> */

extern void abort(void);

volatile char s[256][3];

char g;

static void dummy(char a)
{
  g = a;
}

static int foo(void)
{
  int i, j=0;

  for (i = 0; i < 256; i++)
    if (i >= 128 && i < 256)
      {
	dummy (s[i - 128][0]);
	++j;
      }

  return j;
}

int main(void)
{
  if (foo () != 128)
    abort ();

  return 0;
}
