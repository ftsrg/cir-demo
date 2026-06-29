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

/* Test whether a partly call-clobbered register will be moved over a call.
   Although the original test case didn't use any GNUisms, it proved
   difficult to reduce without the named register extension.  */
#if __SH64__ == 32
#define LOC asm ("r10")
#else
#define LOC
#endif

unsigned int foo (char *c, unsigned int x, unsigned int y)
{
  register unsigned int z LOC;

  sprintf (c, "%d", x / y);
  z = x + 1;
  return z / (y + 1);
}

int main ()
{
  char c[16];

  if (foo (c, ~1U, 4) != (~0U / 5))
    abort ();
  exit (0);
}
