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

extern void abort (void);
extern void exit (int);

void do_exit (void) { exit (0); }
void do_abort (void) { abort (); }

void foo (int x, int a)
{
  if (x < a)
    goto doit;
  do_exit ();
  if (x != a)
    goto doit;

  /* else */
  do_abort ();
  return;

doit:
  do_abort ();
}

int main()
{
  foo (1, 0);
  return 0;
}
