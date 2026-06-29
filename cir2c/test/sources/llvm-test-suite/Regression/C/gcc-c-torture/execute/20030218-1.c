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

/*  On H8, the predicate general_operand_src(op,mode) used to ignore
    mode when op is a (mem (post_inc ...)).  As a result, the pattern
    for extendhisi2 was recognized as extendqisi2.  */

extern void abort ();
extern void exit (int);

short *q;

long
foo (short *p)
{
  long b = *p;
  q = p + 1;
  return b;
}

int
main ()
{
  short a = 0xff00;
  if (foo (&a) != (long) (short) 0xff00)
    abort ();
  exit (0);
}
