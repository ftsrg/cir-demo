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

struct foo
{
  unsigned half:16;
  unsigned long whole:32 __attribute__ ((packed));
};

f (struct foo *q)
{
  if (q->half != 0x1234)
    abort ();
  if (q->whole != 0x56789abcL)
    abort ();
}

main ()
{
  struct foo bar;

  bar.half = 0x1234;
  bar.whole = 0x56789abcL;
  f (&bar);
  exit (0);
}
