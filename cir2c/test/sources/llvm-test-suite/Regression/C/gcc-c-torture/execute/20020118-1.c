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

/* This tests an insn length of sign extension on h8300 port.  */

extern void exit (int);

volatile signed char *q;
volatile signed int n;

void
foo (void)
{
  signed char *p;

  for (;;)
    {
      p = (signed char *) q; n = p[2];
      p = (signed char *) q; n = p[2];
      p = (signed char *) q; n = p[2];
      p = (signed char *) q; n = p[2];
      p = (signed char *) q; n = p[2];
      p = (signed char *) q; n = p[2];
      p = (signed char *) q; n = p[2];
      p = (signed char *) q; n = p[2];
      p = (signed char *) q; n = p[2];
      p = (signed char *) q; n = p[2];
      p = (signed char *) q; n = p[2];
    }
}

int
main ()
{
  exit (0);
}
