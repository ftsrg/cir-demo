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

/* On IRIX 6, PB is passed partially in registers and partially on the
   stack, with an odd number of words in the register part.  Check that
   the long double stack argument (PC) is still accessed properly.  */

struct s { int val[16]; };

long double f (int pa, struct s pb, long double pc)
{
  int i;

  for (i = 0; i < 16; i++)
    pc += pb.val[i];
  return pc;
}

int main ()
{
  struct s x;
  int i;

  for (i = 0; i < 16; i++)
    x.val[i] = i + 1;
  if (f (1, x, 10000.0L) != 10136.0L)
    abort ();
  exit (0);
}
