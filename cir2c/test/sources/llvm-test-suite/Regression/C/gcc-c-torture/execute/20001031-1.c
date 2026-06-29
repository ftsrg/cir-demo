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

void t1 (int x)
{
  if (x != 4100)
    abort ();
}

int t2 (void)
{
  int i;
  t1 ((i = 4096) + 4);
  return i;
}

void t3 (long long x)
{
  if (x != 0x80000fffULL)
    abort ();
}

long long t4 (void)
{
  long long i;
  t3 ((i = 4096) + 0x7fffffffULL);
  return i;
}

main ()
{
  if (t2 () != 4096)
    abort ();
  if (t4 () != 4096)
    abort ();
  exit (0);
}
