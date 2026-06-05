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

/* { dg-require-effective-target trampolines } */

extern void abort (void);
extern void exit (int);

static void recursive (int n, void (*proc) (void))
{
  __label__ l1;

  void do_goto (void)
  {
    goto l1;
  }

  if (n == 3)
      recursive (n - 1, do_goto);
  else if (n > 0)
    recursive (n - 1, proc);
  else
    (*proc) ();
  return;

l1:
  if (n == 3)
    exit (0);
  else
    abort ();
}

int main ()
{
  recursive (10, abort);
  abort ();
}
