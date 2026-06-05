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

char headline[256];
struct hdr {
  char part1[9];
  char part2[8];
} p;

void __attribute__((noinline,noclone))
init()
{
  __builtin_memcpy (p.part1, "FOOBARFOO", sizeof (p.part1));
  __builtin_memcpy (p.part2, "SPEC CPU", sizeof (p.part2));
}

int main()
{
  char *x;
  int c;
  init();
  __builtin_memcpy (&headline[0], p.part1, 9);
  c = 9;
  x = &headline[0];
  x = x + c;
  __builtin_memset (x, ' ', 245);
  __builtin_memcpy (&headline[10], p.part2, 8);
  c = 18;
  x = &headline[0];
  x = x + c;
  __builtin_memset (x, ' ', 238);
  if (headline[10] != 'S')
    __builtin_abort ();
  return 0;
}
