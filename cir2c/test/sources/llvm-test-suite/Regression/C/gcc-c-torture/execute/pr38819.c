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

extern void exit (int);
extern void abort (void);

volatile int a = 1;
volatile int b = 0;
volatile int x = 2;
volatile signed int r = 8;

void __attribute__((noinline))
foo (void)
{
  exit (0);
}

int
main (void)
{
  int si1 = a;
  int si2 = b;
  int i;

  for (i = 0; i < 100; ++i) {
      foo ();
      if (x == 8)
	i++;
      r += i + si1 % si2;
  }
  abort ();
}
