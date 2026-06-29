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

/* { dg-skip-if "ptxas seg faults" { nvptx-*-* } { "-O3*" } { "" } } */

extern int f2(void);
extern int f3(void);
extern void f1(void);

void
ff(int fname, int part, int nparts)
{
  if (fname)  /* bb 0 */
    {
      if (nparts)  /* bb 1 */
	f1();  /* bb 2 */
    }
  else
    fname = 2; /* bb 3  */

  /* bb 4 is the branch to bb 10
     (bb 10 is physically at the end of the loop) */
  while (f3() /* bb 10 */)
    {
      if (nparts /* bb 5 */ && f2() /* bb 6 */)
	{
	  f1();  /* bb 7 ... */
	  nparts = part;
	  if (f3())  /* ... bb 7 */
	    f1();  /* bb 8 */
	  f1(); /* bb 9 */
	  break;
	}
    }

  if (nparts)  /* bb 11 */
    f1(); /* bb 12 */
  return; /* bb 13 */
}

int main(void)
{
  ff(0, 1, 0);
  return 0;
}

int f3(void) { static int x = 0; x = !x; return x; }
void f1(void) { abort(); }
int f2(void) { abort(); }
