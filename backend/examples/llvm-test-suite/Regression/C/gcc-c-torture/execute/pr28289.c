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

extern int ok (int);
extern void exit ();
static int gen_x86_64_shrd (int);
static int
gen_x86_64_shrd(int a __attribute__ ((__unused__)))
{
  return 0;
}

extern int gen_x86_shrd_1 (int);
extern void ix86_split_ashr (int);

void
ix86_split_ashr (int mode)
{
          (mode != 0
                      ? ok
                      : gen_x86_64_shrd) (0);
}

volatile int one = 1;
int
main (void)
{
  ix86_split_ashr (one);
  return 1;
}

int
ok (int i)
{
  exit (i);
}
